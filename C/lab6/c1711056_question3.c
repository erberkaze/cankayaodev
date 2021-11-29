#include <stdio.h>
a=3;
int f1(arr[][9])
int main(void)
{
	int sudoku[9][9],b;
	b=f1(sudoku);
	if(b==1)
		printf("This could be sudoku");
	else
		printf("This could not be sudoku");
	
	retrun(0);	
}
int f1(arr[][9])
{
	int i,j,k,ct=0,sum=0;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{	
			for(k=0;k<9;k++)
			{
				if(arr[i][j]==arr[i][k])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{	
			for(k=0;k<9;k++)
			{
				if(arr[j][i]==arr[k][i])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
			{
				sum+=arr[i][j];
				if(sum==45)
					break;
				else
					return 0;
			}
	}
	ct=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{	
			for(k=0;k<a;k++)
			{
				if(arr[i][j]==arr[i][k])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}
	}
	ct=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{	
			for(k=0;k<a;k++)
			{
				if(arr[j][i]==arr[k][i])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}
	}
	ct=0;
	for(i=2;i<a+3;i++)
	{
		for(j=2;j<a+3;j++)
		{	
			for(k=2;k<a+3;k++)
			{
				if(arr[j][i]==arr[k][i])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=2;i<a+3;i++)
	{
		for(j=2;j<a+3;j++)
		{	
			for(k=2;k<a+3;k++)
			{
				if(arr[i][j]==arr[i][k])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=5;i<a+6;i++)
	{
		for(j=5;j<a+6;j++)
		{	
			for(k=5;k<a+6;k++)
			{
				if(arr[i][j]==arr[i][k])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=5;i<a+6;i++)
	{
		for(j=5;j<a+6;j++)
		{	
			for(k=5;k<a+6;k++)
			{
				if(arr[j][i]==arr[k][i])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=0;i<3;i++)
	{
		for(j=2;j<a+3;j++)
		{	
			for(k=2;k<a+6;k++)
			{
				if(arr[i][j]==arr[i][k])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=0;i<3;i++)
	{
		for(j=5;j<a+6;j++)
		{	
			for(k=5;k<a+6;k++)
			{
				if(arr[i][j]==arr[i][k])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=0;i<3;i++)
	{
		for(j=5;j<a+6;j++)
		{	
			for(k=5;k<a+6;k++)
			{
				if(arr[j][i]==arr[k][i])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=0;i<3;i++)
	{
		for(j=2;j<a+3;j++)
		{	
			for(k=2;k<a+6;k++)
			{
				if(arr[j][i]==arr[k][i])
				{
					ct++;
					if(ct>=2)
						return 0;
				}
			}
		}

	}
	ct=0;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
			{
				for(k=1;k<=9;k++)
					{
						if(arr[i][j]==k)
							ct++;
					}
			}
		if(ct!=9)
			return 0;
	}
		
	return 1;
}
