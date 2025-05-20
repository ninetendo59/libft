NAME = libft.a
CC = cc
HEADER = ./

SRCS = ft_atoi.c ft_calloc.c   ft_isalpha.c  ft_isdigit.c  ft_itoa.c    ft_memcmp.c  ft_memmove.c  ft_putchar_fd.c  ft_putnbr_fd.c  ft_split.c   ft_strdup.c    ft_strjoin.c  ft_strlcpy.c  ft_strmapi.c  ft_strnstr.c  ft_strtrim.c  ft_tolower.c \
		ft_bzero.c  ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memchr.c  ft_memcpy.c  ft_memset.c   ft_putendl_fd.c  ft_putstr_fd.c  ft_strchr.c  ft_striteri.c  ft_strlcat.c  ft_strlen.c   ft_strncmp.c  ft_strrchr.c  ft_substr.c   ft_toupper.c

OBJ = $(SRCS:.c=.o)

CFLAGS = -std=c98 -Wall -Wextra -Werror

SRCS_BONUS = 
OBJ_BONUS = $(SRCS_BONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar r $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_BONUS)

fclean: clean
	rm -rf ($NAME)

re: fclean all

bonus: $(OBJ_BONUS)
	arr r $(NAME) $(OBJ_BONUS)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: all clean fclean re bonus
