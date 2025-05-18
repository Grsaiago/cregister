#include "../lib/cregister.h"

size_t	get_r10(void) {
	size_t	return_value;

	asm ("mov %%r10, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
