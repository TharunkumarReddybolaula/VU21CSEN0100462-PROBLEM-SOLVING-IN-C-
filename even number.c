#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    
    printf("to find the even numbers");
    for(a=1;a<=20;a++)
    {
        if(a%2==0)
        printf("odd\n%d",a);
        else
        
        printf("even\n%d",a);
    }

    return 0;
}
