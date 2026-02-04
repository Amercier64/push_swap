# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amercier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 14:16:18 by amercier          #+#    #+#              #
#    Updated: 2026/02/04 18:18:05 by amercier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src_dir := src

src := \
	$(addprefix isalpha/, ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c) \
	$(addprefix mem/, ft_memset.c ft_bzero.c ft_calloc.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c) \
	$(addprefix str/, ft_strlen.c ft_toupper.c ft_tolower.c ft_strlcpy.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c) \
	$(addprefix put/, ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c) \
	$(addprefix lst/, ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	ft_lstiter.c ft_lstmap.c) \
	get_next_line.c \
	$(addprefix ft_printf/, ft_printf.c ft_print_num.c ft_print_s.c) \
	$(addprefix circular_buffer/, circular_buffer.c \
	cb_set.c cb_at.c cb_get_index.c) \
	$(addprefix deque/, deque.c dq_pop.c dq_push.c) \

obj_dir := obj

obj := $(src:%.c=$(obj_dir)/%.o)

NAME := libft.a

CFLAGS := -Wall -Wextra -Werror -g

INCLUDE := -Iheaders

ARFLAGS := -rcs

all: $(NAME)

$(NAME): $(obj)
	$(AR) $(ARFLAGS) $@ $?

$(obj_dir)/%.o: $(src_dir)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDE) -c $^ -o $@

clean:
	rm -rf $(obj_dir)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
