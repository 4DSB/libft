#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amittal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/05 10:11:02 by amittal           #+#    #+#              #
#    Updated: 2017/06/06 20:58:13 by amittal          ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME		=	libft.a
CFLAGS		=	-Wall -Wextra -Werror -I. -c
FILES		=	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c
OBJ 		= 	$(FILES:%.c=%.o)
vpath %.c srcs
all: $(NAME)

copy:
		cp -f srcs/*.c .
#cp -f additional-funcs/*.c .
#cp -f bonus-funcs/*.c .
#cp -f personal-funcs/*.c


# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(FILES)
# comment this line if you don't want it to remove the source files from the root

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
