#ifndef CREGISTER
# define CREGISTER
# include <stdio.h>
# include <stddef.h>
# include <assert.h>

size_t	get_rax(void);
size_t	get_rcx(void);
size_t	get_rdx(void);
size_t	get_rsp(void);
size_t	get_rbp(void);
size_t	get_rsi(void);
size_t	get_rdi(void);
size_t	get_r8(void);
size_t	get_r9(void);
size_t	get_r10(void);
size_t	get_r11(void);
size_t	get_r12(void);
size_t	get_r13(void);
size_t	get_r14(void);
size_t	get_r15(void);

#endif // !CREGISTER
