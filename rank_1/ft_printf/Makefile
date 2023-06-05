NAME = libftprintf.a
SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c \
		ft_isdigit.c ft_itoa.c \
		ft_strchr.c ft_strdup.c \
		ft_strlen.c \
		ft_substr.c \
		ft_printf.c ft_printf_utils.c ft_printf_flags.c \

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
