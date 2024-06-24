NAME	:= push_swap 
CFLAGS	:= -Wextra -Wall -Werror -Wunreachable-code -g -Ofast 
SRCS	:= push_swap.c\
		error_check.c\
		error_exit.c\
		ft_atol.c \
		ft_free.c\
		indexing.c\
		print_stack.c\
		pushing.c\
		radix_sort.c\
		reverse_rotating_extra.c\
		reverse_rotating.c\
		rotating.c\
		sort_3.c\
		sort_4.c\
		sort_5_extra.c\
		sort_5.c\
		sort_stack.c\
		sorted.c\
		swapping.c\



OBJS	:= ${SRCS:.c=.o} Libft/libft.a

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< 

$(NAME): $(OBJS) 
	@$(CC) $(OBJS) -o $(NAME)

Libft/libft.a: 
	$(MAKE) -C Libft/ all

clean:
	@rm -rf $(OBJS)
	$(MAKE) -C Libft/ clean

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re
