NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c

INCLUDES = -C libft libft.h

OBJS = $(SRCS:.c=.o)

all : libft $(NAME)

libft : 
	$(MAKE) -C libft

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(MAKE) clean -C libft
	rm -f $(OBJS)

fclean : clean
	$(MAKE) fclean -C libft
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re libft