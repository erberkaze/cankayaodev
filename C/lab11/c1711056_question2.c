#include <stdio.h>
int main(void)
{
	//initialization
	FILE *fin;
	FILE *fout;
	int i , x , y , sira , id , grade;
	char cumle[50];
	//targetting pointers
	fin = fopen("grade.txt" , "r");
	fout = fopen("out.txt" , "w");
	
	fgets(cumle,50,fin);
	fprintf(fout,"%s",cumle);
	

	//processing
	while(!feof(fin))
	{
		fscanf(fin,"%d",&sira);
		fscanf(fin,"%d",&id);
		fscanf(fin,"%d",&grade);
		fprintf(fout,"%d\t\t%d\t\t%d",sira,id,grade);
		if(grade <= 60)
			fprintf(fout," \t\tF");
		else if(grade >= 61 && grade <= 70)
			fprintf(fout," \t\tD");
		else if(grade >= 71 && grade <= 80)
			fprintf(fout," \t\tC");
		else if(grade >= 81 && grade <= 90)
			fprintf(fout," \t\tB");
		else if(grade >= 91 && grade <= 100)
			fprintf(fout," \t\tA");
		
		fprintf(fout,"\n");
	}
	fclose(fin);
	fclose(fout);
	
		
	
	
	
	
	return(0);
}
