# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 13:35:48 by salim             #+#    #+#              #
#    Updated: 2022/06/07 20:48:37 by salim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCS = includes

LIBC = ar -rc

RM = rm -f

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME} : ${OBJS}
	${LIBC} ${NAME} ${OBJS} 

all : ${NAME}

clean : 
		${RM} ${OBJS}

fclean :	clean
	${RM} ${NAME}


re : fclean all

.PHONY: all clean fclean re .c.o 
