 #include <stdio.h>
int main(void)
{
	//initialization
	FILE *fin;
	FILE *fout;
	int i , x , y;

	fin = fopen("grade.txt" , "w");
	
	//input statements
	fprintf(fin , "\tStudents' ID'\t");
	fprintf(fin , "\tStudents Grades");
	fprintf(fin , "\n");
	
	//input statements part2
	for(i = 1 ; i < 11 ; i++)
	{
		printf("Please input students id and grades respectly\n");
		scanf("%d%d" , &x , &y);
		fprintf(fin , "%d-)\t\t%d\t\t\t%d" , i , x , y);		
		fprintf(fin , "\n");
	}
	fclose(fin);


	return(0);
}
