#include <stdio.h>
void compute(double a,double *integ,double *decimal);
int main(void)
{
	int i=0;
	double a,b;
	while (i<10)
	{
		printf("Please input real number");
		scanf("%lf",&a);
		b=a;
		compute(a,&a,&b);
		printf("%2.0lf and %lf",a,b);
	}
}
void compute(double a,double *integ,double *decimal)
{
	*integ=(int)*integ;
	*decimal=(*decimal)-(int)a;
}


