// последовательность фиббоначи рекурсией, n - количество членов последовательности
#include <stdio.h>
#include <stdlib.h>
void fibon(int n);
int main()
{
    int n;
    printf("Введите n: ");
    scanf("%d", &n);
    fibon(n);
}
void fibon(int n)
{
   static int a=1, b=1, c;
    while (n)
    {
        printf("%d ", a);
        c = a+b;
        a = b;
        b = c;
        return fibon(--n);
    }
}
