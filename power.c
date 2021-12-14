#include <stdio.h>
#include <math.h>

int main()
{
    double base,expo,power;
    printf("to find the power of the number");
    scanf("%lf",&base);
    scanf("%lf",&expo);
    power=pow(base,expo);
    printf("%lf",power);
    return 0;
}
