#include "../lib/cregister.h"

size_t	get_r9(void) {
	size_t	return_value;

	asm ("mov %%r9, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
