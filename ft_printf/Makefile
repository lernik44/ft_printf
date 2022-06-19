# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 19:44:06 by lmirzakh          #+#    #+#              #
#    Updated: 2022/03/28 16:24:45 by lmirzakh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= cc
CFLAGS	= -Wall -Werror -Wextra
AR		= ar rcs
RM		= rm -f

SRCS_A	=	$(wildcard ft_*.c)
SRCS_B	=	$(wildcard ft_lst*.c)
SRCS	=	$(filter-out $(SRCS_B), $(SRCS_A))

OBJS	=	$(patsubst %.c, %.o, $(SRCS))
OBJS_B	=	$(patsubst %.c, %.o, $(SRCS_B))

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

bonus:		$(NAME) $(OBJS_B)
			$(AR) $(NAME) $(OBJS_B)

clean:		
			$(RM) $(OBJS) $(OBJS_B)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
