/*
** EPITECH PROJECT, 2020
** B-EXAMPLE-100-PAR-1-3-example-perry.chouteau
** File description:
** empty_linked_cell_t.c
*/

#include "../includes/my.h"

static cell_t *createcell(int data)
{
    cell_t *cell = malloc(sizeof(cell_t));

    if (cell == NULL)
        return NULL;
    cell->data = data;
    cell->next = NULL;
    return cell;
}

void add_at(cell_t **list, int data, int pos)
{
    cell_t *cell = createcell(data);
    cell_t *prec = list[0];
    cell_t *cur = list[0];
    int i = 0;

    if (list[0] == NULL) {
        list[0] = cell;
        return ;
    } else if (pos <= 0) {
        cell->data = data;
        cell->next = list[0];
        list[0] = cell;
        return ;
    }
    while (i < pos && cur != NULL) {
        i += 1;
        prec = cur;
        cur = cur->next;
    }
    prec->next = cell;
    cell->next = cur;
}

int get_at(cell_t **list, int pos)
{
    cell_t *cur = *list;
    for (int i = 0; i < pos && cur->next != NULL; i += 1)
        cur = cur->next;
    return cur->data;
}

void set_at(cell_t **list, int data, int pos)
{
    cell_t *cur = list[0];

    for (int i = 0; i < pos && cur->next != NULL; i += 1) {
        cur = cur->next;
    }
    cur->data = data;
}

void free_at(cell_t **list, int pos)
{
    cell_t *prec = list[0];
    cell_t *cur = list[0];

    if (list[0] == NULL)
        return ;
    if (pos <= 0 || cur->next == NULL) {
        list[0] = list[0]->next;
        free(prec);
        return ;
    }
    for (int i = 0; i < pos && cur->next != NULL; i += 1) {
        prec = cur;
        cur = cur->next;
    }
    if (cur->next != NULL)
        prec->next = cur->next;
    else
        prec->next = NULL;
    free(cur);
}