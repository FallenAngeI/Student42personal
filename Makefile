# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 15:08:03 by pfilipe-          #+#    #+#              #
#    Updated: 2024/11/06 15:08:22 by pfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:
NAME := libft.a
# File to be created after running this script.

SRCS := $(wildcard *.c)
# Automatically select all .c files in the directory.

SRCS_O := ${SRCS:.c=.o}
# Sets a list of SRC files {.c} changed to {.o}.

CC := cc
RM := /bin/rm -rf
# Command to forcefully remove the directories without user confirmation.
CFLAGS := -Wall -Wextra -Werror -I*.h
# Alias from 'CC' adding the flags.

AR := ar -rc # Create a file with the object files {.o} - Syntax: "ar rc library.a ft_1.o ft2.o".
RL := ar -s # Create an index for the static library.

${NAME}: ${SRCS_O}
    ${AR} ${NAME} ${SRCS_O}
    ${RL} ${NAME}
    echo 'Mandatory Ok'
# Adding the OBJS inside the library.

all: ${NAME}

clean:
    ${RM} ${SRCS_O}

fclean: clean
    ${RM} ${NAME}

re: fclean all

norm:
    norminette ${SRCS} *.h

author:
    echo 'pfilipe-'

.PHONY: all clean fclean re norm author