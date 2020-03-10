/*
** EPITECH PROJECT, 2019
** test_torus
** File description:
** tests my torus
*/

#include "my.h"
#include <criterion/criterion.h>

int torus(torus_t *trs);

Test(torus, basic_test_1)
{
    torus_t trs;
    char *av[8] = {"./105torus", "1", "-1", "0", "6", "-5", "1", "6"};

    init_struct(8, av, &trs);
    cr_assert_eq(torus(&trs), 0);
}

Test(torus, basic_test_2)
{
    torus_t trs;
    char *av[8] = {"./105torus", "2", "-1", "0", "6", "-5", "1", "12"};

    init_struct(8, av, &trs);
    cr_assert_eq(torus(&trs), 0);
}

Test(torus, basic_test_3)
{
    torus_t trs;
    char *av[8] = {"./105torus", "3", "-1", "0", "6", "-5", "1", "8"};

    init_struct(8, av, &trs);
    cr_assert_eq(torus(&trs), 0);
}

Test(torus, newton_test)
{
    torus_t trs;
    char *av[8] = {"./105torus", "2", "-1", "0", "6", "0", "0", "8"};

    init_struct(8, av, &trs);
    cr_assert_eq(torus(&trs), 0);
}

Test(torus, newton_test_2)
{
    torus_t trs;
    char *av[8] = {"./105torus", "2", "-1", "0", "6", "0", "10", "4"};

    init_struct(8, av, &trs);
    cr_assert_eq(torus(&trs), 0);
}