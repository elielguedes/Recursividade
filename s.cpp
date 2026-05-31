#include <stdio.h>

void Soma(int a, int b)
{
    int s = a + b;
    printf("R: ", s);
}

int main()
{
    int a = 10, b = 10;
    Soma(a, b);

    return 0;
}