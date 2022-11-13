#include<stdio.h>
#include <iostream>
main()
{
    int n, a, b, c;
    setlocale(LC_ALL, "Russian");
    for (c = 1; c <= 5; ++c)
    {
        a = 4; 
        b = 5 - c;
        n = 100 * a + 10 * b + c;
        if (47 * (100 * c + 10 * b + a) == 36 * n)
            break;
    }
    if (c<=5)
        printf("Это число %d\n", n);
    else
        printf("Нет такого числа\n");
}