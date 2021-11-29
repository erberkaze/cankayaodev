#include <stdio.h>
int main(void)
{
	//initialization
	int ilkarray[2][3] , ikinciarray[2][3];	//arrays
	int i , j , p , q;	//for input
	int outter , inner , outter2 , inner2 , checkoutter , checkinner;	//for output and check statements
	
	//inputing for first array 
	printf("Enter array 1:\n");
	for(i=0 ; i<2 ; i++ )
	{
		for(j=0 ; j<3 ;j++)
			{
				printf("Element %d,%d:",i,j);
				scanf("%d",&ilkarray[i][j]);
			}
	}
	//inputting for second array
	printf("Enter array 2:\n");
	for(p=0 ; p<2 ; p++)
	{
		for(q=0 ; q<3 ; q++)
			{
				printf("Element %d,%d:",p,q);
				scanf("%d",&ikinciarray[p][q]);
			}
	}
	//outputting first array
	for(outter=0 ; outter<2 ; outter++)
	{
		for(inner=0 ; inner<3 ; inner++)
			printf("%d\t",ilkarray[outter][inner]);
		printf("\n");
	}
	printf("\n");
	printf("\n");
	//outputting second array
	for(outter2=0 ; outter2<2 ; outter2++)
	{
		for(inner2=0 ; inner2<3 ; inner2++)
			printf("%d\t",ikinciarray[outter2][inner2]);
		printf("\n");
	}
	printf("\n");
	printf("\n");
	//check statements 
	for(checkoutter=0 ; checkoutter<2 ; checkoutter++)
	{
		for(checkinner=0 ; checkinner<3 ; checkinner++)
		{
			if(ilkarray[checkoutter][checkinner] != ikinciarray[checkoutter][checkinner])
				printf("Arrays differ at element %d at locations %d,%d.",ilkarray[checkoutter][checkinner],checkoutter,checkinner);
		}	
	}
	return(0);
}
