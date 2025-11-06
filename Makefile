CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS_DIR = ./

SRCS_FILE = isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat \
toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup substr strjoin strtrim split \
itoa strmapi striteri putchar_fd putstr_fd putendl_fd putnbr_fd \

SRCS = $(addprefix $(SRCS_DIR)ft_,$(addsuffix .c,$(SRCS_FILE)))

BONUS_FILE = lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap \

BONUS = $(addprefix $(SRCS_DIR)ft_,$(addsuffix .c,$(BONUS_FILE)))

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
	@$(CC) $(CFLAGS) -I$(SRCS_DIR) -c $< -o $@

clean:
	@echo "Removing object files"
	@rm -f $(OBJS) $(BOBJS)

fclean: clean
	@echo "Removing $(NAME)"
	@rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re bonus