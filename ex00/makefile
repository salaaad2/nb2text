SRCS    = $(wildcard *.c)

OBJS    = ${SRCS:.c=.o}

NAME    = Rush02

CC        = cc

RM        = rm -f

CFLAGS    = -Wall -Wextra -Werror

.c.o    = ${CC} -o ${NAME} ${OBJS}

all:      ${NAME}

clean:
	          ${RM} ${OBJS}

fclean:      clean
	          ${RM} ${NAME}

re:          fclean all
