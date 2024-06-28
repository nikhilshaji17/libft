# -*- Makefile -*-

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

OBJECTS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o \
		ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o \
		ft_memset.o ft_memcpy.o ft_memmove.o ft_bzero.o ft_strncmp.o ft_memchr.o \
		ft_memcmp.o ft_strnstr.o ft_atoi.o 

FILENAMES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_memset.c ft_memcpy.c ft_memmove.c ft_bzero.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c 

all: $(NAME)

$(NAME):  $(OBJECTS)
	cc $(OBJECTS) -o $(NAME) 

$(OBJECTS): $(FILENAMES)
	cc $(FLAGS) -c $(FILENAMES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: 