CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS_DIR = srcs/
INCL_DIR = includes

SRCS_FILE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRCS = $(addprefix $(SRCS_DIR), $(SRCS_FILE))

BONUS_FILE = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

BONUS = $(addprefix $(SRCS_DIR), $(BONUS_FILE))

OBJS = $(SRCS:.c=.o)

BOBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "ARCHIVING SRCS FILES"
	@ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BOBJS)
	@echo "ARCHIVING SRCS & BONUS FILES"
	@ar rcs $(NAME) $(OBJS) $(BOBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCL_DIR) -c $< -o $@

clean:
	@echo "Removing object files"
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	@echo "Removing $(NAME)"
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re bonus