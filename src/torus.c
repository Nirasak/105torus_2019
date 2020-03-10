/*
** EPITECH PROJECT, 2020
** torus.c
** File description:
** torus
*/

#include <math.h>
#include "my.h"

int torus(torus_t *trs)
{
    if (trs->opt == 1)
        return (bisection(trs));
    if (trs->opt == 2)
        return (newton(trs));
    if (trs->opt == 3)
        return (secant(trs));
    return (84);
}
