#include <stdio.h>

#define LOWER 0   // 温度表的下限
#define UPPER 300 // 温度表的上限
#define STEP 20   // 温度表的步长

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    fahr = LOWER;
    while (fahr <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    return 0;
}