/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** linklist_rr_abr.c
** - - - - - - - - - - - - - - - - - - - - -
** rra = rotate l_a toward the end, the last
**  element will become the first.
** - - - - - - - - - - - - - - - - - - - - -
** rrb = rotate l_b toward the end, the last
**  element will become the first.
** - - - - - - - - - - - - - - - - - - - - -
** rrr = rra and rrb at the same time.
*/

#include "../includes/include.h"

void rra(cell_t **l_a)
{
    cell_t *cur;
    int tmp;
    int pos;

    if (l_a[0] == NULL)
        return ;
    cur = l_a[0];
    for (pos = 0; cur->next != NULL; pos += 1)
        cur = cur->next;
    tmp = get_at(l_a, pos + 1);
    free_at(l_a, pos + 1);
    add_at(l_a, tmp, 0);
}

void rrb(cell_t **l_b)
{
    rra(l_b);
}

void rrr(cell_t **l_a, cell_t **l_b)
{
    rra(l_a);
    rra(l_b);
}