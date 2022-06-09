# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 15:34:16 by salim             #+#    #+#              #
#    Updated: 2022/06/09 15:37:15 by salim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = ft_atoi.c ft_do_op.c ft_putnbr.c ft_putstr.c operator.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(wildcard *.o)

fclean : clean
	rm -f $(NAME)

re : fclean all
