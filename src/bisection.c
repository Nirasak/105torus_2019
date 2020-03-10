/*
** EPITECH PROJECT, 2020
** bisection.c
** File description:
** bisection
*/

#include <stdio.h>
#include <math.h>
#include "my.h"

double calc(torus_t *trs, double x)
{
    return ((trs->a4 * x * x * x * x) + (trs->a3 * x * x * x)
            + (trs->a2 * x * x) + (trs->a1 * x) + trs->a0);
}

int bisection(torus_t *trs)
{
    double a = 0;
    double b = 1;
    double c = 0;

    for (int i = 1; round(a * pow(10, trs->n) + 1) < round(b * pow(10, trs->n)); i++) {
        if (i > 500)
            return (84);
        c = (a + b) / 2;
        if (i < trs->n)
            printf("x = %.*f\n", i, c);
        else
            printf("x = %.*f\n", trs->n, c);
        if ((calc(trs, c) * calc(trs, a)) < 0)
            b = c;
        else
            a = c;
    }
    if (c < 0 || c > 1)
        return (84);
    return (0);
}
