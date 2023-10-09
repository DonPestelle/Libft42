# Source files (without the .c extension)
SRC = \
    ft_toupper \
    ft_tolower \
    ft_substr \
    ft_strtrim \
    ft_strrchr \
    ft_strnstr \
    ft_strncmp \
    ft_strmapi \
    ft_strlen \
    ft_strlcpy \
    ft_strlcat \
    ft_strjoin \
    ft_striteri \
    ft_strdup \
    ft_strchr \
    ft_split \
    ft_putstr_fd \
    ft_putnbr_fd \
    ft_putendl_fd \
    ft_putchar_fd \
    ft_memset \
    ft_memmove \
    ft_memcpy \
    ft_memcmp \
    ft_memchr \
    ft_itoa \
    ft_isprint \
    ft_isdigit \
    ft_isascii \
    ft_isalpha \
    ft_isalnum \
    ft_calloc \
    ft_bzero \
    ft_atoi

# Source files with the .c extension
SRCS = $(addsuffix .c, $(SRC))

# Include directory
HEAD = ./includes/

# Object files
OBJS = $(SRCS:.c=.o)

# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
RM = rm -f
AR = ar rc
RN = ranlib
CFLAGS = -Wall -Wextra -Werror

# Compilation rule for .c to .o
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# Main target
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RN) $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
