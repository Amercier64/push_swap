#include <stdio.h>
#include "dyn_str.h"
#include "libft.h"
#include <assert.h>

int main(int argc, char **argv)
{
	t_dyn_str	str;
	int			res;

	if (argc != 2)
		return (1);
	res = str_init(&str, 64);
	assert(res == 0);
	printf("str.val = '%s'\n", str.val);
	res = str_append(&str, argv[1]);
	assert(res == 0);
	printf("str_append(str, '%s') = '%s'\n"
			"str.size = %zu\n"
			"str.len = %zu\n"
			, argv[1], str.val, str.size, str.len);
	res = str_append(&str, argv[1]);
	assert(res == 0);
	printf("str_append(str, '%s') = '%s'\n"
			"str.size = %zu\n"
			"str.len = %zu\n"
			, argv[1], str.val, str.size, str.len);
	free(str.val);
}
