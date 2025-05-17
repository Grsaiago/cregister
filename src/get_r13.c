#include "../lib/cregister.h"

size_t	get_r13(void) {
	size_t	return_value;

	asm ("mov %%r13, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
