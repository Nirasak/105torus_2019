/*
** EPITECH PROJECT, 2020
** utils_torus
** File description:
** utils_torus
*/

#include <stdlib.h>
#include "my.h"

bool my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    for (; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (0);
    return (1);
}

bool init_struct(int ac, char **av, torus_t *trs)
{
    for (int i = 1; i < ac; i++)
        if (my_str_isnum(av[i]) == false)
            return (false);
    trs->opt = atoi(av[1]);
    trs->a0 = atoi(av[2]);
    trs->a1 = atoi(av[3]);
    trs->a2 = atoi(av[4]);
    trs->a3 = atoi(av[5]);
    trs->a4 = atoi(av[6]);
    trs->n = atoi(av[7]);
    if (trs->opt < 1 || trs->opt > 3 || trs->n < 0)
        return (false);
    return (true);
}