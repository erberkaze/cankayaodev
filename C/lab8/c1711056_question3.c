#include <stdio.h>
#include <string.h>
int f1(char arr[] , int ct);

int main(void)
{
	//initialization
	char cumle[100] , kelimecik[50];
	int outter , inner , a , min , i , b;
	
	//input statements
	printf("Please input your sentence\n");
	gets(cumle);
	
	min = 99;
		
	for(outter = 0 ; cumle[outter] != '\0' ; outter++)
	{
		if(cumle[outter-1] == ' ' || outter == 0)
		{
			a = f1(cumle , outter);
			
			if(min > a) // hocam dev c ile yazýyorum bundan öncesine bi printf koyunca önceki kýsmý yazdýrýyo fakat burada hata var
						// min'i printf ile yazdýrmaya çalýþýyorum hata veriyor 
				min =  a;
		}	
		
	}
	
			
	 
	for(inner = 0 ; cumle[inner] != '\0' ; inner++)
	{
		if(cumle[inner-1] == ' ' || inner == 0)
		{
			b = f1(cumle , inner);
			if(b == min)
			{
				for(i = inner ; (cumle[i] != ' ') || (cumle[i] != '\0') ; i++)
					{
						kelimecik[i] == cumle[i];
					}
				
			}
		}
	}
	kelimecik[i] = '\0';
	puts(kelimecik);
	
	
		
	return(0);
}
int f1(char arr[] , int ct)
{
	//initialization
	int i , counter = 0;
	
	for(i = ct; (arr[i] != '\0') && (arr[i] != ' ') ; i++)
		counter++;
	return(counter);
}
