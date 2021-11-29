//hocam trace ettim trace ettiğime göre doğru çıktı ilginç bir şekilde :) ama compiler hatalı gösteriyor 
#include <stdio.h>
int f1(char arr[] , int yer);
int main(void)
{
	
	//initialization
	char cumlearray[100] , degisecek[100];
	int inner , outter = 0, inner2 ,  outter2 ;//loop statements
	int a , b , ct = 0 ;
	
	//input statements
	printf("Please input your arrays");
	gets(cumlearray);
	//input part2
	printf("Please input what do you wanna check and remove");
	gets(degisecek);
	
	b = f1(degisecek , 0);
	
	//remove statements
	while(cumlearray[outter] != '\0')
	{
		if(((cumlearray[outter-1] == ' ' || outter == 0) && cumlearray[outter] != ' ' ))
		{
			a = f1(cumlearray , outter);
			if(a == b)
			{
				ct = 0 ;
				for(inner =  outter , outter2 = 0 ; inner <= a ; inner++ , outter2++)
				{
					if((cumlearray[inner] == degisecek[outter2]) && cumlearray[inner] != ' ')
						ct++;
						
				}
				printf("%d",ct);
				if(ct == b)
				{
					for(inner2 = outter ; cumlearray[inner2] != '\0' ; inner2++)
						cumlearray[inner2] = cumlearray[inner2 + 1];
					printf("nazim ile tracing ");
				}
				cumlearray[inner2]='\0';
				ct=0;			
			}
		}	
		outter++;
	}
	
	puts(cumlearray);



	return(0);
}
int f1(char arr[] , int yer)
{
	//imitialization
	int inner , outter;
	int looper , ct = 0;
	
	//finding length
	for(looper = yer ; arr[looper] != ' ' && arr[looper] != '\0' ; looper++)
		ct++;
		
	return(ct);
	
	
	
	
	
}
