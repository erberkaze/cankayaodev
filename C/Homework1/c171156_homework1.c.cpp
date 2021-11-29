#include <stdio.h>
void printMainMenu(void);
void printSteatInformation(int *pA,int *pB,int *pC,int *pD);
void updatePrices(int a,int b,int c,int d,int *apara,int *bpara,int *cpara,int *dpara);
void printTicketPrices(int *apara,int *bpara,int *cpara,int *dpara);
void seatControl(char *seatInfo,int *numberOfSold,int *result,int levela,int levelb,int levelc,int leveld);
void sell(int a,int b,int c,int d,int degera,int degerb,int degerc,int degerd,int *cash1);
void calculateBill(int parasi,int kactane);
int main (void)
{
	int quitdongusu=1,usernegirdi,levela=40,levelb=40,levelc=40,leveld=40,pricea=100,priceb=80,pricec=60,priced=40,cash=0;
	while(quitdongusu)
	{
			printMainMenu();
			scanf("%d",&usernegirdi);
			if(usernegirdi==1)
				printSteatInformation(&levela,&levelb,&levelc,&leveld);
			else if(usernegirdi==2)
				updatePrices(pricea,priceb,pricec,priced,&pricea,&priceb,&pricec,&priced);
			else if(usernegirdi==3)	
				sell(levela,levelb,levelc,leveld,pricea,priceb,pricec,priced,&cash);
			else if(usernegirdi==4)
				printf("Current cash information %d",cash);
			else if(usernegirdi==5)
				{
					printf("Current cash information %d",cash);
					printf("Bye!");
					quitdongusu=0;
				}
				
					
				
			
	}
	
	return(0);
}
void printMainMenu(void)
{
	printf("——————————————\nOPERATIONS :\n——————————————\n");
	printf("1. Seat Info\n2. Update Prices\n3. Sell a ticket\n4. Current cash info\n5. Quit\nSelect your operation : ");
	
}
void printSteatInformation(int *pA,int *pB,int *pC,int *pD)
{
	printf("**************************************\n");
	printf("Level A : %d\nLevel B : %d\nLevel C : %d\nLevel D : %d\n",*pA,*pB,*pC,*pD);
}
void printTicketPrices(int *apara,int *bpara,int *cpara,int *dpara)
{
	printf("Prices :\n	Level A : %d\nLevel B : %d\nLevel C : %d\nLevel D : %d\n",*apara,*bpara,*cpara,*dpara);
}
void updatePrices(int a,int b,int c,int d,int *apara,int *bpara,int *cpara,int *dpara)
{
	int newmani,tamamdevam;
	char level;
	do{
		printTicketPrices(&a,&b,&c,&d);
		printf("Select level to update :");
		scanf("%c",&level);
		printf("Enter new price of level B :");
		scanf("%d",&newmani);
		if(level=='A')
			{
				*apara=newmani;
				printf("Level %c ticket price is updated to %d\n",level,newmani);
			}
		else if(level=='B')
			{
				*bpara=newmani;
				printf("Level %c ticket price is updated to %d\n",level,newmani);
			}
		else if(level=='C')
			{
				*cpara=newmani;
				printf("Level %c ticket price is updated to %d\n",level,newmani);
			}
		else if(level=='D')
			{
				*dpara=newmani;
				printf("Level %c ticket price is updated to %d\n",level,newmani);
			}
		printf("**************************************\n");
		printTicketPrices(&a,&b,&c,&d);	
		printf("——————————————\nOPERATIONS :\n——————————————\n1. Continue to calculate bill\n2. Return to main menu\nSelect your operation : ");	
		scanf("%d",&tamamdevam);
		
		}while(tamamdevam!=2);
	
}
void seatControl(int *seatInfo,int *numberOfSold,int *result,int levela,int levelb,int levelc,int leveld)
{
	if((*seatInfo)=='A')
		{
			if((*numberOfSold)<levela)
				*result=1;
			else
				*result=0;
		}
	if((*seatInfo)=='B')
		{
			if((*numberOfSold)<levela)
				*result=1;
			else
				*result=0;
		}
	if((*seatInfo)=='C')
		{
			if((*numberOfSold)<levela)
				*result=1;
			else
				*result=0;
		}
	if((*seatInfo)=='D')
		{
			if((*numberOfSold)<levela)
				*result=1;
			else
				*result=0;
		}		
}
void calculateBill(int parasi,int kactane,int *result1)
{
	*result1=parasi*kactane;
}
void addMoney(int *z1,int*res)
{
	*z1=(*z1)+(*res);
}
void sell(int a,int b,int c,int d,int degera,int degerb,int degerc,int degerd,int *cash1)
{
	char whichone;
	int howmuch,olurolmaz,tamamdevam=0,result=0,z=0;
	
	
	do{
		printSteatInformation(&a,&b,&c,&d);
		printf("**************************************");
		printf("Select Level");
		scanf("%c",&whichone);
		printf("Enter number of tickets for Level %c seat :",whichone);
		scanf("%d",&howmuch);
		seatControl(&whichone,&howmuch,&olurolmaz,a,b,c,d);
			if (whichone=='A')
		{
			if (olurolmaz==1)
			{	
				printf("%d Seats from Level %c is sold",olurolmaz,whichone);
				*kaca=(*kaca)-howmuch;
				calculatebill(degera,howmuch,&result);
				addMoney(&z,&result)
				*cash1+=z;
		
			}
			else
			{
				printf("SORRY… Level A tickets are out of stock");
				
			}
		
		}
		else if (whichone=='B')
		{
			if (olurolmaz==1)
			{
				printf("%d Seats from Level %c is sold",olurolmaz,whichone);
				*kacb=(*kacb)-howmuch;
				calculatebill(degerb,howmuch,&result);
				addMoney(&z,&result)
				*cash1+=z;
			}
			else
			{
				printf("SORRY… Level B tickets are out of stock");
				
			}
		}
		else if (whichone=='C')
		{
			if (olurolmaz==1)
			{
				printf("%d Seats from Level %c is sold",olurolmaz,whichone);
				*kacc=(*kacc)-howmuch;
				calculatebill(degerc,howmuch,&result);
				addMoney(&z,&result)
				*cash1+=z;
			}
			else
			{
				printf("SORRY… Level C tickets are out of stock");
				
			}
		}
		else if (whichone=='D')
		{
			if (olurolmaz==1)
			{
				printf("%d Seats from Level %c is sold",olurolmaz,whichone);
				*kacd=(*kacd)-howmuch;
				calculatebill(degerd,howmuch,&result);
				addMoney(&z,&result)
				*cash1+=z;
			}
			else
			{
				printf("SORRY… Level D tickets are out of stock");
			
			}
		printf("OPERATIONS :\n——————————————\n1. Continue selling\n2. Return main menu");
		scanf("%d",&tamamdevam);
		}
		}while(tamamdevam!=2);	
}


