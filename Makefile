SRCS	= ft_printf.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			make -C libft/
			cp libft/libft.a ${NAME}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}
			make clean -C libft/

fclean:		clean
			${RM} ${NAME}
			make fclean -C libft/

re:			fclean

.PHONY:		all clean fclean re
