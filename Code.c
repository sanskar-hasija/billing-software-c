#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <time.h>

	// TWO FUNCTIONS USED


void billcash(char name[], char num[], int o[],char *s[],int p[]);
void billonline(char name[], char num[], int o[],char *s[],int p[]);

int  main()
{


int i;
int o[10];
int p[]={10,20,15,10,50,60,50,25,20,10};


char *s[]={"Tea              ","Coffee          ","Samosa          ","Wada Pav        ","Pav Bhaji       ","Dosa             ","Misal Pav        ","Salad           ","COke/Fanta/Sprite","Chips/Buiscuits "};
char name[20], num[12];
char x;
char a;


 	//INTRO HEADER


printf("\t ****************WELCOME TO******************* \n");
printf("\t *************IIIT-P E-Canteen***************** \n");
printf("\t\t\tNear IIIT Hostel\n");
printf("\t\t\t     PUNE\n");
printf("\t\t\t\t MOBILE-+91-99824335xx\n");

	// CUSTOMER DETAILS

printf("\n\t Enter Your Name:\t ");
gets(name);
printf("\t Enter Your Mobile No.:\t");
scanf("%s",&num);

	// FIRST CLEAR SCREEN
system("cls");

	// MENU

printf("\n\t **** DEAR CUSTOMER, This is Today's' Menu ****\n\n");
printf(" \t ITEMS \t\t\t PRICE\n");
for(i=0;i<10;i++)
{
	printf(" %d. %s \t\t RS.%d\n",i+1,s[i],p[i]);
}

	// ORDER INPUT

printf("\nDear customer, would you like to give order something? ");
printf("\n (y for Yes/ n for No) :");
char ch = getchar();
scanf("%c",&x);

	// SECOND CLEAR SCREEN
system("cls");

if(x=='y'||x=='Y')
 {
 	printf("\n\t Your Order ......");
 	printf("\n \t Please Select Your Order(Enter Quantity only):\n");
  	// TAKE ORDER

	for(i=0;i<10;i++)
  	{

	printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
  	scanf("%d",&o[i]);
  	}
 	// THIRD CLEAR SCREEN
	system("cls");

	// PAYMENT METHODS

	printf("\n\n\t\t\t  Enter Payment Method \t ");
	printf("\n \n\n\t\t Enter 1.For Cash ");
	printf("\n\t\t       2.For Card or Online Payment\n");
	scanf(" %d",&a);

	//OPTION FOR  PAYMENT METHODS

	switch (a)
	{

	case 1 : billcash(name,num,o,s,p);
	break;

	case 2 : billonline(name,num,o,s,p);
	break;

	// WRONG INPUT CHECK

	default: printf("Wrong inupt. Restart again ");
	}
 }

	// ENDING
else if (x=='n'&&x=='N')
{

	printf("\n\n\n\t\t Thank You Sir, Visit Again...!");
 		printf("\n______________________________DEVELOPED BY SANSKAR HASIJA\n");

}

	// WRONG INPUT CHECK
else
{

	printf ("WRONG INPUT RESTART AGAIN");

}
}

	// BILL FUNCTIONS USED


 void billcash(char name[], char num[], int o[],char *s[],int p[])
      {

          int i,tot=0;

        	// FOURTH CLEAR SCREEN
  system("cls");

  	// TIME IS DEFINED

	time_t rawtime;
  	struct tm * timeinfo;
            	time ( &rawtime );
            	timeinfo = localtime ( &rawtime );

        	// BILL HEADER

printf("\t ****************WELCOME TO***************** \n");
printf("\t **************** E-Canteen***************** \n");
printf("\t\t\tNear IIIT Hostel\n");
printf("\t\t\t    PUNE\n");
printf("\t\t MOBILE-+91-8982433584\n");
printf("\n\t Customer Name: \t");
puts(name);
printf("\t Customer Mobile No.: \t");
printf("%d",num);
printf ( "\n\t Current local time :   %s", asctime (timeinfo) );
  printf("\n\t***************************************************************************");

printf("\n\t*KINDLY TAKE SCREENSHOT OF THIS BILL AND SHOW IT TO THE RESPECTIVE COUNTER*");
  printf("\n\t***************************************************************************");
 printf("\n\t PROCEED TO COUNTER NO. 1\n");
 printf("\n\t Payment Method : CASH\n");
 printf("\n\t Your Today's Bill is.....\n");
 printf(" \t\t\t    ITEMS       \t\t\t\t TOTAL");
  printf("\n\t__________________________________________________________________________");
  	// BILL CONTENTS

   for(i=0;i<10;i++)
  {
    if(o[i]!=0)
       {
printf("\n\t\t    %s    \t(%d X %d)\t\t   RS.%d",s[i],o[i],p[i],o[i]*p[i]);
        }
 }

  printf("\n\t_________________________________________________________________________");

	// BILL TOTAL


for(i=0;i<10;i++)
{
  	tot=tot+o[i]*p[i];
 }
 printf("\n\t Your Total Billing amount is\t:\t\t\t    %RS.%d\n",tot);
}

// BILL FUNCTIONS USED


void billonline(char name[],char num [], int o[],char *s[],int p[])
{

   int i,tot=0;
	// FOURTH CLEAR SCREEN


system("cls");


	// TIME IS DEFINED

	time_t rawtime;
  	struct tm * timeinfo;
 	time ( &rawtime );
 	timeinfo = localtime ( &rawtime );
	// BILL HEADER

printf("\t ****************WELCOME TO***************** \n");
printf("\t **************** E-Canteen***************** \n");
printf("\t\t\tNear IIIT Hostel\n");
printf("\t\t\t    PUNE\n");
printf("\t\t MOBILE-+91-8982433584\n");
printf("\n\t Customer Name: \t");
puts(name);
printf("\t Customer Mobile No.: \t");
printf("%d",num);
printf( "\n\t Current local time :   %s", asctime (timeinfo) );
    printf("\n\t***************************************************************************");

printf("\n\t*KINDLY TAKE SCREENSHOT OF THIS BILL AND SHOW IT TO THE RESPECTIVE COUNTER*");

printf("\n\t***************************************************************************");
printf("\n\t Payment Method : CARD OR ONLINE\n");
printf("\n\t PROCEED TO COUNTER NO. 2\n");
printf("\n\t Your Today's Bill is.....\n");
printf(" \t\t\t    ITEMS       \t\t\t\t TOTAL");
printf("\n\t_________________________________________________________________________");

	// BILL CONTENTS


for(i=0;i<10;i++)
{
if(o[i]!=0)
{
printf("\n\t\t    %s    \t(%d X %d)\t\t    RS.%d",s[i],o[i],p[i],o[i]*p[i]);
  }
}

printf("\n\t_______________________________________________________________________");

	// BILL TOTAL

 for(i=0;i<10;i++)
   {
    	tot=tot+o[i]*p[i];
    }

printf("\n\t Your Total Billing amount is\t:\t\t\t       %RS.%d\n",tot);
}
