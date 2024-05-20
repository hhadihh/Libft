# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 17:38:55 by hhedjam           #+#    #+#              #
#    Updated: 2023/12/09 19:38:23 by hhedjam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#compilation
CC = cc
CFLAGS = -Wall -Werror -Wextra

#sources
SRC_DIR = .
INC_DIR = .

#fichiers
SRCS =    ft_atoi.c \
    ft_isascii.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isdigit.c \
    ft_isprint.c            \
    ft_split.c                \
    ft_strjoin.c            \
    ft_strdup.c                \
    ft_strlcpy.c            \
    ft_strlcat.c            \
    ft_strlen.c                \
    ft_strnstr.c            \
    ft_tolower.c            \
    ft_toupper.c            \
    ft_itoa.c                \
    ft_memcmp.c                \
    ft_memcpy.c                \
    ft_putstr_fd.c            \
    ft_putchar_fd.c            \
    ft_putnbr_fd.c            \
    ft_calloc.c                \
    ft_putendl_fd.c            \
    ft_strncmp.c            \
    ft_bzero.c                \
    ft_strchr.c                \
    ft_strrchr.c            \
    ft_memmove.c            \
    ft_memset.c                \
    ft_memchr.c                \
    ft_substr.c                \
    ft_strmapi.c            \
    ft_striteri.c            \
    ft_strtrim.c

SRCS_BONUS = ft_lstnew.c    \
    ft_lstadd_front.c        \
    ft_lstsize.c            \
    ft_lstlast.c            \
    ft_lstadd_back.c        \
    ft_lstdelone.c            \
    ft_lstclear.c            \
    ft_lstiter.c            \
    ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

NAME = libft.a

HEADER = includes

CC = cc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all :  $(NAME)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
        
clean:
	$(RM) $(OBJS) ${OBJS_BONUS}

fclean: clean
	$(RM) $(NAME)
	@echo " $(NAME) have been deleted"

re:    fclean all

.PHONY: all clean fclean re bonus
