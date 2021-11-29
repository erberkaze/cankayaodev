#include <stdio.h>// for printf(),scanf(),..
#include <stdlib.h>// for rand(),srand(),...
#include <time.h>// for time(),
int main(void)
{
	srand(time(NULL));
	int a= 20+rand()%60;
	printf("a=%d\n",a);
	return(0);
}
