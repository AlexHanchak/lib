# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohanchak <ohanchak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:45:30 by ohanchak          #+#    #+#              #
#    Updated: 2022/10/28 17:34:25 by ohanchak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isalnum.c \
		 ft_isascii.c \
		 ft_isprint.c \
		 ft_strlen.c \
		 ft_memset.c \
		 ft_bzero.c \
		 ft_memcpy.c \
		 ft_memmove.c \
		 ft_strlcpy.c \
		 ft_strlcat.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_strchr.c \
		 ft_strrchr.c \
		 ft_strncmp.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_strnstr.c \
		 ft_atoi.c \
		 ft_calloc.c \
		 ft_strdup.c \
		 ft_substr.c \
		 ft_strjoin.c \
		 ft_strtrim.c \
		 ft_split.c \
		 ft_itoa.c \
		 ft_strmapi.c \
		 ft_striteri.c \
		 ft_putchar_fd.c \
		 ft_putstr_fd.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c \
		 get_next_line.c \
		 ft_free.c \
		 ft_message.c
SOURCE_BONUS = ft_lstnew.c \
			   ft_lstadd_front.c \
			   ft_lstsize.c \
			   ft_lstlast.c \
			   ft_lstadd_back.c \
			   ft_lstdelone.c \
			   ft_lstclear.c \
			   ft_lstiter.c \
			   ft_lstmap.c
OBJECT = $(SOURCE:%.c=%.o)
OBJECT_BONUS = $(SOURCE_BONUS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	ar -rcs $(NAME) $^

bonus : $(OBJECT_BONUS)
	ar -rcs $(NAME) $^

%.o : %.c
	cc -c -Wall -Wextra -Werror $^

clean :
	rm -f $(OBJECT) $(OBJECT_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all