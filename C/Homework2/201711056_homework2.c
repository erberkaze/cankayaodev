#include <stdio.h>
//functions
void inputSets(int arr[][10]);
void swapSets(int arr[][10]);
void findIntersection(int arr[][10],int arr5[]);
void shiftSets(int arr[][10]);
void findUnion(int arr[][10] , int size , int birdarray[]);
//main function
int main (void)
{
	
	//initialization
	
	int array1[10][10] , array2[10][10] , array3[100] , array4[20], array5[100];
	int checker;
	
	
	//input statements
	do{
		printf("Enter your choice (0,1,2,3,4,5,6):");
		printf("0. Input sets\n1. Swap sets\n2. Find intersection\n3. Shift sets\n4. Find Union\n5. Quit\n");
		if(checker == 0)
			inputSets(array1);
			
		if(checker == 1)
			swapSets(array1);
			
		if(checker == 2)
			findIntersection(array1 , array5);
		
		if(checker == 3)
			shiftSets(array1);
		
		if(checker == 4)
			findUnion(array1 , 20 , array4 );
		
	}while(checker!=5);
	printf("bye!");
	
	return(0);
}
// FUNC 1
void inputSets(int arr[][10])
{
	//initialization in function
	int inner , outter;//for loop statements
	
	//input statements
	for(outter = 0 ; outter < 10 ; outter++)
	{
		prinntf("Please input integers for set %d:",outter);
		for(inner = 0 ; inner < 10 ; inner++)
			scanf("%d" , arr[outter][inner] );
	}
}
// FUNC 2
void swapSets(int arr[][10])
{
	//initialization
	int inner;//for loop statements
	int temp ,	value1 , value2;
	
	//asking
	printf("Input set columns to swap:");
	scanf("%d%d", value1 , value2);
	
	//swap statements
	for(inner = 0 ; inner < 10 ; inner++)
	{
		temp = arr[value1][inner];
		arr[value1][inner] = arr[value2][inner];
		arr[value2][inner] = temp;
	}
	printf("Set 1 and set 2 swapped ");
	
}
// FUNC 3
void findIntersection(int arr[][10] , int arr5[])
{	
	//initialization
	int loopchecker;
	int temp , value1 , value2 ;
	int k = 0 ; //for 2d to 1d
	
	//input statements
	printf("Input set columns to compare:");
	scanf("%d%d", &value1 , &value2);
	
	//checking statements
	for(loopchecker = 0 ; loopchecker < 10 ; loopchecker++)
	{
		if(arr[value1][loopchecker] == arr[value2][loopchecker])
		{
			arr5[k] = arr[value1][loopchecker];
			k++;
		}
	}
	
}
// FUNC 4
void shiftSets(int arr[][10])
{
	// initialization 
	int diffarray[10];
	int i , j , k , l , m , outter , inner1 , inputs , inner2 , h;
	
	//input statements
	printf("Input how much do you wanna shift your array");
	scanf("%d",&inputs);
	
	//shifting statements
	for (outter = 0 ; outter < inputs ; outter++)
	{
		
		for (inner1 = 0; inner1 < 10; inner1++)
			diffarray[inner1] = arr[9][inner1];

		
		for (inner2 = 9 ; inner2 <= 1 ; inner2--)
		{
			for (m = 0 ; m < 10 ; m++)
				arr[inner2][m] = arr[inner2-1][m];
		}
		
		for (h = 0; h < 10; h++)
			arr[0][h] = diffarray[l];
		
	}
}
// Func 5
void findUnion(int arr[][10] , int size , int birdarray[])
{
	//initialization
	int inner , outter;
	int value1 , value2 , k = 1;
	
	//input statements
	printf("Which columns do you wanna union");
	scanf("%d%d",&value1,&value2);
	
	//setting first array element to one of coloumn's element 
	birdarray[0] = arr[value1][0];
	
	//checking statements
	for(outter = 0 ; outter < 10 ; outter++)
	{
		for(inner = 0 ; inner < 20 ; inner++)
		{
			if((arr[value1][outter] == arr[value2][outter]) && (arr[value1][outter] != birdarray[inner]))
			{
				birdarray[k] = arr[value1][outter];
				k++;
			}
		}	
	}
}









