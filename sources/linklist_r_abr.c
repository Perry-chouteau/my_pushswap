/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** linklist_r_abr.c
** - - - - - - - - - - - - - - - - - - - - -
** ra = rotate l_a toward the end, the first
**  element will become the last.
** - - - - - - - - - - - - - - - - - - - - -
** rb = rotate l_b toward the end, the first
**  element will become the last.
** - - - - - - - - - - - - - - - - - - - - -
** rr = ra and rb at the same time.
*/

#include "../includes/include.h"

void ra(cell_t **l_a)
{
    cell_t *cur;
    int tmp;
    int pos;

    if (l_a[0] == NULL)
        return ;
    tmp = l_a[0]->data;
    free_at(l_a, 0);
    cur = l_a[0];
    for (pos = 0; cur != NULL; pos += 1)
        cur = cur->next;
    add_at(l_a, tmp, pos + 1);
}

void rb(cell_t **l_b)
{
    ra(l_b);
}

void rr(cell_t **l_a, cell_t **l_b)
{
    ra(l_a);
    ra(l_b);
}