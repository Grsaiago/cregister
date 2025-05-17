#include "../lib/cregister.h"

size_t	get_rax(void) {
	size_t	return_value;

	asm ("mov %%rax, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
