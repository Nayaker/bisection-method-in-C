#include <stdio.h>
#include <math.h>

float func(float x) {
    return (cos(x)-x);
}

int main() {

    float a, b, c, tolerance=0.00001;
    int max_iterations;

    printf("Enter the values of a, b and max iterations.\n");
    scanf("%f%f%d",&a,&b,&max_iterations);

      printf("iteration\t a\t\t b\t\t c\t\t func(c)\n");
      printf("---------\t -\t\t -\t\t -\t\t --------\n");
        int i = 0;
        while (i <= max_iterations) {
            c = (a+b)/2;
            if (func(c) == 0 ){ //Check if c is already the root. If yes we stop the routine to find c and exit the program.
                printf("The root is %f.\n", c);
                return 0;
            } else if(func(a)*func(c) < 0){ //check for sign
                b = c;
                printf("%d\t\t %f\t %f\t %f\t %f\n", i, a, b, c, func(c));
            } else if(func(c)*func(b) < 0) { //check for sign
                a = c;
                printf("%d\t\t %f\t %f\t %f\t %f\n",i, a, b, c, func(c));
            } else {
                printf("Why did the process fail? Really makes you fink! Hmm.\n"); //possibly the ranges are too off for meaningful convergence
                return 0;
            }
            i++;
        }
        //the above while loop returns the c after the given number of iterations.

        if(func(c) == 0 || fabs(a-b)/2 < tolerance) {  //we check if c found above matches tolerance criteria
            printf("The root obtained afer %ith iteration is %.10f.\n",i-1,c); //i runs to max_iterations+1
        }
        else { //we were unable to find the roots upto the assumed tolerance using the provided number of iterations.
            printf("Unable to find roots. The max iterations isn't sufficient to meet tolerance.\n");
        }


    return (0);
}
