#include <stdio.h>
int main(void)
{
	//initialization
	int arr[10] , arr2[10]; //arrays (arr2 is for checking)
	int outter , inner; // for loop statements
	int inputs , k = 0 , j , i , h; //maybe needable
	
	//getting shift value
	printf("Input how much do you wanna shift");
	scanf("%d",&inputs);
	
	//setting array
	printf("Please inout your arrays members");
	for(h = 0 ; h < 10 ; h++)
		scanf("%d",&arr[h]);
		
	//shifting statements
	for(outter = inputs ; outter < 10 ; outter++)
	{
		arr2[outter]=arr[k];
		k++;
	}
	j = inputs;
	for(inner = 0 ; inner < j ; inner++)
	{
		arr2[inner]=arr[k];
		k++;
	}
	//checking new array wheather is it true or not
	for(i = 0 ; i < 10 ; i++)
		printf("%d\t\n",arr2[i]);

	return(0);
}
