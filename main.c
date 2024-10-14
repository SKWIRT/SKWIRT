#include <stdio.h>

int countDivisoons(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i  == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int maxDivisiors;
    int numberWithMaxDivisiors;
    for (int i = 1; i <= 100; i++)
    {
        int divisors =  countDivisoons(i);
        if (divisors > maxDivisiors)
        {
            maxDivisiors = divisors;
            numberWithMaxDivisiors = i;
        }
    }
    printf("The number with the higher divisors is : %d\n", numberWithMaxDivisiors);
    printf("Number of divisors: %d\n", maxDivisiors);
    return 0;
}

