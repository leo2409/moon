#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++) {
        printf("ciao %d", i);
        test_func(i);
    }
    return 0;
}

int test_func(int x) {
    if (x != 0) return 0;
    else return x +10;
}