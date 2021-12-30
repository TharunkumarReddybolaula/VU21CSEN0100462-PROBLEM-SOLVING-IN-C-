#include<stdio.h>
main()
{
	double a,b,c,disc,root1,root2,part_r,part_i;
	printf("\n\nenter co-efficients of a quadratv equation \n\n");
	scanf("%f%f%f", &a ,&b,&c);
	printf("\ncoefficients are a %f\t b = %f\t c = %f\n\n",a,b,c);
	disc=b*b-4*a*c;
	if (disc == 0)
	{
		printf("roots are real and equal\n");
		root1 = -b/(2.0*a);
		root2 = root1;
		printf("\nroot1 = %f\t root2 = %f\n",root1,root2);
	}
	else
	
	{
		if(disc<0)
		{
			printf("roots are complex \n");
			part_r = -b/(2.0*a);
			part_i = sqrt(-disc)/(2.0*a);
			printf("\nroot1 = %f+ i %f\trrot2 = %f -i %f\n",part_r,part_i,part_r,part_i);
		}
		else
		{
			printf("roots are real and distinct\n");
			root1 = ( -b+sqrt(disc))/(2.0*a);
			root2 = ( -b-sqrt(disc))/(2.0*a);
			printf("\nroot1 = %f\t root2 = %f\n",root1,root2);
			
			return 0;
			
		}
		}
	}

