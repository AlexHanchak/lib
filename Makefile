# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohanchak <ohanchak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:45:30 by ohanchak          #+#    #+#              #
#    Updated: 2022/10/28 16:20:42 by ohanchak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAG = -Wall -Wextra -Werror

SRCS =	ft_lstlast.c\
		ft_striteri.c\
		ft_lstmap.c\
		ft_strjoin.c\
		ft_atoi.c\
		ft_lstnew.c\
		ft_strlcat.c\
		ft_bzero.c\
		ft_lstsize.c\
		ft_strlcpy.c\
		ft_calloc.c\
		ft_memchr.c\
		ft_strlen.c\
		ft_isalnum.c\
		ft_memcmp.c\
		ft_strmapi.c\
		ft_isalpha.c\
		ft_memcpy.c\
		ft_strncmp.c\
		ft_isascii.c\
		ft_memmove.c\
		ft_strnstr.c\
		ft_isdigit.c\
		ft_memset.c\
		ft_strrchr.c\
		ft_isprint.c\
		ft_putchar_fd.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_putendl_fd.c\
		ft_substr.c\
		ft_lstadd_back.c\
		ft_putnbr_fd.c\
		ft_tolower.c\
		ft_lstadd_front.c\
		ft_putstr_fd.c\
		ft_toupper.c\
		ft_lstclear.c\
		ft_split.c\
		ft_lstdelone.c\
		ft_strchr.c\
		ft_lstiter.c\
		ft_strdup.c\


OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(SRCS) $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf  $(OBJS)
fclean:
	rm -f $(NAME)

re: fclean all
