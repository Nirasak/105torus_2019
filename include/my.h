/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#define ABS(x) (x) > 0 ? (x) : -(x)

#include <stdbool.h>
typedef struct trs
{
    int opt;
    int a0;
    int a1;
    int a2;
    int a3;
    int a4;
    int n;
} torus_t;

int torus(torus_t *trs);
int bisection(torus_t *trs);
int newton(torus_t *trs);
int secant(torus_t *trs);
double calc(torus_t *trs, double x);
bool init_struct(int ac, char **av, torus_t *trs);
#endif
