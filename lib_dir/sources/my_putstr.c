/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** say character of a string, one by one
*/

#include "../includes/my.h"

int my_putstr(char const *str)
{
    int i;

    for (i = 0; str[i]; i += 1);
    write(1, str, i);
    return 0;
}
