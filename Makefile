# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismael <ismael@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 11:17:53 by ismael            #+#    #+#              #
#    Updated: 2023/10/25 01:19:32 by ismael           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

# Liste de tous vos fichiers sources
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
      ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
	  
 

OBJ = $(SRC:.c=.o)

# Règle par défaut
all: $(NAME)

# Comment construire la bibliothèque
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Règles implicites pour construire les fichiers .o à partir des fichiers .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets
clean:
	rm -f $(OBJ)

# Règle pour nettoyer complètement
fclean: clean
	rm -f $(NAME)

# Règle pour reconstruire
re: fclean all

