#-------------VARIABLES---------------------

NAME		=	log
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -g
OBJ_DIR		=	obj/
DEP_FLAGS	=	-MMD
RM			=	rm -f
	

SRC_FILES 	=	Account main
OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
DEPS 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_FILES)))

#--------------RULES------------------------

$(OBJ_DIR)%.o: %.cpp
				mkdir -p $(OBJ_DIR)
				$(CC) -c $(CFLAGS) $(DEP_FLAGS) $< -o $@

$(NAME): $(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -I ./
-include $(DEPS)

clean:
				$(RM) -r $(OBJ_DIR) $(DEPS)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY : all clean re fclean 