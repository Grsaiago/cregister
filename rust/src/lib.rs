mod bindings;

pub mod unsafe_cregister {
    pub use super::bindings::{
        get_r10, get_r11, get_r12, get_r13, get_r14, get_r15, get_r8, get_r9, get_rax, get_rbp,
        get_rcx, get_rdi, get_rdx, get_rsi, get_rsp,
    };
}

pub mod safe_cregister {
    pub fn get_r10() -> usize {
        unsafe { super::unsafe_cregister::get_r10() }
    }

    pub fn get_r11() -> usize {
        unsafe { super::unsafe_cregister::get_r11() }
    }

    pub fn get_r12() -> usize {
        unsafe { super::unsafe_cregister::get_r12() }
    }

    pub fn get_r13() -> usize {
        unsafe { super::unsafe_cregister::get_r13() }
    }

    pub fn get_r14() -> usize {
        unsafe { super::unsafe_cregister::get_r14() }
    }

    pub fn get_r15() -> usize {
        unsafe { super::unsafe_cregister::get_r15() }
    }

    pub fn get_rax() -> usize {
        unsafe { super::unsafe_cregister::get_rax() }
    }

    pub fn get_rbp() -> usize {
        unsafe { super::unsafe_cregister::get_rbp() }
    }

    pub fn get_rcx() -> usize {
        unsafe { super::unsafe_cregister::get_rcx() }
    }

    pub fn get_rdi() -> usize {
        unsafe { super::unsafe_cregister::get_rdi() }
    }

    pub fn get_rdx() -> usize {
        unsafe { super::unsafe_cregister::get_rdx() }
    }

    pub fn get_rsi() -> usize {
        unsafe { super::unsafe_cregister::get_rsi() }
    }

    pub fn get_rsp() -> usize {
        unsafe { super::unsafe_cregister::get_rsp() }
    }
}
