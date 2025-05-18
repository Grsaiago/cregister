#include "../lib/cregister.h"

size_t	get_rbp(void) {
	size_t	return_value;

	asm ("mov %%rbp, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
