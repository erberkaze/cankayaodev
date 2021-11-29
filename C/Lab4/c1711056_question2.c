#include <stdio.h>
int main(void)
{
	int arr[30],i,k,j,n,ct=0,m,l;
	printf("Please input your array's size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please enter %d integer",n);
		scanf("%d",&arr[i]);
	}
	for(k=0;k<=n;k++)
	{
		for(j=0;j<=n;j++)
			{
				if(arr[k]==arr[j])
				{
				//	if(arr[k]!=0)//0 lar kalkýyo fakat adam 0 girerse çalýþmýyo hoþ deðil
				//	{
						
						ct++;
						if(ct>1)
						{
							for(m=j,l=(j+1);m<=(n-j);m++,l++)  		//Hocam bu satýrda 1. sorudaki rotate iþlemini yaptým
																//fakat outputtaki 0 larý bir türlü kaldýramadým 
																//pazartesi eðer müsait iseniz yanýnýza gelicem hocam.
								arr[m]=arr[l];
						}
				//	}
					
				}		
			}
		if(ct>0)
		{
			printf("%d occours %d times\n",arr[k],ct);
			ct=0;
		}	
		
	}
	return(0);
}
