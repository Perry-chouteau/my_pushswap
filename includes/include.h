/*
** EPITECH PROJECT, 2020
** Psu2
** File description:
** navy.h
*/

#ifndef ITSC_H
#define ITSC_H

//lib - lib_c
#include "../lib_dir/includes/my.h"
#include <stdlib.h>
#include <string.h>

//write
#include "../printf_dir/includes/my_printf.h"
#include <unistd.h>
#include <stdio.h>

//math
#include <math.h>

//signal
#include <signal.h>
#include <stddef.h>

// sys & bits
#include <sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

//criterion
#include <criterion/criterion.h>

// error / -h / init
int my_error(int ac, char **av);
void describe(void);
int init(cell_t **l_a, cell_t **l_b, int ac, char **av);

void sa(cell_t **l_a);
void sb(cell_t **l_b);
void sc(cell_t **l_a, cell_t **l_b);

void pb(cell_t **l_b, cell_t **l_a);
void pa(cell_t **l_a, cell_t **l_b);

void ra(cell_t **l_a);
void rb(cell_t **l_b);
void rr(cell_t **l_a, cell_t **l_b);

void rra(cell_t **l_a);
void rrb(cell_t **l_b);
void rrr(cell_t **l_a, cell_t **l_b);

#endif