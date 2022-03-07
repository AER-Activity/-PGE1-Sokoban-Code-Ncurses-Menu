##
## EPITECH PROJECT, 2020
## libmy
## File description:
## makefile
##

### COLORS ###
NOC            = \033[0m
BOLD        = \033[1m
UNDERLINE    = \033[4m
BLACK        = \033[1;30m
RED            = \033[1;31m
GREEN        = \033[1;32m
YELLOW        = \033[1;33m
BLUE        = \033[1;34m
VIOLET        = \033[1;35m
CYAN        = \033[1;36m
WHITE        = \033[1;37m

CC			= gcc

CFLAGS		= -W -Wall -Wextra 

SRC			= 	./src/main.c

OBJ			=	$(SRC:.c=.o)

TARGET		=	my_memu

LIB			=	libmy.a

all:    $(TARGET)

$(TARGET):  $(OBJ)
			$(CC) $(OBJ) -lncurses -o $(TARGET)

clean:
		$(RM) $(TARGET)
		$(RM) $(OBJ)
		$(RM) *.g*
		$(RM) *~
		$(RM) #*#

fclean:	clean

re:	fclean all
