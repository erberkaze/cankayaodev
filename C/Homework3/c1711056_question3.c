#include <stdio.h>
#include <string.h>

struct port{
	char p_name[30];
	char p_type;
	char p_cat;
	double price;
};

struct cons{
	char c_name[30];
	struct port arr[10];
	int visitors;
};
struct 4findPortfolio(struct cons danis[]);
void readData(struct cons danis[]);
//void isimbirlestirme(char c1[] , char c2[] , char birlesmishal[]);
//--------------------------------------------------------------------------------------------------------------------------------------------
int main(void)																					//MAIN FUNC
{
	//initialization
	int i , j , k , l;
	struct cons danisman[10];
	struct port donendeger;
	
	
	readData(danisman);
	donendeger = findPortfolio(danisman); 
	
	
	
	
	
	
	return(0);
}																								//MAIN FUNC BITISI
//--------------------------------------------------------------------------------------------------------------------------------------------
//@readData	
void readData(struct cons danis[])
{
	//initialization
	FILE *fin , *fout;
	int i = 0, j , k=0;
	char isim[50] , soyisim[50] , toplam[300] , denemelik[300] ,tumsatir[500];
	
	fin = fopen("ABC.txt","r");

	
	while(!(feof(fin)))
	{
		fscanf(fin,"%[^/]/%[^/]/%c/%c/%d/%d",danis[i].c_name,danis[i].arr[k].p_name,&danis[i].arr[k].p_type,&danis[i].arr[k].p_cat,&danis[i].arr[k].price,&danis[i].visitors);
		
		i++;
		k++;
			
		
	}
	
	printf("%s",danis[0].c_name);

}
//@findPortfolio
struct readData(struct cons danis)
{
	int i;
	char danismaninismi[50] , portismi[50];
	
	printf("Plese input constultant name\n");
	gets(danismaninismi);
	printf("Please input portfolio name\n");
	gets(portismi);
	
	for(i = 0 ; i < 10 ; i++)
	{
		for(j = 0 ; j < 10 ; j++)
		{
			if((strcmp(danis[i].c_name,danismaninismi) == 0) && (strcmp(danis[i].arr[j].p_name,portismi)))
			{
				return(danis[i].arr[j]);
			}
		}
	}	
	
}










