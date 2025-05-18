#include "../lib/cregister.h"

size_t	get_rdi(void) {
	size_t	return_value;

	asm ("mov %%rdi, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
