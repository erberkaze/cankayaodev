#include <stdio.h>
int main(void)
{
	//initialization
	int x , y; // bounds
	int i , j , k , l; // for loop
	int a=1 , b=1 ; // for checking is it prime or not
	
	//input statement
	printf("Please input your boundes respectly");
	scanf("%d%d",&x,&y);
	
	//finding is it prime number or not
	
	if(x > y) // kullan�c�n�n x say�s�n� y den daha b�y�k girmi� olma olas�l��� i�in bi if koydum
	{
		for(i=y ; i<=x ; i++)	// burada tek tek k���k de�erden ba�layarak 1 artt�r�yorum 
		{
			for(k=2 ; k<i ; k++)	// burada hani asal m� diye bak�cam  ya ondan dolay� i say�s�na kadar olan 2 den ba�layarak t�m de�erlerce 
			{																										// moduna bak�yorum
				if(i%k==0)	//kontrol ediyorum
				{
					a=0;
					continue;
				}		//E�er modu 0 ��karsa bu demektir ki b�l�nm��t�r  yani asal de�ildir a diye bir de�er atay�p onu 0 a e�itliyorum 
							// ilk ba�ta a y� 1 olarak atam��t�m.
			}
			if(a!=0)	// �imdi kontol ediyorum e�er a 0 a e�it de�ilse yani yukar�daki if sonu�suz olduysa
				printf("%d	",i);	// buradan printfletiyorum	
			a=1;
		}
	}
	//Yukar�daki mavi sat�rlar�n ayn�lar� bunun i�in de ge�erli tek fark y de�eri x den b�y�k i�in
	else if(y > x)
	{
		for(l=x ; l<=y ; l++)	// burada tek tek k���k de�erden ba�layarak 1 artt�r�yorum 
		{
			for(j=2 ; j<l ; j++)	// burada hani asal m� diye bak�cam  ya ondan dolay� l say�s�na kadar olan 2 den ba�layarak t�m de�erlerce 
			{																										// moduna bak�yorum
				if(l%j==0)	//kontrol ediyorum
				{
					b=0;
					continue;
				}		//E�er modu 0 ��karsa bu demektir ki b�l�nm��t�r  yani asal de�ildir b diye bir de�er atay�p onu 0 a e�itliyorum 
							// ilk ba�ta b y� 1 olarak atam��t�m.
			}
			if(b!=0)// �imdi kontol ediyorum e�er b 0 a e�it de�ilse yani yukar�daki if sonu�suz olduysa
				printf("%d	",l);// buradan printfletiyorum
			b=1;
		}
	}
	else
		printf("Please input different numbers");
	
	return(0);
}
