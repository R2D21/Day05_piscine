NAME	=	bin/day05

RM	=	rm -fr

CC	=	/usr/bin/gcc

CFLAGS	=	-I /usr/include/ -I includes/ -W -Wall -Werror -pedantic -std=gnu99

GFLAGS	=	-I /usr/include/ -I includes/-faggressive-loop-optimizations -g3 -ggdb -W -Wall -Werror -pedantic -std=gnu99

LS		=	/bin/ls

GREP	=	/usr/bin/grep

NORMINETTE = norminette -R CheckForbiddenSourceHeader

NORME = $(NORMINETTE) | $(GREP) -v -h ft*

SRCS	=	main.c \
			ex00/ft_putstr.c \
			ex01/ft_putnbr.c \
			ex02/ft_atoi.c \
			ex03/ft_strcpy.c \
			ex04/ft_strncpy.c \
			ex06/ft_strcmp.c \
			ex07/ft_strncmp.c \
			ex08/ft_strupcase.c \
			ex09/ft_strlowcase.c \
			ex11/ft_str_is_alpha.c \
			ex12/ft_str_is_numeric.c \
			ex13/ft_str_is_lowercase.c \
			ex14/ft_str_is_uppercase.c \
			ex15/ft_str_is_printable.c \
			ex16/ft_strcat.c \
			ex17/ft_strncat.c \
			ex18/ft_strlcat.c \
			ex19/ft_strlcpy.c \

OBJS	=	$(SRCS:.c=.o)

ECHO	=	echo -e

all	:	$(NAME)

$(NAME)	:	$(OBJS)

		$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

clean	:

		$(RM) $(OBJS)
		sh clean

fclean	:	$(clean)
		$(RM) $(NAME)

re	:	fclean all

debug	:	$(OBJS)

		$(RM) $(NAME)
		$(CC)  $(GFLAGS) $(OBJS) -o $(NAME)
		$(RM) $(OBJS)

norme	:	$(NAME)
			$(NORME)
.PHONY	: all clean fclean re