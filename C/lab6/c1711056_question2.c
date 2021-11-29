#include <stdio.h>
int isMirror(checkarr[][5],size);
int main(void)
{
	int twoarray[5][5],row,column,turned,size=25;
	printf("Please input your arrays members");
	for(column=0;column<5;column++)
	{
		for(row=0;for<5;for++)
			scanf("%d",&twoarray[column][row]);
		
	}
	turned=isMirror(twoarray,size);
	return(0);
}
int isMirror(checkarr[][5],size);
{
	int column[10],row[10],i,j,k=0,turning,checker,checkercount=0,l;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			{
				if(j>i)
					{
						row[k]=row[i][j];
						k++;
					}
			}
	}
	k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			{		
				if(j<i)
					{
						column[k]=checkarr[j][i]
						k++
					}
			}
	}
	for(checker=0;checker<10;checker++)
	{
		if(column[checker]==row[checker])
			checkercount++
	}
	if(checkercount==10 && arrcheck[0][0]==arrcheck[1][1]==arrcheck[2][2]=arrcheck[3][3]==arrcheck[4][4]==arrcheck[5][5])
		return 1;
	else
		return 0;

		
	
	
		
	
}
