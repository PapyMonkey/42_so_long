# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:23:25 by aguiri            #+#    #+#              #
#    Updated: 2022/04/15 23:34:17 by aguiri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				?=	so_long

CC					=	gcc
CFLAGS				?=	-Wall -Wextra -Werror
AR 					?=	ar
RM					?=	rm -f
MKDIR				?=	mkdir -p
ECHO				?=	echo

# ********************************* F O N T S *********************************

EOC					:=	"\033[0m"
LIGHT				:=	"\033[1m"
DARK				:=	"\033[2m"

ITALIC				:=	"\033[3m"
UNDERLINE			:=	"\033[4m"

BLACK				:=	"\033[30m"
RED					:=	"\033[31m"
GREEN				:=	"\033[32m"
BLUE				:=	"\033[34m"
PURPLE				:=	"\033[35m"
CYAN				:=	"\033[36m"
WHITE				:=	"\033[37m"

# ********************************* P A T H S *********************************

SRCS_PATH			:=	src
OBJS_PATH			:=	bin
HDRS_PATH			:=	include
LIBS_PATH			:=	lib

LIBFT_PATH			:=	$(LIBS_PATH)/libft
MLX_PATH			:=	$(LIBS_PATH)/mlx

# ********************************* N A M E S *********************************

SRCS_NAME			:=	main.c
SRCS				:=	$(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
OBJS 				:=	$(addprefix $(OBJS_PATH)/, $(SRCS_NAME:.c=.o))

# ********************************* H E A D S *********************************

HFLAGS				:=	-I $(HDRS_PATH)\
						-I $(LIBFT_PATH)/$(HDRS_PATH)\
						-I $(MLX_PATH)

# ********************************** L I B S **********************************

# Libft
FTFLAGS				:=	-L./$(LIBFT_PATH)\
						-lft

# MiniLibX
MLXFLAGS			:=	-L./$(MLX_PATH)\
						-lmlx\
						-framework OpenGL\
						-framework AppKit

LFLAGS				:=	$(FTFLAGS) $(MLXFLAGS)

# ********************************* N O R M E *********************************

NRM					:=	norminette
NFLAGS				?=	-R CheckForbiddenSourceHeader

# ********************************* R U L E S *********************************

all:				$(NAME)
					
$(OBJS_PATH)/%.o: 	$(SRCS_PATH)/%.c $(HDRS_PATH)
					@$(MKDIR) $(dir $@)
					@$(ECHO)\
					$(BLACK)$(DARK)$(ITALIC)"Compiling $<"$(EOC)
					@$(CC) $(CFLAGS) $(HFLAGS) -o $@ -c $< 


$(NAME):			$(OBJS)
					@$(CC) $(LFLAGS) $^ -o $@ 
					@$(ECHO)\
					$(CYAN)$(UNDERLINE)"$@"$(EOC)": "$(GREEN)"complete"$(EOC)

clean:
					@$(ECHO)\
					$(RED)$(ITALIC)"Deleting binary files"$(EOC)
					@$(RM) $(OBJS)

fclean:				clean
					@$(ECHO)\
					$(RED)$(ITALIC)"Deleting executable file"$(EOC)
					@$(RM) -r $(OBJS_PATH)
					@$(RM) $(NAME)

re:					fclean all

# *************************** B O N U S   R U L E S ***************************

norme:				$(NAME)
					@$(NRM) $(NFLAGS) $(HDRS_PATH) $(SRCS_PATH)

lib:				libft mlx

libft:				
					@$(MAKE) -C ./$(LIBFT_PATH)

libft_clean:
					@$(MAKE) -C ./$(LIBFT_PATH) clean

libft_fclean:		
					@$(MAKE) -C ./$(LIBFT_PATH) fclean

libft_re:		
					@$(MAKE) -C ./$(LIBFT_PATH) re

mlx:				
					@$(MAKE) -C ./$(MLX_PATH)

mlx_clean:
					@$(MAKE) -C ./$(MLX_PATH) clean

mlx_re:		
					@$(MAKE) -C ./$(MLX_PATH) re

.PHONY:				all clean fclean re\
					norme lib\
					libft libft_clean libft_fclean libft_re\
					mlx mlx_clean mlx_re