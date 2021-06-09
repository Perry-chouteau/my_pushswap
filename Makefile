##
## EPITECH PROJECT, 2020
## B-CPE-110-PAR-1-3-pushswap-perry.chouteau
## File description:
## Makefile
##

SRC =	sources/principal.c	\
		sources/init.c	\
		sources/linklist_s_abc.c\
		sources/linklist_p_ab.c	\
		sources/linklist_r_abr.c	\
		sources/linklist_rr_abr.c	\

SRC_PRINTF =	printf_dir/sources/my_printf.c	\
				printf_dir/sources/cond1.c	\
				printf_dir/sources/cond2.c	\
\
				printf_dir/sources/convert_printf.c	\
				printf_dir/sources/putnbr_printf.c	\
				printf_dir/sources/putchar_printf.c	\
				printf_dir/sources/putstr_printf.c	\
				printf_dir/sources/revstr_printf.c

SRC_LIB =	lib_dir/sources/my_str_isnum.c	\
			lib_dir/sources/my_getnbr.c	\
\
			lib_dir/sources/my_put_nbr.c	\
			lib_dir/sources/my_putchar.c	\
			lib_dir/sources/my_putstr.c	\
			lib_dir/sources/my_strlen.c	\
			lib_dir/sources/my_strcmp.c	\
			lib_dir/sources/my_strncmp.c	\
\
			lib_dir/sources/main_linklist.c	\
			lib_dir/sources/linklist.c

SRC_TEST = tests/*.c

OBJ =	$(SRC_LIB:.c=.o)	\
		$(SRC_PRINTF:.c=.o)	\
		$(SRC:.c=.o)

NAME = push_swap
NAME_TEST = unit_tests

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -Wall -Wextra

clean:
	rm -rf *~
	cd sources/ && rm -rf *~
	cd printf_dir/sources/ && rm -rf *~
	cd lib_dir/sources/ && rm -rf *~
	rm -rf *.gcda && rm -rf *.gcno
	rm -rf $(NAME)
	rm -rf unit_tests

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(EXE)

re: fclean all

tests_run:	fclean $(OBJ)
	gcc -o $(NAME_TEST) $(OBJ) $(SRC_TEST) --coverage -l criterion
	./unit_tests
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches
