#include <stdio.h>

int main(int argc, char const *argv[])
{
    int media = 0;
    for (int i = 0; i < 10; i++) {
        printf("ciao %d", i);
        test_func(i);
        media += i;
    }
    printf("media = %d", media / 10);
    return 0;
}

int test_func(int x) {
    if (x != 0) return 0;
    else return x +10;
}