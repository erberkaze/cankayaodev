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
	
	if(x > y) // kullanýcýnýn x sayýsýný y den daha büyük girmiþ olma olasýlýðý için bi if koydum
	{
		for(i=y ; i<=x ; i++)	// burada tek tek küçük deðerden baþlayarak 1 arttýrýyorum 
		{
			for(k=2 ; k<i ; k++)	// burada hani asal mý diye bakýcam  ya ondan dolayý i sayýsýna kadar olan 2 den baþlayarak tüm deðerlerce 
			{																										// moduna bakýyorum
				if(i%k==0)	//kontrol ediyorum
				{
					a=0;
					continue;
				}		//Eðer modu 0 çýkarsa bu demektir ki bölünmüþtür  yani asal deðildir a diye bir deðer atayýp onu 0 a eþitliyorum 
							// ilk baþta a yý 1 olarak atamýþtým.
			}
			if(a!=0)	// þimdi kontol ediyorum eðer a 0 a eþit deðilse yani yukarýdaki if sonuçsuz olduysa
				printf("%d	",i);	// buradan printfletiyorum	
			a=1;
		}
	}
	//Yukarýdaki mavi satýrlarýn aynýlarý bunun için de geçerli tek fark y deðeri x den büyük için
	else if(y > x)
	{
		for(l=x ; l<=y ; l++)	// burada tek tek küçük deðerden baþlayarak 1 arttýrýyorum 
		{
			for(j=2 ; j<l ; j++)	// burada hani asal mý diye bakýcam  ya ondan dolayý l sayýsýna kadar olan 2 den baþlayarak tüm deðerlerce 
			{																										// moduna bakýyorum
				if(l%j==0)	//kontrol ediyorum
				{
					b=0;
					continue;
				}		//Eðer modu 0 çýkarsa bu demektir ki bölünmüþtür  yani asal deðildir b diye bir deðer atayýp onu 0 a eþitliyorum 
							// ilk baþta b yý 1 olarak atamýþtým.
			}
			if(b!=0)// þimdi kontol ediyorum eðer b 0 a eþit deðilse yani yukarýdaki if sonuçsuz olduysa
				printf("%d	",l);// buradan printfletiyorum
			b=1;
		}
	}
	else
		printf("Please input different numbers");
	
	return(0);
}
