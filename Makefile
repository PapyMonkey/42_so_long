# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:23:25 by aguiri            #+#    #+#              #
#    Updated: 2022/06/20 15:49:00 by aguiri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				?=	so_long

CC					=	gcc
CFLAGS				?=	-Wall -Wextra -Werror
AR 					?=	ar
RM					?=	rm -f
MKDIR				?=	mkdir -p
ECHO				?=	echo

RWILDCARD			=	$(foreach d,\
						$(wildcard $(1:=/*)),\
						$(call RWILDCARD,$d,$2) $(filter $(subst *,%,$2),$d))

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

SRCS				:=	$(call RWILDCARD,$(SRCS_PATH),*.c)
OBJS 				:=	$(addprefix $(OBJS_PATH)/, $(SRCS:$(SRCS_PATH)/%.c=%.o))

# Old version
# SRCS_NAME			:=	parsing/args_check.c\
# 						parsing/parsing_array.c\
# 						parsing/parsing_check.c\
# 						parsing/parsing_io.c\
# 						parsing/parsing_main.c\
# 						parsing/parsing_map_init.c\
# 						parsing/parsing_map_size.c\
# 						win_management/close.c\
# 						errors.c\
# 						main.c
# SRCS				:=	$(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
# OBJS 				:=	$(addprefix $(OBJS_PATH)/, $(SRCS_NAME:.c=.o))

# ********************************* H E A D S *********************************

HFLAGS				:=	-I $(HDRS_PATH)\
						-I $(LIBFT_PATH)/$(HDRS_PATH)\
						-I $(MLX_PATH)

# ********************************** L I B S **********************************

# Libft
FTFLAGS				:=	-L./$(LIBFT_PATH)\
						-lft

# MiniLibX
MLXFLAGS			:=	-lmlx\
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
					$(WHITE)$(DARK)"Compiling $<"$(EOC)
					@$(CC) $(HFLAGS) -o $@ -c $< 


$(NAME):			$(OBJS)
					@$(CC) $(LFLAGS) $^ -o $@ 
					@$(ECHO)\
					$(CYAN)$(UNDERLINE)"$@"$(EOC)": "$(GREEN)"complete"$(EOC)

clean:
					@$(ECHO)\
					$(RED)"Deleting binary files"$(EOC)
					@$(RM) $(OBJS)

fclean:				clean
					@$(ECHO)\
					$(RED)"Deleting executable file"$(EOC)
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
