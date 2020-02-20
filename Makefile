SRCS	= ft_printf.c printf_utils.c printf_c.c printf_s.c printf_d.c printf_p.c printf_x_lower.c printf_x_upper.c printf_u.c printf_format.c

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

re:			fclean all

.PHONY:		all clean fclean re
