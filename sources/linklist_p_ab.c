/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** linklist_p_ab.c
** - - - - - - - - - - - - - - - - - - - - -
** pa = take the first element from l_b and
** move it to the first position on the l_a list
** - - - - - - - - - - - - - - - - - - - - -
** pb = take the first element from l_b and
** move it to the first position on the l_a list
** - - - - - - - - - - - - - - - - - - - - -
*/

#include "../includes/include.h"

void pb(cell_t **l_a, cell_t **l_b)
{
    cell_t *cur = l_a[0];

    add_at(l_b, cur->data, 0);
    free_at(l_a, 0);
}

void pa(cell_t **l_a, cell_t **l_b)
{
    pb(l_b, l_a);
}