/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** linklist_s_abr.c
** - - - - - - - - - - - - - - - - - - - - -
** sa = swap the first two elements of l_a
** - - - - - - - - - - - - - - - - - - - - -
** sb = swap the first two elements of l_b
** - - - - - - - - - - - - - - - - - - - - -
** sc = sa and sb at the same time.
*/

#include "../includes/include.h"

void sa(cell_t **l_a)
{
    cell_t *prec = l_a[0];
    cell_t *cur = l_a[0];
    int tmp;
    if (l_a[0] == NULL || l_a[0]->next == NULL)
        return;
    cur = cur->next;
    tmp = prec->data;
    prec->data = cur->data;
    cur->data = tmp;
}

void sb(cell_t **l_b)
{
    sa(l_b);
}

void sc(cell_t **l_a, cell_t **l_b)
{
    sa(l_a);
    sa(l_b);
}