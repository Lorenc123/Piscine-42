CC = cc
CFLAGS = -Wall -Wextra -Werror
SRDIR = source
INCDIR = includes
NAME = rush-02
SRCS = $(SRDIR)/main.c $(SRDIR)// add all the  files in SRDIR that are located there
OBJECTS = (SRCS.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(Name) $(OBJECTS)

$(SRDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/header.h
	$(CC) $(CFLAGS) -c $< -o $@

fclean:
	$(RM) $(OBJECTS) $(NAME)
