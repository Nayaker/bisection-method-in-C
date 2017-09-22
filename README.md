# Bisection method of solving an equation 

It is a quite simple method of solving an equation numerically in cases where the exact solution is difficuilt to find. In this method we repetedly bisect an interval into halves until we reach the desired accuracy. It is a consequence of well known **mean value theorem** of calculus.

I have used the equation  `x - cos(x) = 0  ` as a demonstration. This problem is also on the book "Quantum Mechanics" of Schaum Outlines page 256. They have done that in FORTRAN though while my code is on C. My `Python` code for this method can be found [here](https://github.com/physicistbkb/Bisection-method-in-Python).

The code was written under Debian GNU/Linux in `vim` and compiled using `GCC`.
``` sh
$ gcc --version
gcc (Debian 7.2.0-4) 7.2.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
Here's my vim. Pretty comfy I tell you. I shall never have the privilige to use [2 GiB just to print a blinking cursor](https://github.com/Microsoft/vscode/issues/22900)  though!
![N](https://imgoat.com/uploads/c8349cc726/44647.png)


Here's the code running. The value obtained after 16 iterations can be verified with the book or other sources as well.
![N](https://imgoat.com/uploads/c8349cc726/44644.png)

# LICENSE
![GNU_GPL_v3.0](https://www.gnu.org/graphics/gplv3-127x51.png)


Totally [RMS](https://stallman.org/) approved!
While you're at it, please check out [GNU](https://www.gnu.org) and [Free Software Foundation](https://www.fsf.org) as well!
