#include <unistd.h>

extern "C" int __libc_start_main() {
    write(1, "Hello World!", 12);
    _exit(0);
}

int main() {}
