
#include <stdio.h>
#include <math.h>
struct positions{
	
	int x;
	int y;
};
int main(void)
{
	int uzunluk , a , b;
	struct positions k1,k2;
	
	printf("please input cordinate 1 as a x and y respeclty");
	scanf("%d%d",&k1.x,&k1.y);
	
	printf("Please input cordinate 2 as a x and y respeclty");
	scanf("%d%d",&k2.x,&k2.y);
	a = k1.x - k2.x;
	b = k1.y - k2.y;
	uzunluk = sqrt(pow(a,2.0) + pow(b,2.0) );
	printf("%d",uzunluk);
	

	
	return(0);
}
