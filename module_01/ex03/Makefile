#-------------VARIABLES---------------------

NAME		=	unnecesary_violence
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror 
OBJ_DIR		=	obj/
DEP_FLAGS	=	-MMD
RM			=	rm -f
	

SRC_FILES 	=	main HumanA HumanB Weapon
OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
DEPS 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_FILES)))

#--------------RULES------------------------

$(OBJ_DIR)%.o: %.cpp
				mkdir -p $(OBJ_DIR)
				$(CC) -c $(CFLAGS) $(DEP_FLAGS) $< -o $@

$(NAME): $(OBJ) Makefile
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
-include $(DEPS)

all: 
	 			@$(MAKE) $(NAME)

clean:
				$(RM) -r $(OBJ_DIR) $(DEPS)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY : all clean re fclean 