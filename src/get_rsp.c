#include "../lib/cregister.h"

size_t	get_rsp(void) {
	size_t	return_value;

	asm ("mov %%rsp, %0"
		: "=r" (return_value)
		: /* no inputs */
		: /* no clobbers */
	);

	return (return_value);
}
