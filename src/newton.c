/*
** EPITECH PROJECT, 2020
** newton.c
** File description:
** newton
*/

#include <stdio.h>
#include <math.h>
#include "my.h"

double deriv(torus_t *trs, double x)
{
    return ((trs->a4 * 4 * pow(x, 3)) + (trs->a3 * 3 * pow(x, 2))
            + (trs->a2 * 2 * x) + trs->a1);
}

int newton(torus_t *trs)
{
    double x = 0.5;

    printf("x = %.1f\n", x);
    for (int i = 1; ((ABS(calc(trs, x))) > (1 / pow(10, trs->n))); i++) {
        if (i > 500 || deriv(trs, x) == 0)
            return (84);
        if (deriv(trs, x) == 0)
            return (84);
        x = x - (calc(trs, x) / deriv(trs, x));
        printf("x = %.*f\n", trs->n, x);
    }
    if (x < 0 || x > 1)
        return (84);
    return (0);
}