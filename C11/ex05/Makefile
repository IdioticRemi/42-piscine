SRCS	= ./do-op.c ./ft_atoi.c ./ft_math.c ./ft_puts.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Wall
NAME	= do-op

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -I includes -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all