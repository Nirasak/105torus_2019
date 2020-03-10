/*
** EPITECH PROJECT, 2020
** secant.c
** File description:
** secant
*/

#include <stdio.h>
#include <math.h>
#include "my.h"

int secant(torus_t *trs)
{
    double x = 0;
    double x1 = 1;
    double xn = 0;

    for (int i = 0; ((ABS(calc(trs, xn))) > (1 / pow(10, trs->n))); i++) {
        if (i > 500)
            return (84);
        if ((calc(trs, x1) - calc(trs, x)) == 0)
            return (84);
        xn = x1 - ((calc(trs, x1) * (x1 - x)) / (calc(trs, x1) - calc(trs, x)));
        printf("x = %.*f\n", trs->n, xn);
        x = x1;
        x1 = xn;
    }
    if (xn < 0 || xn > 1)
        return (84);
    return (0);
}
