#include <stdio.h>

int changeT(int lower, int upper, int step);

int main()
{
    changeT(0, 300, 20);
}

int changeT(int lower, int upper, int step)
{
    float fahr;
    float celsius;
    for (fahr = lower; fahr <= upper; fahr += step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
    return 0;
}