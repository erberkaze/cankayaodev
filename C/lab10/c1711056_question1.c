#include <stdio.h>
void f1(char arr[] , int *p1);
int main(void)
{

	//initialization
	char cumle[100];
	int a;

	//input statements
	printf("Please input your sentence");
	gets(cumle);
	printf("Please input what do you wanna do");
	scanf("%d",&a);
	
	//function
	f1(cumle , &a);


	//control and print
	puts(cumle);




	return(0);
}
void f1(char arr[] , int *p1)
{
	int i , loop , j , loop2 , k , loop3;
	if(*p1 == 1)
	{
		for(i = 0 ; arr[i] != '\0' ; i++)
		{
			if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			{
				for(loop = i ; arr[loop] != '\0' ; loop++)
				{
					arr[loop] = arr[loop+1];
				}
			}
		}
	}
	else if(*p1 == 2)
	{
		for(j = 0; arr[j] != '\0' ; j++)
		{
			if(arr[j] != 'a' && arr[j] != 'e' && arr[j] != 'i' && arr[j] != 'o' && arr[j] != 'u')
			{
				for(loop2 = j; arr[loop2] != '\0' ; loop2++)
				{
					arr[loop2] = arr[loop2+1];
				}

			}

		}

	}
	else if(*p1 == 3)
	{
		for(k = 0; arr[k] != '\0' ; k++)
		{
			if(arr[k] == ' ')
			{
				for(loop3 = k ; arr[loop3] != '\0' ; loop3++)
				{
					arr[loop3] = arr[loop3+1];
				}
			}
		}
	}
}

