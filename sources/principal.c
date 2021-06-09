/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** principal.c
*/

#include "../includes/include.h"

//if (l_a[0]->data & 1 << 0);

void radix_by_one(cell_t **l_a, cell_t **l_b)
{
    int j;
    int len = len_list(l_a);

    for (int i = 0; i < 32; i += 1) {
        for (j = 0; j < len; j += 1) {
            if (!(l_a[0]->data & 1 << i)) {
                pb(l_a, l_b);
                write(1, "pb ", 3);
            }
            else {
                ra(l_a);
                write(1, "ra ", 3);
            }
        }
        for (; l_b[0] != NULL; ) {
            pa(l_a, l_b);
            write(1, "pa ", 3);
        }
    }
}

void radix_by_two(cell_t **l_a)
{
    int len = len_list(l_a);
    cell_t *cur = l_a[0];

    for (int i = 0; i < len; i += 1) {
        if (cur->data >= 0)
            cur = cur->next;
        else if (cur->data < 0) {
            rra(l_a);
            write(1, "rra ", 4);
        }
    }
}

void swap_all(cell_t **l_a, cell_t **l_b)
{
    radix_by_one(l_a, l_b);
    radix_by_two(l_a);
    write(1, "ra rra\n", 7);
}

int ps(int ac, char **av)
{
    cell_t **l_a = malloc(sizeof(cell_t *));
    cell_t **l_b = malloc(sizeof(cell_t *));
    if (init(l_a, l_b, ac, av) == 1) {
        write(1, "\n", 1);
        return 0;
    }
    swap_all(l_a, l_b);
    print_list(l_a);
    free_list(l_a);
    free_list(l_b);
    free(l_a);
    free(l_b);
    return 0;
}

int main(int ac, char **av)
{
    if (my_error(ac, av) == 1)
        return 0;
    if (my_error(ac, av) == 84)
        return 84;
    return (ps(ac, av));
}