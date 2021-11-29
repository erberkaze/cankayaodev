// Eren Berk Saltaş 201711056
#include <stdio.h>
void func(int arrabakan[],int arrbbakan[],int size);
int fact(int returnnumb);
void main(void)
{
	int arr[9],arrb[9];
	int inputs,i,j,*p1,a,k;
	printf("Please input integer\n");
	for(i=0;i<=9;i++)
	{	
		scanf("%d",&arr[i]);
	}
	func(arr,arrb,9);
	for(j=0;j<=9;j++)
		arr[j]=arrb[j];
}
int fact(int returnnumb)
{
	int i,fact=1,sonhal;
	for(i=1;i<=returnnumb;i++)
		fact=fact*i;
	sonhal=fact;
	fact=0;
	return(sonhal);
}
void func(int arrabakan[],int arrbbakan[],int size)
{
	int i;
	for(i=0;i<=9;i++)
		arrbbakan[i]=fact(arrabakan[i]);

}


