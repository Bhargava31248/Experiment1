#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct hotel
{
	char a[50],b[50],c[50];
	int d,e,f;
	float x,y,z;
}*p,*q,*r;
void main()
{
  p=(struct hotel *)malloc(sizeof(struct hotel));
  q=(struct hotel *)malloc(sizeof(struct hotel));
  r=(struct hotel *)malloc(sizeof(struct hotel));
avaliability();
booking();
features();
details();
dealloc();
review();
}
void avaliability()
{
	char s[100];
	printf("\t\t\t  WELCOME TO HOTEL MANAGEMENT SYSTEM\n");
	printf("AFTER GIVING DETAILS OF PLACE TYPE DATE OF ARRIVAL TO DEPARTURE SEPERATED WITH SPACE\n");
	printf("THE FORMAT IS DD-MM-YYYY\n");
	printf("ENTER CITY/AREA/HOTEL");
	scanf("%s\n",p->a);
	gets(s);
	printf("WE HAVE AVALIABILITY IN OUR HOTELS\n");
}
void booking()
{
int ga,gb,gc,gd;
printf("ENTER NUMBER OF ADULTS\n");
scanf("%d",&ga);
printf("ENTER NO OF INFANTS[AGED UNDER 4]\n");

printf("ENTER NO OF ROOMS REQUIRED\n");
scanf("%d\n",&gb);
}
void features()
{
    	printf("HOTEL X FEATURES ARE\n");
		printf("ROOMS ARE NEAT\n");
		printf("ROOMS HAVE FREE WIFI\n");
		printf("ROOMS HAVE ONLY ONE SINGLE BED\n");
		printf("ROOMS ARE EQUIPPED WITH TV\n");
		printf("ROOMS ARE EQUIPPED WITH A/C");
		printf("ROOMS ARE EQUIPPED WITH 24-HRS ROOM SERVICE\n");
		printf("HOTEL IS EQUIPPED WITH WHEEL CHAIR ACCESS\n");
		printf("HOTEL HAS PARKING FACILITY\n");
		printf("HOTEL HAS POWER BACK-UP\n");
		printf("HOTEL HAS AN ICONIC BAR\n");
}
void details()
{
	long int da,db;
	float kb;
	printf("enter your details");
	scanf("%s%s",p->b,p->c);
	printf("IT WILL COST 3000 PER NIGHT\n");
	printf("please confirm your details\n");
	printf("%s\t%s\n",p->b,p->c);
	printf("PLEASE ENTER THE NO OF DAYS AGAIN\n");
	scanf("%ld",&da);
	db=da*3000;
	kb=db*1.18;
	printf("YOUR TOTAL BILL IS %.2f(INCLUDING *GST)",kb);
	printf("WOULD YOU LIKE TO SEE THE PACKAGES OF MENU IN RESTAURANT,type yes or no\n");
	scanf("%s",q->a);
	if (strcmp(q->a,"yes")==0)
	{
		printf("THESE ARE OUR COMBO’S");
		printf("C1.)VEG MEAL COMBO......100$\n");
		printf("C2.)VEG LUNCH COMBO ....500$\n");
		printf("C3.)NON VEG LUNCH COMBO ...750$\n");
		printf("C4.)OR YOU CAN ALSO SKIP THIS SELECTION\n");
		printf("THE BILL OF THE COMBO’S SHOULD BE PAID TO THE HOTEL\n");
		printf("ENTER YOUR CHOICE");
		scanf("%s",q->b);
		printf("THANK YOU FOR OPTING US HOPE YOU HAVE A NICE STAY!");
		printf("YOUR REFERENCE NUMBER IS HMS1985A39\n");
		printf("\t\t\t THANK YOU ");
	}
	else
	{
		printf("THANK YOU FOR OPTING US HOPE YOU HAVE A NICE STAY!");
		printf("YOUR REFERENCE NUMBER IS HMS1985B89\n");
		printf("\t\t\tTHANK YOU\n\n\n");		
	}
}
void dealloc()
{
	char gs[50];
	printf("DO YOU WANT TO CANCEL YOU BOOKING\n");
	printf("TYPE 1 TO CANCEL YOUR BOOKING \n");
	printf("TYPE 2 TO EXIT\n");
	printf("ENTER YOUR CHOICE");
	scanf("%d",&q->e);
	if (q->e==2)
	{
		printf("THANK YOU!");
	}
	else
	{
		printf("ENTER YOUR REFERENCE NUMBER");
		scanf("%s",gs);
		if (strcmp(gs,"HMS1985A39")==0 || strcmp(gs,"HMS1985B89")==0)
		{
			printf("ONCE! CHECK YOUR DETAILS\n");
			printf("%s\t%s\n",p->b,p->c);
			printf("IF THE DETAILS ARE CORRECT TYPE 1 OR TYPE 2 if THEY ARE WRONG");
			scanf("%d",&r->d);
			if (r->d==1)
			{
				printf("THANK YOU YOUR RESERVATION IS CANCELLED\n");
				printf("YOUR MONEY WILL BE CREDITED TO YOUR BANK ACCOUNT IN 3 BUSINESS DAYS\n");
				printf("\t\t\tTHANK YOU");
			}
			else
			{
				printf("PLEASE CONTACT OUR CUSTOMER CARE AT 040-2255099 or mail us at HMS48@hotel.com");
				printf("\t\t\tTHANK YOU");
			}
}
}
}
void review()
{
	int a1,a2,a3;
	printf("WOULD YOU PLEASE CARE FOR 1 MIN TO REVIEW OUR WEBSITE? TYPE yes OR no");
	scanf("%s",r->c);
	if (strcmp(r->c,"yes")==0)
	{
		printf("GIVE RATING OUT OF 5");
		printf("IS OUR SYSTEM EASY TO NAVIGATE");
		scanf("%d",&a1);
		printf("How likely are you to recommend our website to a friend");
		scanf("%d",&a2);
		printf("HOW WAS OUR CUSTOMER SERVICE");
		scanf("%d",&a3);
		printf("\t\t\t\tTHANK YOU");
	}
	else
	{
		printf("\t\t\t\tTHANK YOU");
	}
}
