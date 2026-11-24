CCC = cc -Werror -Wextra -Wall -D BUFFER_SIZE=42
PROGRAM = main.c get_next_line.c get_next_line_utils.c
TEST = ./a.out
RM = rm a.out

all:
	clear && $(CCC) $(PROGRAM) && $(TEST) && $(RM)
