#include "../lib/cregister.h"

size_t	get_r12(void) {
	size_t	return_value;

	asm ("mov %%r12, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
