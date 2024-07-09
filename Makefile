# -*- Makefile -*-

# NAME = libft.a

# CFLAGS = -Wall -Werror -Wextra

# SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
# 		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
# 		ft_memset.c ft_memcpy.c ft_memmove.c ft_bzero.c ft_strncmp.c ft_memchr.c \
# 		ft_atoi.c ft_strdup.c ft_strnstr.c ft_memcmp.c ft_calloc.c ft_itoa.c \
# 		ft_split.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_striteri.c ft_strmapi.c \
# 		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# BONUS = ft_lstnew.c

# OBJS = ${SRCS:.c=.o}

# BONUS_OBJS = ${BONUS:.c=.o}

# all: ${NAME}

# bonus: ${OBJS} ${BONUS_OBJS}
# 	ar rcs $@ ${NAME} ${OBJS} ${BONUS_OBJS}

# ${NAME}:  ${OBJS}
# 	ar rcs $@ $(OBJS)

# # ${OBJS}: ${SRCS}
# # 	cc ${CFLAGS} -c ${SRCS}

# %.o	:	%.c
# 	cc ${CFLAGS} -c $< -o $@

# clean:
# 	rm -f ${OBJS} ${BONUS_OBJS}

# fclean: clean
# 	rm -f ${NAME} ${BONUS_OBJS}

# re: fclean all

# .PHONY: all clean fclean re bonus

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
				ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
				ft_tolower.c ft_toupper.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c
		
OBJS		= 	${SRCS:.c=.o}

BONUS		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstmap.c


BONUS_OBJS	=	${BONUS:.c=.o}

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

NAME	= libft.a

all:	${NAME}

%.o	:	%.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean ${NAME}

bonus:	${OBJS} ${BONUS_OBJS}
	ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

.PHONY: all clean fclean re bonus