#include <stdio.h>

int main()
{
    float  meter,km,cm;
    printf("changing into meters to kilo metrs");
    scanf("%f",&cm);
    meter=cm/100;
    km=cm/100000;
    printf("%f \n",meter);
    printf("%f",km);
    return 0;
}
