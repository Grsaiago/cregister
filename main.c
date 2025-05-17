#include "lib/cregister.h"

void test_rax(size_t correct_value) {
	size_t rax_fetched_value = get_rax();
	assert(correct_value == rax_fetched_value);
}

int main(void) {
	test_rax(10);

	return (0);
}
