int main(void) {
    const char msg[] = "Hello World!\n";

    asm volatile (
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "mov %0, %%rsi\n"
        "mov %1, %%rdx\n"
        "syscall\n"
        :
        : "r"(msg), "r"(sizeof msg - 1)
        : "rax","rdi","rsi","rdx"
    );
    return 0;
}
