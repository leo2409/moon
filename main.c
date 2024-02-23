#include <stdio.h>

int main(int argc, char const *argv[])
{
    int media = 0;
    for (int i = 0; i < 10; i++) {
        printf("ciao %d", i);
        media += i;
    }
    printf("media = %d", media / 10);
    return 0;
}

int test_func() {
    return 0;
}