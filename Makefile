# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 16:12:50 by valyssa-          #+#    #+#              #
#    Updated: 2024/10/22 15:46:41 by valyssa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_toupper.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_tolower.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memchr.c\
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c \
		ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putnbr_fd.c ft_putendl_fd.c ft_strmapi.c ft_striteri.c \
		ft_strtrim.c ft_itoa.c ft_split.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all