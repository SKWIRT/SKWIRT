#include <stdio.h>

int CountDivisiors(int num)
{
    int count = 0;
    for (int i =1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int maxDivisors = 0;
    int numberWithMaxDivisors = 0;
    for (int i = 1; i <= 100; i++)
    {
        int divisors = CountDivisiors(i);
        if (divisors > maxDivisors)
        {
            maxDivisors = divisors;
            numberWithMaxDivisors = i;
        }
    }
    printf("liczba posiadajaca najwieksza liczbe dzielnikow: %d\n", numberWithMaxDivisors);
    printf("liczba dzielnikow: %d\n", maxDivisors);
    return 0;
}

