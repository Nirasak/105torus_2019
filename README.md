# 105torus_2019

## Description
Maths 105torus Epitech Teck1

Drawing circles, cylinders and cones is a good start for an image synthesis software, but one have to admit
it is not fully satisfying. . . This project is the continuation of the previous one, and should allow you to draw
more complex forms, such as a torus, which do not emerge from 2nd degree equations, but from superior
degree equations (4th degree in the torus case).

The objective of this project is to solve a 4th degree equation: a4x^4 +a3x^3 +a2x^2 +a1x^1 +a0 = 0. A direct
resolution method does exist (Ferrari’s method), but does not generalize to higher degrees. Thus, we will
rather compare 3 iterative algorithms:  
• The bisection method,  
• Newton’s method,  
• The secant method.  

#### USAGE
    ./105torus opt a0 a1 a2 a3 a4 n

#### DESCRIPTION
| params | description                                         |
| ------ |:---------------------------------------------------:|
| opt    | method option:                                      |
|        | 1 for the bisection method                          |
|        | 2 for Newton’s method                               |
|        | 3 for the secant method                             |
| a[0-4] | coefficients of the equation                        |
|n       | precision (the application of the polynomial to the |
|        | solution should be smaller than 10ˆ-n)              |

## Result
91.4% moulinette Epitech
