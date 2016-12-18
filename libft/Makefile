# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 08:05:26 by thgeorge          #+#    #+#              #
#    Updated: 2016/12/15 13:12:18 by thgeorge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



			#          	   	   #
			#   GENERAL VARS   #
			#				   #

NAME 		= 	libft.a

CC			=	gcc
CFLAGS 		=	-Wall -Wextra -Werror

SRC_PATH 	= 	.
OBJ_PATH	=	.
INC_PATH	=	.




			#          		 #
			#   FILES NAME   #
			#				 #

SRC_NAME	=	ft_putchar.c 			\
				ft_putstr.c 			\
				ft_putnbr.c 			\
				ft_isalpha.c 			\
				ft_isdigit.c 			\
				ft_isalnum.c 			\
				ft_isascii.c 			\
				ft_isprint.c 			\
				ft_toupper.c 			\
				ft_tolower.c 			\
				ft_putendl.c 			\
				ft_putchar_fd.c 		\
				ft_putstr_fd.c 			\
				ft_putendl_fd.c 		\
				ft_putnbr_fd.c 			\
				ft_strlen.c 			\
				ft_strdup.c 			\
				ft_strcpy.c 			\
				ft_strncpy.c 			\
				ft_strcat.c 			\
				ft_strncat.c 			\
				ft_strchr.c 			\
				ft_strrchr.c 			\
				ft_strstr.c 			\
				ft_strnstr.c 			\
				ft_strcmp.c 			\
				ft_strncmp.c 			\
				ft_atoi.c 				\
				ft_memset.c 			\
				ft_bzero.c 				\
				ft_startbyword.c 		\
				ft_memcpy.c 			\
				ft_memcpy_rev.c			\
				ft_isspace.c 			\
				ft_skipspace.c 			\
				ft_skipspace_clean.c	\
				ft_isope.c 				\
				ft_issimpleope.c 		\
				ft_islower.c 			\
				ft_isupper.c 			\
				ft_memccpy.c 			\
				ft_memalloc.c 			\
				ft_memdel.c				\
				ft_memmove.c			\
				ft_memcmp.c				\
				ft_memchr.c				\
				ft_strnew.c				\
				ft_strdel.c				\
				ft_strclr.c				\
				ft_striter.c			\
				ft_striteri.c			\
				ft_strmap.c				\
				ft_strmapi.c			\
				ft_strequ.c				\
				ft_strnequ.c			\
				ft_strsub.c				\
				ft_strjoin.c			\
				ft_strrev.c				\
				ft_chardedouble.c		\
				ft_strtrim.c			\
				ft_strsplit.c			\
				ft_itoa.c				\
				ft_absval.c				\
				ft_lstnew.c				\
				ft_lstdelone.c			\
				ft_lstdel.c				\
				ft_lstadd.c				\
				ft_lstiter.c			\
				ft_lstmap.c				\
				ft_strlcat.c			\
				ft_throw.c				\
				ft_sqrt.c				\
				ft_upsqrt.c				\
				ft_strcnew.c			\
				ft_tablen.c				\
				ft_puttab.c				\
				ft_tabdel.c				\
				ft_lstlen.c				\
				ft_get_next_line.c		\
				ft_strjoin_f.c

OBJ_NAME 	=	$(patsubst %.c, %.o, $(SRC_NAME))

INC_NAME	=	libft.h




			#            #
			#   ACCESS   #
			#            #

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
INC = $(addprefix $(INC_PATH)/,$(INC_NAME))




			#           #
			#   RULES   #
			#           #

.PHONY:  all nn clean fclean syntax re


all:	$(NAME)

$(NAME):
		@printf $(P_YEL) "    →  Compiling libft.a"
		@$(CC) $(FLAGS) -c $(SRC) -I $(INC)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

nn:
		@echo "\n"
		@printf $(PS_GRN) "=== →  Norminette  ← ==="
		@echo "\n"
		@printf $(P_YEL) " →  Sources  ←"
		@norminette $(SRC)
		@echo "\n"
		@printf $(P_YEL) " →  Headers  ←"
		@norminette $(INC)

clean:
		@printf $(P_MAG) "    →  Removing tmp files (libft.a)"
		@rm -f $(OBJ)

fclean:
		@printf $(P_MAG) "    →  Removing objects files (libft.a)"
		@rm -f $(NAME)

syntax:
		clear
		@printf $(PS_RED) "=== →  Checking syntax  ← ==="
		@echo "\n"
		@$(CC) -fsyntax-only $(CFLAGS) $(SRC)

re:		fclean all




			#          			  #
			#   PRINTF COLORING   #
			#			          #


# Textes colores non soulignes
P_RED		=	"\e[31;m%s\e[0m\n"
P_GRN		=	"\e[32;m%s\e[0m\n"
P_YEL		=	"\e[33;m%s\e[0m\n"
P_BLU		=	"\e[34;m%s\e[0m\n"
P_MAG		=	"\e[35;m%s\e[0m\n"
P_CYA		=	"\e[36;m%s\e[0m\n"

# Textes colores soulignes
PS_RED		=	"\e[31;4m%s\e[0m\n"
PS_GRN		=	"\e[32;4m%s\e[0m\n"
PS_YEL		=	"\e[33;4m%s\e[0m\n"
PS_BLU		=	"\e[34;4m%s\e[0m\n"
PS_MAG		=	"\e[35;4m%s\e[0m\n"
PS_CYA		=	"\e[36;4m%s\e[0m\n"
