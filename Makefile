src_dir := src

src := push_swap.c \
	   $(addprefix parsing/, \
	   init_state.c stack_init.c detect_duplicate.c \
	   arr_dup.c count_words.c quicksort.c) \
	   $(addprefix dyn_str/, \
	   str_init.c str_reserve.c str_append.c str_destroy.c) \

obj_dir := obj

obj := $(src:%.c=$(obj_dir)/%.o)

lib_dir := libft

lib := $(addprefix $(lib_dir)/, \
	   libft.a)

NAME := push_swap

CFLAGS := -Wall -Wextra -Werror -g

INCLUDE := -Iheaders $(addsuffix headers, $(dir $(addprefix -I, $(lib))))

LDFLAGS := $(dir $(addprefix -L, $(lib)))

LDLIBS := -lft

all: $(NAME)

$(NAME): $(obj) $(lib)
	$(CC) $(CFLAGS) $(LDFLAGS) $(obj) $(LDLIBS) -o $@ 

$(obj_dir)/%.o: $(src_dir)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDE) -c $^ -o $@

$(lib):
	$(MAKE) -C $(@D)

clean:
	$(MAKE) -C $(lib_dir) fclean
	rm -rf $(obj_dir)


fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
