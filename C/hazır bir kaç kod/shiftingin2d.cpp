#include <stdio.h>
int main(void)
{	
	//initialization
	int arr1[3][3] , arr2[3][3] , arr3[9] , arr4[9];
	int inner , outter , outter2 , inner2 , turn1 , turn2 , birboyut = 0;
	int i , j , k = 0, inputs , l = 0 , m , a , b , p;
	
	//shifting
	printf("Please input how much do you wanna shift your array");
	scanf("%d", &inputs);
	
	//setting array
	printf("Please input 9 integer");
	for(outter = 0 ; outter < 3 ; outter++)
	{
		for(inner = 0 ; inner < 3 ; inner++)
			scanf("%d",&arr1[outter][inner]);
	}
	
	//shifting part 1
	for(outter2 = 0 ; outter2 < 3 ; outter2++)
	{
		for(inner2 = 0 ; inner2 < 3 ; inner2++)
		{
			arr3[k]=arr1[outter2][inner2];
			k++;
		}
	}
	//real shifting part
	for(j = inputs ; j < 9 ; j++)
	{
		arr4[j]=arr3[l];
		l++;
	}
	m = inputs;
	for(a = 0 ; a < m ; a++)
	{
		arr4[a]=arr3[l];
		l++;
	}
	
	//turn again 2d array
	for(turn1 = 0 ; turn1 < 3 ; turn1++)
	{
		for(turn2 = 0 ; turn2 < 3 ; turn2++)
			{
				arr2[turn1][turn2] = arr4[birboyut];
				birboyut++;
			}
	}
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\n");
	printf("\n");
	
	//checking statements	
	for(i = 0 ; i < 3 ; i++)
	{
		for(p = 0 ; p < 3 ; p++)
		{
			printf("%d\t",arr2[i][p]);
		}
		printf("\n");
	}
	
	return(0);
}
