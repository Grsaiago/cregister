#include "../lib/cregister.h"

size_t	get_rdx(void) {
	size_t	return_value;

	asm ("mov %%rdx, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
