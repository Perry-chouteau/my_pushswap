/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** init.c
*/

#include "../includes/include.h"

void describe(void)
{
    my_printf("USAGE\n");
    my_printf("   ./push_swap [nombre1, nombre 2, ...]\n");
    my_printf("DESCRIPTION\n");
    my_printf("sort all number, giving, step by step, what we have done.\n");
}

int my_error(int ac, char **av)
{
    if (ac == 1)
        return 84;
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        describe();
        return 1;
    }
    return 0;
}

int init(cell_t **l_a, cell_t **l_b, int ac, char **av)
{
    cell_t *prec;
    cell_t *cur;
    int i = 0;

    if (ac == 2)
        return 1;
    l_a[0] = empty_list();
    l_b[0] = empty_list();
    for (; i < (ac - 1); i += 1)
        add_at(l_a, my_getnbr(av[i + 1]), i);
    prec = l_a[0];
    cur = l_a[0];
    while (cur != NULL) {
        if (prec->data > cur->data)
            return 0;
        prec = cur;
        cur = cur->next;
    }
    return 1;
}