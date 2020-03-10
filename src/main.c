/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <stdbool.h>
#include "my.h"

int main(int ac, char **av)
{
    torus_t trs;

    if (ac != 8)
        return (84);
    if (init_struct(ac, av, &trs) == false)
        return (84);
    return (torus(&trs));
}
