#include <stdio.h>
void change(int arr[][3]);
int main(void)
{
	//initialization
	int mainarr[3][3];//for arrays
	int i , j , inputloopoutter , inputloopinner;//for loops
	
	//input statements
	printf("Enter integer");
	for(inputloopoutter=0 ; inputloopoutter<3 ; inputloopoutter++)
	 {
	 	for(inputloopinner=0 ; inputloopinner<3 ; inputloopinner++)
	 		scanf("%d",&mainarr[inputloopoutter][inputloopinner]);
	 }
	//calling function
	change(mainarr);
	//output statements
	for(i=0 ; i<3;i++)
	{
		for(j=0 ; j<3 ; j++)
			printf("%d\t",mainarr[i][j]);
		printf("\n");
	}
	//returning
	return(0);
}
void change(int arr[][3])
{
	//initialization in function
	int outterchecker , innerchecker;//for loops
	int i , j , k;//for switch cases
	
	//processing
	for(outterchecker=0 ; outterchecker<3 ; outterchecker++)
	{
		for(innerchecker=0 ; innerchecker<3 ; innerchecker++)
		{
			//using case to escape else if stairs
			switch(outterchecker)
			{
				case 0:
					arr[0][innerchecker]=arr[0][innerchecker]*2;
					break;
				case 1:
					arr[1][innerchecker]=arr[1][innerchecker]/2;
					break;
				case 2:
					arr[2][innerchecker]=arr[2][innerchecker]-1;
					break;
							
			}
		}
	}
}
