#include <unistd.h>

extern "C" int __libc_start_main() {
    char c[16];
    read(0, c, 3);
    double ans = 1. * (c[0] & 15) / (c[2] & 15);
    c[0] = (int) ans | 48;
    c[1] = '.';
    ans -= (int) ans;
    for (int i = 2; i <= 11; ++i) {
        ans *= 10;
        c[i] = (int) ans % 10 | 48;
    }
    write(1, c, 11);
    _exit(0);
}

int main() {}
