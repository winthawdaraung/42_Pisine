SRC		= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS	= ${SRC:.c=.o}
HEAD	= ./includes/
LI_NAME	= libft.a

all:	${LI_NAME}

${LI_NAME}: ${OBJS}
			ar rcs ${LI_NAME} ${OBJS}
			ranlib ${LI_NAME}

%.o: %.c
			-cc -Wall -Wextra -Werror -c -I ${HEAD} $< -o ${<:.c=.o}

clean:
			rm -f ${OBJS}

fclean: clean
			rm -f ${LI_NAME}

re: fclean all

.PHONY:		all clean fclean re
