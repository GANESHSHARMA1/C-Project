#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>

struct
{
char beid2022[50],mopn2022[50];
}GAm2022;



// All non main functions //



Termfn(float TLreS)
{

    FILE *z;
    z = fopen("AdSense.doc","a");
    fprintf(z,"\n\n\n\n\n\nDeal Cost - %f",TLreS);
    fclose(z);
}
GoAD2022()
{
    char bn2022[50],adnm2022[50];
     int COuntOFnuM,MzqPb;
FILE *q;
q = fopen("AdSense.doc","w");
 printf("\n\n\n\t\t\t\t\t\t\tEnter your Franchise Name - ");
 getchar();
 gets(bn2022);
 printf("\n\n\n\t\t\t\t\t\t\tEnter your Business E-Mail ID - ");
 scanf("%s",&GAm2022.beid2022);
 LeGeTeHeHe2022:printf("\n\n\n\t\t\t\t\t\t\tEnter the Contact Number of the Business - ");
 scanf("%s",&GAm2022.mopn2022);
 COuntOFnuM=strlen(GAm2022.mopn2022);
 if(COuntOFnuM!=10)
 {
     printf("\n\n\n\t\t\t\t\t\t\tInvalid Phone Number Entered");
     goto LeGeTeHeHe2022;
 }
 printf("\n\n\n\t\t\t\t\t\t\tEnter the Content to be Advertised and we are good to go with your Ads!\n");
 getchar();
 gets(adnm2022);
 fprintf(q,"Franchise - %s\n\nE-mail - %s\n\nContact Number - %s\n\n\n\nYour Ad Content - \n\n\n\t   %s",bn2022,GAm2022.beid2022,GAm2022.mopn2022,adnm2022);
 fclose(q);
}

void BookFlight(char pick[], char dest[], char na[], int e, int f, int g, float cost);
void BookFlight(char pick[], char dest[], char na[], int e, int f, int g, float cost)
{
    FILE *fp;
    fp=fopen("TICKET.doc","w");
int ch;
int row,col;
int no;
int time;
	char ba[] = "Bangalore",ma[] = "Mangalore", mu[] = "Mumbai", ag[] = "Agra", hy[] = "Hyderabad";
	char in[] = "India", us[] = "USA", du[] = "Dubai", fr[] = "France", it[] = "Italy";
    printf("\t\t\t\t\t\t\tWaiting for confirmation of Flight ticket from %s to %s\n", pick, dest);
	printf("\t\t\t\t\t\t\tName = %s\n\t\t\t\t\t\t\tDate = %d / %d / %d\n\n\t\t\t\t\t\t\tCost = %f\n", na, e, f, g, cost);
	printf("\t\t\t\t\t\t\tPlease select the time of departure\n");
	 H1G2:printf("\t\t\t\t\t\t\tTime (1) : 6:42AM\tTime (2) : 4:30PM\tTime (3) : 1:30AM\n");
	scanf("%d",&time);
	if((time==1)||(time==2)||(time==3))
    {
    printf("  ");
    }
    else
        {
        printf("\t\t\t\t\t\t\tPlease select valid available time 1 or 2 or 3\n");
goto H1G2;
    }

	printf("\n\n\t\t\t\t\t\t\tPlease select your seats\n");
	int arr[10][4],i,j,x,y;
    for (i=0;i<10;i++)
    {
        for (j=0;j<4;j++)
        {
            arr[i][j]=0;
        }
    }
    printf("\n\t\t\t\t\t\t\tSEATS\n\n\n");
    for(i=0;i<10;i++)
    {
        printf("\n");
        for (j=0;j<4;j++)
        {
            printf("\t\t");
            if(j==2)
                printf("\t\t");
            printf("\t%d",arr[i][j]);
        }
    }
    printf("\n\n\n\t\t\t\t\t\t\tPlease enter the number of tickets\n");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        printf("\n\n\t\t\t\t\t\t\tEnter the row number and column number respectively\n");
        scanf("%d%d",&row,&col);
        arr[row-1][col-1]=1;
         printf("\n\n\t\t\t\t\t\t\tBOOKED SEATS\n\n\n");
    for(x=0;x<10;x++)
    {
        printf("\n");
        for (y=0;y<4;y++)
        {
            printf("\t\t");
            if(y==2)
                printf("\t\t");
            printf("\t%d",arr[x][y]);
        }
    }

    printf("\n\n\n\t\t\t\t\t\t\tWould you like to confirm your ticket?\n\t\t\t\t\t\t\t1.Yes\n\t\t\t\t\t\t\t2.No.\n");
	scanf("%d", &ch);
	if (ch== 1)
    {
        if(time==1)
    {
		    printf("\t\t\t\t\t\t\tYour ticket is confirmed!! Thank you.\n\n\n");
        printf("\n\t\t\t\t\t\t\tPassenger Name = %s\n\t\t\t\t\t\t\tDate = %d/%d/%d\n\t\t\t\t\t\t\tFrom = %s\n\t\t\t\t\t\t\tTo = %s\n\t\t\t\t\t\t\tTicket Cost = %f\n\t\t\t\t\t\t\tSeat Number : ROW-%d COLUMN-%d\n\t\t\t\t\t\t\tTime of Departure: 6:42AM\n\n",na,e,f,g,pick,dest,cost,row,col);
        printf("\n\n\t\t\t\t\t\t\t*Happy Journey*");
        fprintf(fp,"\n||\t\tPassenger Name = %s\t\t\n||\t\tDate = %d/%d/%d\t\t\t\n||\t\tFrom = %s\t\t\t\t\n||\t\tTo = %s\t\t\t\t\n||\t\tTicket Cost = %f\t\n\t\tSeat Booked Number : ROW-%d COLUMN-%d\nTime of Departure : %s\n\n",na,e,f,g,pick,dest,cost,row,col,"6:42AM");

        }
        else if(time==2)
            {
                printf("\t\t\t\t\t\t\tYour ticket is confirmed!! Thank you.\n\n\n");
        printf("\n\t\t\t\t\t\t\tPassenger Name = %s\n\t\t\t\t\t\t\tDate = %d/%d/%d\n\t\t\t\t\t\t\tFrom = %s\n\t\t\t\t\t\t\tTo = %s\n\t\t\t\t\t\t\tTicket Cost = %f\n\t\t\t\t\t\t\tSeat Number : ROW-%d COLUMN-%d\n\t\t\t\t\t\t\tTime of Departure: 4:30PM\n\n",na,e,f,g,pick,dest,cost,row,col);
        printf("\n\n\t\t\t\t\t\t\t*Happy Journey*");
        fprintf(fp,"\n||\t\tPassenger Name = %s\t\t\n||\t\tDate = %d/%d/%d\t\t\t\n||\t\tFrom = %s\t\t\t\t\n||\t\tTo = %s\t\t\t\t\n||\t\tTicket Cost = %f\t\n\t\tSeat Booked Number : ROW-%d COLUMN-%d\nTime of Departure : %s\n\n",na,e,f,g,pick,dest,cost,row,col,"4:30PM");
        }
        else if(time==3)
            {
                printf("\t\t\t\t\t\t\tYour ticket is confirmed!! Thank you.\n\n\n");
        printf("\n\t\t\t\t\t\t\tPassenger Name = %s\n\t\t\t\t\t\t\tDate = %d/%d/%d\n\t\t\t\t\t\t\tFrom = %s\n\t\t\t\t\t\t\tTo = %s\n\t\t\t\t\t\t\tTicket Cost = %f\n\t\t\t\t\t\t\tSeat Number : ROW-%d COLUMN-%d\n\t\t\t\t\t\t\tTime of Departure: 1:30AM\n\n",na,e,f,g,pick,dest,cost,row,col);
        printf("\n\n\t\t\t\t\t\t\t*Happy Journey*");
        fprintf(fp,"\n||\t\tPassenger Name = %s\t\t\n||\t\tDate = %d/%d/%d\t\t\t\n||\t\tFrom = %s\t\t\t\t\n||\t\tTo = %s\t\t\t\t\n||\t\tTicket Cost = %f\t\n\t\tSeat Booked Number : ROW-%d COLUMN-%d\nTime of Departure : %s\n\n",na,e,f,g,pick,dest,cost,row,col,"1:30AM");
            }

    }


    printf("\n\n\t\t\t\t\t\t\t\t\tCheck your ticket in The Ticket file");




}
fclose(fp);
}

void dom(char na[])
{
float cost;
int dd,mm,yy;
	int a,cud,d,big,e, f, g, h, i;
	char ba[] = "Bangalore",ma[] = "Mangalore", mu[] = "Mumbai", ag[] = "Agra", hy[] = "Hyderabad";
	char in[] = "India", us[] = "USA", du[] = "Dubai", fr[] = "France", it[] = "Italy";
    char pick[20],dest[20];
        printf("\t\t\t\t\t\t\tPlease select the pick up point.\n");
		printf("\t\t\t\t\t\t\t1. %s 2. %s 3. %s 4. %s 5. %s\n", ba, ma, mu, ag, hy);
		scanf("%d",&big);
		dj:printf("\t\t\t\t\t\t\tEnter date (DD/MM/YYYY) format):");
    scanf("%d",&dd);
     scanf("%d",&mm);
      scanf("%d",&yy);
      if(yy>=2022 && yy<=2023)
    {

        if(mm>=1 && mm<=12)
        {
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("\t\t\t\t\t\t\tDate is valid.\n");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("\t\t\t\t\t\t\tDate is valid.\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("\t\t\t\t\t\t\tDate is valid.\n");
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                printf("\t\t\t\t\t\t\tDate is valid.\n");
            else
            {


                printf("\t\t\t\t\t\t\tDay is invalid.\n");
                printf("\t\t\t\t\t\t\tPlease enter valid date\n");
                goto dj;

            }
        }
        else
        {
            printf("\t\t\t\t\t\t\tMonth is not valid.\n");
            printf("\t\t\t\t\t\t\tPlease enter valid date\n");
            goto dj;
        }
    }
    else
    {
        printf("\t\t\t\t\t\t\tYear is not valid.\n");
        printf("\t\t\t\t\t\t\tPlease enter valid date\n");
        goto dj;

    }
		switch(big)
		{

		case 1:

		    printf("\t\t\t\t\t\t\tSelect the Destination:\n");
		         ep1: printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", ma, mu, ag, hy);

			      scanf("%d",&cud);

            if (cud == 11)
			{
                strcpy(pick,ba);
                strcpy(dest,ma);
                cost = 2800.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else
            if (cud == 22)
			{
                strcpy(pick,ba);
                strcpy(dest,mu);
                cost = 3700.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else
			if (cud == 33)
			{
                strcpy(pick,ba);
                strcpy(dest,ag);
                cost = 9999.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else
			if (cud == 44)
			{
                strcpy(pick,ba);
                strcpy(dest,hy);
                cost = 2599.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else
            {
                goto ep1;
            }
			break;
		case 2:
		    printf("\t\t\t\t\t\t\tSelect the Destination:\n");
           ep2: printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", ba, mu, ag, hy);
			scanf("%d", &cud);
			if (cud == 11)
			{
                strcpy(pick,ma);
                strcpy(dest,ba);
                cost = 3699.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 22)
			{
                strcpy(pick,ma);
                strcpy(dest,mu);
                cost = 5499.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
            else if (cud == 33)
			{
                strcpy(pick,ma);
                strcpy(dest,ag);
                cost = 7699.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 44)
			{
                strcpy(pick,ma);
                strcpy(dest,hy);
                cost = 4699.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else
            {
              goto ep2;
            }
			break;
		case 3:  printf("\t\t\t\t\t\t\tSelect the Destination:\n");
		      ep101:   printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", ba, ma, ag, hy);
			scanf("%d", &cud);
			if (cud == 11)
			{
                strcpy(pick,mu);
                strcpy(dest,ba);
                cost = 3299.50;
                 BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 22)
			{
                strcpy(pick,mu);
                strcpy(dest,ma);
                cost = 5299.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 33)
			{
                strcpy(pick,mu);
                strcpy(dest,ag);
                cost = 8499.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 44)
			{
                strcpy(pick,mu);
                strcpy(dest,hy);
                cost = 2999.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else
            {
                goto ep101;
            }
			break;
		case 4:  printf("\t\t\t\t\t\t\tSelect the Destination:\n");
                ep102: printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", ba, ma, mu, hy);
                 scanf("%d", &cud);
			if (cud == 11)
			{
                strcpy(pick,ag);
                strcpy(dest,ba);
                cost = 8299.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 22)
			{
                strcpy(pick,ag);
                strcpy(dest,ma);
                cost = 7999.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 33)
			{
                strcpy(pick,ag);
                strcpy(dest,mu);
                cost = 9499.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 44)
			{
                strcpy(pick,ag);
                strcpy(dest,hy);
                cost = 5699.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else
                {
                    goto ep102;
                }
			break;
		case 5:
		     printf("\t\t\t\t\t\t\tSelect the Destination:\n");
		    ep3: printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", ba, ma, mu, ag);
			scanf("%d", &cud);
			if (cud == 11)
			{
                strcpy(pick,hy);
                strcpy(dest,ba);
                cost = 2699.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 22)
			{
                strcpy(pick,hy);
                strcpy(dest,ma);
                cost = 4599.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else if (cud == 33)
			{
                strcpy(pick,hy);
                strcpy(dest,mu);
                cost = 3399.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
                else if (cud == 44)
			{
                strcpy(pick,hy);
                strcpy(dest,ag);
                cost = 6199.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			}
			else
            {
                goto ep3;
            }
		     break;
		}
}
void intl(char na[])
{
    int dd,mm,yy;
   float cost;
	int a,cud,big;
	char ba[] = "Bangalore",ma[] = "Mangalore", mu[] = "Mumbai", ag[] = "Agra", hy[] = "Hyderabad";
	char in[] = "India", us[] = "USA", du[] = "Dubai", fr[] = "France", it[] = "Italy";
    char pick[20],dest[20];
printf("\t\t\t\t\t\t\tPlease select the pick up point.\n");
		printf("\t\t\t\t\t\t\t1. %s 2. %s 3. %s 4. %s 5. %s\n", in, us, du, fr, it);
		scanf("%d", &big);
		dj: printf("\t\t\t\t\t\t\tEnter date (DD/MM/YYYY format):");
    scanf("%d",&dd);
     scanf("%d",&mm);
      scanf("%d",&yy);
if(yy>=2022&& yy<=2023)
    {

        if(mm>=1 && mm<=12)
        {

            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
printf(" ");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
printf(" ");
            else if((dd>=1 && dd<=28) && (mm==2))
printf(" ");
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
printf(" ");
            else
            {


                printf("\t\t\t\t\t\t\tDay is invalid.\n");
                goto dj;
            }
        }
        else
        {
            printf("\t\t\t\t\t\t\tMonth is not valid.\n");
            goto dj;
        }
    }
    else
    {
        printf("\t\t\t\t\t\t\tYear is not valid.\n");
        goto dj;
    }
		switch(big)
		{
		case 1:printf("\t\t\t\t\t\t\tSelect the Destination:\n");
            a901:printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", us, du, fr, it);
            scanf("%d",&cud);
            switch(cud)
			{
			    case 11:
                strcpy(pick,in);
                strcpy(dest,us);
                cost = 43599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
                break;
			    case 22:strcpy(pick,in);
                strcpy(dest,du);
                cost = 12999.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
                break;
                case 33:strcpy(pick,in);
                strcpy(dest,fr);
                cost = 24599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
		     	break;
			    case 44:strcpy(pick,in);
                strcpy(dest,it);
                cost = 29999.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			    break;
			    default: goto a901;

			}
			break;
		case 2: a902:printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", in, du, fr, it);
			    scanf("%d", &cud);
			    switch(cud)
			    {
        case 11:strcpy(pick,us);
                strcpy(dest,in);
                cost = 49599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 22:strcpy(pick,us);
                strcpy(dest,du);
                cost = 44599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 33:strcpy(pick,us);
                strcpy(dest,fr);
                cost = 45599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 44:strcpy(pick,us);
                strcpy(dest,it);
                cost = 51599.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			    break;
			    default: goto a902;
			    }
			    break;
		case 3: a903:printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", in, us, fr, it);
                scanf("%d", &cud);
			switch(cud)
			{
			    case 11:strcpy(pick,du);
                strcpy(dest,in);
                cost = 12599.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 22:strcpy(pick,du);
                strcpy(dest,us);
                cost = 47599.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 33:strcpy(pick,du);
                strcpy(dest,fr);
                cost = 20599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 44:strcpy(pick,du);
                strcpy(dest,it);
                cost = 21599.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
                break;
                default: goto a903;

			}
			break;
		case 4: a904:printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", in, us, du, it);
		        scanf("%d", &cud);
			switch(cud)
			{
			    case 11:strcpy(pick,fr);
                strcpy(dest,in);
                cost = 29500.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 22:strcpy(pick,fr);
                strcpy(dest,us);
                cost = 37999.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
                break;
			case 33:strcpy(pick,fr);
                strcpy(dest,du);
                cost = 24599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 44:strcpy(pick,fr);
                strcpy(dest,it);
                cost = 9599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			    break;
			    default: goto a904;

			}
			break;
		case 5: a905:printf("\t\t\t\t\t\t\t11. %s 22. %s 33. %s 44. %s\n", in, us, du, fr);
			    scanf("%d", &cud);
			switch(cud)
			{

			case 11:strcpy(pick,it);
                strcpy(dest,in);
                cost = 26599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			  break;
			  case 22:strcpy(pick,it);
                strcpy(dest,us);
                cost = 43599.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 33:strcpy(pick,it);
                strcpy(dest,du);
                cost = 21599.50;
               BookFlight(pick,dest,na,dd,mm,yy,cost);
			break;
			case 44:strcpy(pick,it);
                strcpy(dest,fr);
                cost = 35999.50;
                BookFlight(pick,dest,na,dd,mm,yy,cost);
			    break;
			    default : goto a905;
		}
		break;

			}
		}
void tot(float bmi)
{FILE *q;
    q=fopen("BMI.txt","w");
    fprintf(q,"\n\n\t\t\tNORMAL\t WEIGHT\t OVERWEIGHT\t	OBESE\n\nBMI Value:	19	20	21	22	23	24	25	26	27	28	29	30	31	32	33	34	35\n\nHeight\ncms (meters)\t	Body Weight\n(kilograms / kg)\n147cm (1.47m) (4.82ft)	41	44	45	48	50	52	54	56	59	61	63	65	67	69	72	73	76\n150cm (1.50m) (4.92ft)	43	45	47	49	52	54	56	58	60	63	65	67	69	72	74	76	78\n152cm (1.52m) (4.98ft)	44	46	49	51	54	56	58	60	63	65	67	69	72	74	76	79	81\n155cm (1.55m) (5.08ft)	45	48	50	53	55	57	60	62	65	67	69	72	74	77	79	82	84\n157cm (1.57m) (5.15ft)	47	49	52	54	57	59	62	64	67	69	72	74	77	79	82	84	87\n160cm (1.60m) (5.24ft)	49	51	54	56	59	61	64	66	69	72	74	77	79	82	84	87	89\n163cm (1.63m) (5.34ft)	50	53	55	58	61	64	66	68	71	74	77	79	82	84	87	89	93\n165cm (1.65m) (5.41ft)	52	54	57	60	63	65	68	71	73	76	79	82	84	87	90	93	95\n168cm (1.68m) (5.51ft)	54	56	59	62	64	67	70	73	76	78	81	84	87	90	93	95	98\n170cm (1.70m) (5.57ft)	55	57	61	64	66	69	72	75	78	81	84	87	90	93	96	98	101\n172cm (1.72m) (5.64ft)	57	59	63	65	68	72	74	78	80	83	86	89	92	95	98	101	104\n175cm (1.75m) (5.74ft)	58	61	64	68	70	73	77	80	83	86	89	92	95	98	101	104	107\n178cm (1.78m) (5.83ft)	60	63	66	69	73	76	79	82	85	88	92	95	98	101	104	107	110\n180cm (1.80m) (5.91ft)	62	65	68	71	75	78	81	84	88	91	94	98	101	104	107	110	113\n183cm (1.83m) (6ft)	64	67	70	73	77	80	83	87	90	93	97	100	103	107	110	113	117\n185cm (1.85m) (6.06ft)	65	68	72	75	79	83	86	89	93	96	99	103	107	110	113	117	120\n188cm (1.88m) (6.17ft)	67	70	74	78	81	84	88	92	95	99	102	106	109	113	116	120	123\n191cm (1.91m) (6.26ft)	69	73	76	80	83	87	91	94	98	102	105	109	112	116	120	123	127\n193cm (1.93m) (6.33ft)	71	74	78	82	86	89	93	97	100	104	108	112	115	119	123	127	130\nHeight\ncms (meters)	Body Weight\n(kilograms / kg)\nBMI Value:	19	20	21	22	23	24	25	26	27	28	29	30	31	32	33	34	35\n");
    fprintf(q,"\n\n\n\n\t\t\t\t\t\t\tYour BMI - %.2f\n",bmi);
     if(bmi<18.5)
     {
         sleep(2);
         printf("\n\t\t\t\t\t\t\tYou are Underweight\n\t\t\t\t\t\t\t\tHave more healthy food in your diet!");
         fprintf(q,"\n\t\t\t\t\t\t\tWith this lean BMI the indication is that your weight maybe too low.\n\t\t\t\t\t\t\t\You should consult your physician to determine if you should gain weight,\n\t\t\t\t\t\t\t\tas low body mass can decrease your body's immune system,\n\t\t\t\t\t\t\t\twhich could lead to illness such bone loss, malnutrition and other conditions.\n\n\n");
     }
     else
    if(bmi>18.5 && bmi<24.9)
    {
        sleep(2);
        printf("\n\t\t\t\t\t\t\t\tYou are fit!\n\t\t\t\t\t\t\t\tKeep up the diet!");
        fprintf(q,"\n\t\t\t\t\t\t\tWith this BMI you possess the ideal amount of body weight, associated with living longest,\n\t\t\t\t\t\t\t\tthe lowest incidence of serious illness,\n\t\t\t\t\t\t\t\tas well as being perceived as more physically attractive than people with BMI in higher or lower ranges.\n\n\n");
    }
    else
        if(bmi>25 && bmi<29.9)
    {
        sleep(2);
        printf("\n\t\t\t\t\t\t\tYou are just about to become obese");
        fprintf(q,"\n\t\t\t\t\t\t\tWith this BMI you are considered overweight and would benefit from finding healthy ways to lower their weight,\n\t\t\t\t\t\t\t\tsuch as diet and exercise.\n\t\t\t\t\t\t\t\tIndividuals who fall in this range are at increased risk for a variety of illnesses.\n\t\t\t\t\t\t\t\tYour risk of health problems becomes higher.\n\n\n");
    } else
        if(bmi>30 && bmi<34.9)
    {sleep(2);
        printf("\n\t\t\t\t\t\t\tYou are in obesity class I");
        fprintf(q,"\n\t\t\t\t\t\t\tWith this BMI you are in a physically unhealthy condition, which puts you at risk for serious illnesses such as heart disease,\n\t\t\t\t\t\t\t\tdiabetes, high blood pressure, gall bladder disease, and some cancers.\n\t\t\t\t\t\t\t\tThis holds especially true if you have a larger than recommended Waist Size.\n\t\t\t\t\t\t\t\tThese people would benefit greatly by modifying their lifestyle.\n\t\t\t\t\t\t\t\tIdeally, see your doctor and consider reducing your weight by 5-10 percent.\n\t\t\t\t\t\t\t\tSuch a weight reduction will result in considerable health improvements\n\n\n");

    } else
        if(bmi>35 && bmi<39.9)
    {sleep(2);
        printf("\n\t\t\t\t\t\t\tYou are in obesity class II");
        fprintf(q,"\n\t\t\t\t\t\t\tWith this BMI your risk of weight-related health problems and even death, is severe.\n\t\t\t\t\t\t\t\tSee your doctor and reduce your weight to a lower BMI.\n\n\n");
    }
    else
        {sleep(2);
            printf("\n\t\t\t\t\t\t\tYou are in obesity class III");
            fprintf(q,"\n\t\t\t\t\t\t\t\tWith this BMI of you have an extremely high risk of weight-related disease and premature death.\n\t\t\t\t\t\t\tIndeed, you may have already been suffering from a weight-related condition.\n\t\t\t\t\t\t\t\tFor the sake of your health it is very important to see your doctor and get specialists help for your condition.\n\n\n");
        }
fclose(q);
}
void O()
{
    printf("\t\t\t\t\t\t\t*You chose One Months' plan*\n");

}
void T()
{
    printf("\t\t\t\t\t\t\t*You chose Three Months' plan*\n");
}
void O2()
{
    printf("\t\t\t\t\t\t\t*You chose One Year plan*\n");
}
void NA()
{
    printf("\t\t\t\t\t\t\t*SORRY*This Plan Is Not Available For Now.\n\n\n");
}
void atb()
{
    printf("\n\n\n\t\t\t\t\t\t\t *ALL THE BEST* \n\t\t\t\t\t\t\tYour Ads has been started\n");
}
void gst()
{
    printf("\t\t\t\t\t\t\tA Gst of 7%% will be applied on this deal\n");
}
 void wp()
{
printf("Wrongly Pressed\n");
PlaySound(TEXT("tic-tac-toe.wav"),NULL,SND_ASYNC);
}
void ga()
{
    printf("Go Ahead\n");
PlaySound(TEXT("Go Ahead.wav"),NULL,SND_ASYNC);
}
void sup()
{
    PlaySound(TEXT("Sup.wav"),NULL,SND_ASYNC);
}
void cr()
{
    PlaySound(TEXT("CR.wav"),NULL,SND_ASYNC);
}
void hab()
{
    PlaySound(TEXT("Hab.wav"),NULL,SND_ASYNC);
}
void enD()
{
    PlaySound(TEXT("TheEnd.wav"),NULL,SND_ASYNC);
}
void mag()
{
    PlaySound(TEXT("Mag.wav"),NULL,SND_ASYNC);
}
void printRandoms(int lower, int upper,
                            int count)

{
   int user=0,i,cpu=0;

    for (i = 0; i < count; i++)
        {
        int num = (rand() %
        (upper - lower + 1)) + lower;
        char ch;

      printf("\n\t\t\t\t\t\t\tEnter R or r for Rock\n\t\t\t\t\t\t\tEnter P or p for paper\n\t\t\t\t\t\t\tEnter S or s for scissors\n\n");
        scanf(" %c",&ch);
        if(num==1&&(ch=='r'||ch=='R'))
           {

            printf("Drake - Rock\n");
            printf("YOU - Rock\n");
            printf("Draw\n");
            cpu++;
            user++;

           }
        else if(num==1&&(ch=='P'||ch=='p'))
        {
            printf("Jordan - Rock\n");
            printf("YOU-Paper\n");
            printf("You WON!!\n");
            user++;

        break;
        }
        else if(num==1&&(ch=='S'||ch=='s'))
        {
            printf("Nathan - Rock\n");
            printf("YOU- Scissors\n");

            printf("You LOST. Better luck next time!!\n");
            cpu++;

        break;
        }
        else if(num==2&&(ch=='p'||ch=='P'))
        {
            printf("Ellie -Paper\n");
            printf("Draw\n");
            cpu++;
            user++;

            continue;
        }

        else if(num==2&&(ch=='r'||ch=='R'))
        {
            printf("Aloy - Paper\n");
             printf("YOU - Rock\n");
            printf("You LOST!!\n");
            cpu++;

        break;
        }
        else if(num==2&&(ch=='S'||ch=='s'))
        {

        printf("Marcus - Paper\n");
         printf("YOU - Scissors\n");
            printf("You WON.\n");
            user++;

        break;
        }
        else if(num==3&&(ch=='s'||ch=='S'))
        {
            printf("Mahi - Scissors\n");
             printf("YOU - Scissors\n");
            printf("Draw\n");
            cpu++;
            user++;

            continue;

            }

        else if(num==3&&(ch=='r'||ch=='R'))
        {
            printf("DJ - Scissors\n");
             printf("YOU - Rock\n");
            printf("You WON!!\n");
            user++;

        break;
        }
        else if(num==3&&(ch=='P'||ch=='p'))
       {
        printf("Captain - Scissors\n");
         printf("YOU - Paper\n");
            printf("You LOST. Better luck next time!!\n");
            cpu++;
                break;
       }

    }
         if(user>cpu)
            {
                printf("\n Points\nUSER - %d\nVirtual Guy - %d\n",user,cpu);
                printf("YOU beat the virtual guy!!\n");

            }
           else if(cpu>user)
            {
                printf("\n Points\nUSER - %d\nVirtual Guy - %d\n",user,cpu);
                printf("the virtual guy BEAT YOU. Better luck next time!!\n");

           }
           else
           {
            printf("\n Points\nUSER - %d\nVirtual Guy - %d\n",user,cpu);
            printf("\nDRAW\n");
           }
}





// End of all non main functions //





void main()


{
   //Intro//

    system("color F0");
    printf("\t\t\t\t\t\t\t\t\t\t        %s\n\n",__DATE__);
    printf("\t\t\t\t\t\t\t\t\t\t        %s",__TIME__);
    sleep(1);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tWelcome");
    sleep(1);
    printf("\n\n\n\t\t\t\t\t\t\t\t<^[.|.]^> You are using the LiTA 7C4 Interface <^[.|.]^>");
    sleep(1);
    printf("\n\n\n");
    sleep(1);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tLets begin!\n\n\n\n");
    sleep(1);
    printf("\t\t\t\t\t\t\tGo on , Select one(however you can come back to select other choices too.)\n");
    sleep(2);
    MainMenu:printf("\n");
        system("color F0");
        printf("\n\t\t\t\t\t\t\t\t\t\t\tMain Menu\n\n\n\t\t\t\t\t\t\t       (1) Lifestyle and Travel\t\t\t(2) Amusement\n\n\n");


    //End of Intro//

     int aba;
    scanf("\t%d",&aba);
	switch(aba)
{


case 1:printf("\n");
    system("color F0");
    LiTmenu:printf("\t\t\t\t\t\t\t\t\t\tLifestyle and Travel\n\n\n\t(1)Flight Booking\t\t(2)Google Adsense Enumerator\t\t(3)Body Mass Index Totalizer\t\t(4)Brain Train Game\n\n\n");


int baba;
     scanf("%d",&baba);
     switch(baba)
{

    case 1:

flyaga:printf("\n\n");
    char naMM[20];
    getchar();
    printf("\t\t\t\t\t\t\tEnter your name - ");
    gets(naMM);
	opna:printf("\n\n\t\t\t\t\t\t\tPlease select\n\n\t\t\t\t\t\t\t1. Domestic\t\t2.International\n\n\n");
	int aouty;
	char ba[] = "Bangalore",ma[] = "Mangalore", mu[] = "Mumbai", ag[] = "Agra", hy[] = "Hyderabad";
	char in[] = "India", us[] = "USA", du[] = "Dubai", fr[] = "France", it[] = "Italy";
    char pick[20],dest[20];
	scanf("%d", &aouty);
	switch (aouty)
	{
	case 1: dom(naMM);
		    break;

	case 2:intl(naMM);
		   break;
    default : printf("\n\t\t\t\t\t\t\tPlease select appropriate option\n");
		          goto opna;
		          break;
	}
	sleep(2);
mag();
system("color F2");
printf("\n\n\t\t\t\t\t\t\tYou are now ready to fly!Want to book another \n\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\tPress 10 and go to main menu\n\t\t\t\t\t\t\tPress any other key to end the App\n");
int flyb;
scanf("%d",&flyb);
if(flyb==50)
{
    goto flyaga;
}


else
if(flyb==10)
{
    goto MainMenu;
}
else
{
    goto End;
}
    break;

    case 2:
        adaga:printf("\n");
    system("color F0");
            printf("\t\t\t\t\t\t\t<---\t WELCOME TO My Adsense \t--->\n\n\n");
  float res;
    Lift1:printf("\t\t\t\t\t\t\tChoose your online platform for your Ads: \n\t\t\t\t\t\t\t1)Google \n\t\t\t\t\t\t\t2)Facebook \n\t\t\t\t\t\t\t3)Youtube \n\t\t\t\t\t\t\t4)Instagram \n\n\n\t");
    int OpA;
    scanf("%d", &OpA);
    switch (OpA)
    {
         //Code For Google Platform//
    case 1:
        printf("\t\t\t\t\t\t\t---Thank You For Choosing Google platform For Your Ads----\n1\n");
        printf("\n\n\t\t\t\t\t\t\t--Our Target is To reach a minimum of 100 right customers everyday--\n\n");
        Lift2:printf("\n\t\t\t\t\t\t\tChoose your Plan: \n\t\t\t\t\t\t\t1)One Month :- Rs. 500 (Rs. 16.66 /day) \n\t\t\t\t\t\t\t2)Three Months :- Rs. 1400(Rs.15.55 /day) \n\t\t\t\t\t\t\t3)One Year :- Rs. 5300(14.72 /day) \n");
        int cyp;
        scanf("%d",&cyp);
        switch (cyp)
        {
        case 1:
            O();
            GoAD2022();
            res = 500 + ((500*7)/100);
            gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);

atb();
            break;

        case 2:
T();
GoAD2022();
            res = 1400 + ((1400*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        case 3:
O2();
GoAD2022();
            res = 5300 + ((5300*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        default:
NA();
goto Lift2;
            break;
        }
        break;


        //Code For Facebook Platform//
    case 2:
        printf("\n\t\t\t\t\t\t\t---Thank You For Choosing Facebook platform For Your Ads----\n1\n");
        printf("\n\n\t\t\t\t\t\t\t--Our Target is To reach a minimum of 90 right customers daily--\n\n");
       Lift3:printf("\n\t\t\t\t\t\t\tChoose your Plan: \n\t\t\t\t\t\t\t1)One Month :- Rs. 500 (Rs. 16.66 /day) \n\t\t\t\t\t\t\t2)Three Months :- Rs. 1400(Rs.15.55 /day) \n\t\t\t\t\t\t\t3)One Year :- Rs. 5300(14.72 /day) \n");
        scanf("%d",&cyp);
        switch (cyp)
        {
        case 1:
O();
GoAD2022();
            res = 500 + ((500*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        case 2:
    T();
    GoAD2022();
            res = 1400 + ((1400*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        case 3:
O2();
GoAD2022();
            res = 5300 + ((5300*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        default:
NA();
goto Lift3;
            break;
        }
        break;


        //code for Youtube Plateform//
    case 3:
        printf("\t\t\t\t\t\t\t---Thank You For Choosing Youtube platform For Your Ads----\n1\n");
        printf("\n\n\t\t\t\t\t\t\t--Our Target is To reach a minimum of 105 right customers daily--\n\n");
       Lift4: printf("\n\t\t\t\t\t\t\tChoose your Plan: \n\t\t\t\t\t\t\t1)One Month :- Rs. 500 (Rs. 16.66 /day) \n\t\t\t\t\t\t\t2)Three Months :- Rs. 1400(Rs.15.55 /day) \n\t\t\t\t\t\t\t3)One Year :- Rs. 5300(14.72 /day) \n");
        scanf("%d",&cyp);
        switch (cyp)
        {
        case 1:
O();
GoAD2022();
            res = 500 + ((500*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        case 2:

T();
GoAD2022();
            res = 1400 + ((1400*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        case 3:
O2();
GoAD2022();
            res = 5300 + ((5300*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        default:
NA();
goto Lift4;
            break;
        }
        break;


        //Code for Instagram platform//
    case 4:
        printf("\t\t\t\t\t\t\t---Thank You For Choosing Instagram platform For Your Ads----\n1\n");
        printf("\n\n\t\t\t\t\t\t\t--Our Target is To reach minimum 80 right customers daily--\n\n");
       Lift5: printf("\n\t\t\t\t\t\t\tChoose your Plan: \n\t\t\t\t\t\t\t1)One Month :- Rs. 500 (Rs. 16.66 /day) \n\t\t\t\t\t\t\t2)Three Months :- Rs. 1400(Rs.15.55 /day) \n\t\t\t\t\t\t\t3)One Year :- Rs. 5300(14.72 /day) \n");
        scanf("%d",&cyp);
        switch (cyp)
        {
        case 1:
O();
GoAD2022();
            res = 500 + ((500*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        case 2:
T();
GoAD2022();
            res = 1400 + ((1400*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
atb();
            break;

        case 3:
O2();
GoAD2022();
            res = 5300 + ((5300*7)/100);
gst();
            printf("\t\t\t\t\t\t\tYour Total bill is = %0.2f",res);
            Termfn(res);
            atb();
            break;

        default:
            NA();
            goto Lift5;
            break;
        }
        break;

    default:
            printf("\n\t\t\t\t\t\t\t*SORRY*\n\t\t\t\t\t\t\tThis Platform is not Availabe For Adsense Now\n\n");
            goto Lift1;
        break;
    }
printf("\n\n\n\t\t\t\t\t\t\tVerify all the details in the AdSense File");
sleep(2);
mag();
system("color F2");
printf("\n\n\t\t\t\t\t\t\tCongratulations!Want another platform?\n\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\tPress 10 and go to main menu\n\t\t\t\t\t\t\tPress any other key to end the App\n");
int gAe;
scanf("%d",&gAe);
if(gAe==50)
{
    goto adaga;
}


else
if(gAe==10)
{
    goto MainMenu;
}
else
{
    goto End;
}

    break;

    case 3:

bmiaga:printf("\n");
    system("color F0");
    printf("\n\n\n\t\t\t\t\t\t\tLet's see how healthy you are!");
sleep(3);
printf("\n\n\t\t\t\t\t\t\tEnter your weight(Kg)\n\n");
int luc;
float ft,cm,m,BMI,wt;
scanf("%f",&wt);
aoption:printf("\t\t\t\t\t\t\tEnter the height in \n\t\t\t\t\t\t\t>Feet(ft)       [Press 1]\n\t\t\t\t\t\t\t>Centimeter(cm) [Press 2]\n\t\t\t\t\t\t\t>Meter(m)       [Press 3]\n\n");
scanf("%d",&luc);
switch(luc)
{
case 1:
     printf("\n\t\t\t\t\t\t\t(ft)");
     scanf("%f",&ft);
     m=(ft)/3.28;
     BMI=wt/(m*m);
     printf("\n\t\t\t\t\t\t\tYour Body Mass Index is %.2f\n",BMI);
     tot(BMI);
    break;



    case 2:
     printf("\n\t\t\t\t\t\t\t(cm)");
     scanf("%f",&cm);
     m=(cm)*0.01;
     BMI=wt/(m*m);
     printf("\n\t\t\t\t\t\t\tYour Body Mass Index is %.2f\n",BMI);
     tot(BMI);
    break;


    case 3:
     printf("\n(m)");
     scanf("%f",&m);
     BMI=wt/(m*m);
     printf("\n\t\t\t\t\t\t\tYour Body Mass Index is  %.2f\n",BMI);
     tot(BMI);
    break;
    default : printf("\n\t\t\t\t\t\t\tPlease select the appropriate option\n");
            goto aoption;
            break;
}
printf("\n\n\n\t\t\t\t\t\t\t\tConsider looking at the BMI chart along with your body mass index details in the BMI file\n\n\n");
sleep(2);
mag();
system("color F2");
printf("\n\n\t\t\t\t\t\t\tWant to check your BMI again?\n\n\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\tPress 10 and go to main menu\n\t\t\t\t\t\t\tPress any other key to end the App\n");
int share;
scanf("%d",&share);
if(share==50)
{
    goto bmiaga;
}


else
if(share==10)
{
    goto MainMenu;
}
else
{
    goto End;
}

    break;
    case 4:
        stag:printf("\n");
    system("color F0");
            printf("\n\t\t\t\t\t\t\t\t7\t5\t4\n\t\t\t\t\t\t\t\t1\t9\t2\n\t\t\t\t\t\t\t\t6\t8\t3\n");
int Ksu;
f4our:scanf("%d",&Ksu);
if(Ksu == 4)
{
    ga();
    s6ix:scanf("\n%d",&Ksu);
}
    else
 {
wp();
goto f4our;
 }
    if(Ksu == 6)
    {
        ga();
       t3hree: scanf("\n%d",&Ksu);
    }
        else
        {

            wp();
            goto s6ix;
        }
        if(Ksu == 3)
        {
            ga();
            n9ine : scanf("\n%d",&Ksu);
        }
        else
        {
            wp();
            goto t3hree;
        }
          if(Ksu == 9)
            {
                ga();
                e8ight: scanf("\n%d",&Ksu);
            }
            else
            {

                wp();
                goto n9ine;
            }
                 if(Ksu == 8)
                 {
                     ga();
                     o1ne:scanf("\n%d",&Ksu);
                 }
                 else
                     {

                         wp();
                         goto e8ight;
                     }
                     if(Ksu == 1)
                     {
                         ga();
                         s7even :scanf("\n%d",&Ksu);
                     }
                     else
                        {

                            wp();
                            goto o1ne;
                        }
                         if(Ksu == 7)
                         {
                             ga();
                               t2wo:scanf("\n%d",&Ksu);
                         }
                         else
                            {
                                wp();
                                goto s7even;
                            }

                             if(Ksu == 2)
                             {
                                 ga();
                                f5iveee:scanf("\n%d",&Ksu);
                             }
                             else
                             {

                                 wp();
                                 goto t2wo;
                             }
                                 if(Ksu == 5)
                                 {
                                     printf("\n\t\t\t\t\t\t\tCongrats!You made it!\n");
                                    PlaySound(TEXT("YouWin.wav"),NULL,SND_ASYNC);
                                    sleep(3);
                                 }
                                 else
                                    {
                                        wp();
                                        goto f5iveee;
                                    }
                                    sleep(2);
                                    mag();
                                    system("color F2");
printf("\n\n\t\t\t\t\t\t\tWanna play again?\n\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\tPress 10 and go to main menu\n\t\t\t\t\t\t\tPress any other key to end the App\n");
int st;
scanf("%d",&st);
if(st==50)
{
    goto stag;
}


else
if(st==10)
{
    goto MainMenu;
}
else
{
    goto End;
}
    break;
   default: printf("\n\t\t\t\t\t\t\tPlease enter the appropriate option\n");
         goto LiTmenu;
         break;
}
break;

case 2:Amusemenu:printf("\n");
    system("color F0");
    printf("\t\t\t\t\t\t\t\tAmusement\n\t\t\t\t\t\t\t(1)Age Guesser\t\t(2)Rock Paper Scissors\t\t(3)Legion Music Contrivance\n\n\n");
 int dwsr;
	    scanf("%d",&dwsr);

 switch(dwsr)


{
 case 1:
 wEe:printf("\n");
    system("color F0");
     printf("\t\t\t\t\t\t\t\tHey!");
    sleep(2);
    sup();
    printf("\n\n\t\t\t\t\t\t\t\tWE WILL GUESS YOUR AGE!!!");
    sleep(3);
    printf("\n\n\t\t\t\t\t\t\t\tPress 5 if you are ready!\n\t\t");
    int nr,air,qim,cen;
    scanf("%d",&nr);
if(nr==5)
{
    printf("\n\t\t\t\t\t\t\t\tEnter a non zero single digit from your phone number.\n\t\t");

    scanf("%d",&qim);
}
    air=(100*qim)+250;
    printf("\n\t\t\t\t\t\t\t\tIf you already had your birthday in this year press Y if not press N.\n\t\t");
    char bon;
   aga: scanf("\t%c",&bon);

    if((bon=='Y')||(bon=='y'))
    {
        cr();
    printf("\n\t\t\t\t\t\t\t\tSubtract your year of birth (WITHOUT REVEALING IT) from this MagicaL number -\n\n\t\t\t\t\t\t\t %d",air+1772);
    sleep(6);
    printf("\n\n\t\t\t\t\t\t\t(USE A CALCULATOR IF NECESSARY)\n\n\t(KEEP THE DIFFERENCE IN YOUR MIND).\n");
    }
    else
    {
    if(bon=='N'||(bon=='n'))
    {    cr();
    printf("\n\t\t\t\t\t\t\t\tSubtract your year of birth (WITHOUT REVEALING IT) from this MagicaL number -\n\n\t\t\t\t\t\t %d",air+1771);
    sleep(6);
    printf("\n\n\t\t\t\t\t\t\t\t(USE A CALCULATOR IF NECESSARY)\n\n\t\t\t\t\t\t\t\t(KEEP THE DIFFERENCE IN YOUR MIND).\n");
    }

   else
    {
    printf("\t\t\t\t\t\t\t\tPress either Y or N\n\n\t\t");
    goto aga;
    }
    }

printf("\n\n\t\t\t\t\t\t\t\tPress 5 if you are done with the subtraction.\n\n\t\t");
scanf("%d",&cen);
if(cen==5)
{
printf("\n\n\t\t\t\t\t\t\t\tYou have got a Three Digit Number Right?");
sleep(1);
printf("\n\n\t\t\t\t\t\t\t\tThe number in hundreds place is the number you just entered.");
sleep(1);
printf("\n\n\t\t\t\t\t\t\t\tTHE OTHER TWO NUMBERS ARE YOUR CURRENT AGE!\n");
printf("\n\t\t\t\t\t\t\t\tPress 5 if it is correct\n\n");
int prfv;
scanf("%d",&prfv);
if(prfv==5)
{
    alban: hab();
    printf("\n\t\t\t\t\t\t\t\tYes!!! We guessed your age!!!\n");
}
else
{
  goto alban;
}
}
sleep(20);
mag();
system("color F2");
printf("\n\n\t\t\t\t\t\t\tWanna try again?\n\t\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\t\tPress 10 and go to main menu\n\t\t\t\t\t\t\t\tPress any other key to end the App\n\n");
int ague;
scanf("%d",&ague);
if(ague==50)
{
    goto wEe;
}


else
if(ague==10)
{
    goto MainMenu;
}
else
{
    goto End;
}
break;

case 2:
RPs:printf("\n");
    system("color F0");
printf("\n\n\t\t\t\t\t\t\tCome on! Let's play the old school LEGENDARY game\n");
    int lower =1, upper =3, count = 1,korlo;
    srand(time(0));
    sleep(2);
    gjmerz:printf("\n\n\n\t\t\t\t\t\t\tHow many set of rounds do you want to play(3 or 5 or 7)?\n\n");
    scanf("%d",&korlo);
    if((korlo==3)||(korlo==5)||(korlo==7))
    {
for(int j=1 ;j<=korlo;j++)
{
    printRandoms(lower, upper, count);
}
    }
    else
    {
        printf("\t\t\t\t\t\t\tPlease enter either 3 or 5 or 7");
        goto gjmerz;
    }
sleep(2);
mag();
system("color F2");
printf("\n\n\t\t\t\t\t\t\tWanna play again?\n\t\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\t\tPress 10 and go to main menu\n\t\t\t\t\t\t\t\tPress any other key to end the App\n");
int rpS;
scanf("%d",&rpS);
if(rpS==50)
{
    goto RPs;
}


else
if(rpS==10)
{
    goto MainMenu;
}
else
{
    goto End;
}


break;
        case 3:


contrivance2:printf("\n");
    system("color F0");
    printf("\n\n\t\t\t\t\t\t\tEver heard about musical instuments being played in a C program???\n\n");
    sleep(3);
printf("\n\t\t\t\t\t\t\tYou are going to play them NOW!!!\n\n");
sleep(2);
printf("\n\t\t\t\t\t\t\tSeems harder, but becomes easy at it goes...!\n\n");
    sleep(2);
  printf("\n\n\t\t\t\t\t\t\tGo ahead, select -\n\n");
printf("\n\t\t\t\t\t\t\t(1)SONG__1\t\t(2)SONG__2\t\t(3)ThE__ViraL\n\n");
    int abrack;
    scanf("%d",&abrack);
    switch(abrack)
    {
    case 1:printf("\n");
    system("color F0");
        printf("\n\t\t\t\t\t\t\tRule->Type the exact numbers that appear and press Enter instantly\n\n");
           sleep(3);
           printf("\n\t\t\t\t\t\t\tHere you go\n\n");
           sleep(2);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t233\n");
    int K21erm;
four:scanf("%d",&K21erm);
if(K21erm == 233)
{
    printf("\t\t\t\t\t\t\t\t\t\t\t323\n");
 PlaySound(TEXT("piano2.wav"),NULL,SND_ASYNC);
 sleep(2);
    six6:scanf("\n%d",&K21erm);
}
    else
 {
goto four;
 }
    if(K21erm == 323)
    { printf("\t\t\t\t\t\t\t\t\t\t\t223\n");
        PlaySound(TEXT("piano3.wav"),NULL,SND_ASYNC);
    sleep(2);
       three33: scanf("\n%d",&K21erm);
    }
        else
        {

            goto six6;
        }
        if(K21erm == 223)
        {
            printf("\t\t\t\t\t\t\t\t\t\t\t232\n");
 PlaySound(TEXT("piano4.wav"),NULL,SND_ASYNC);
 sleep(2);
            nine9 : scanf("\n%d",&K21erm);
        }
        else
        {

            goto three33;
        }
          if(K21erm== 232)
            {
         printf("\t\t\t\t\t\t\t\t\t\t\t223\n");
PlaySound(TEXT("piano5.wav"),NULL,SND_ASYNC);
sleep(2);
                eighte8: scanf("\n%d",&K21erm);
            }
            else
            {


                goto nine9;
            }
                 if(K21erm == 223)
                 {
                    printf("\t\t\t\t\t\t\t\t\t\t\t333\n");
 PlaySound(TEXT("piano6.wav"),NULL,SND_ASYNC);
 sleep(2);
                     oneera1:scanf("\n%d",&K21erm);
                 }
                 else
                     {

                         goto eighte8;
                     }
                     if(K21erm == 333)
                     {
                       printf("\t\t\t\t\t\t\t\t\t\t\t233\n");
   PlaySound(TEXT("piano7.wav"),NULL,SND_ASYNC);
   sleep(2);
                         seven77 :scanf("\n%d",&K21erm);
                     }
                     else
                        {


                            goto oneera1;
                        }
                         if(K21erm== 233)
                         {
                             printf("\t\t\t\t\t\t\t\t\t\t\t222\n");
   PlaySound(TEXT("piano8.wav"),NULL,SND_ASYNC);
   sleep(2);
                               two2:scanf("\n%d",&K21erm);
                         }
                         else
                            {

                                goto seven77;
                            }

                             if(K21erm== 222)
                             {
                                printf("\t\t\t\t\t\t\t\t\t\t\tLevel Up!\n\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t47744\n");
PlaySound(TEXT("piano9.wav"),NULL,SND_ASYNC);
sleep(1);
                                fiveeeit:scanf("\n%d",&K21erm);
                             }
                             else
                             {


                                 goto two2;
                             }
                                 if(K21erm == 47744)
                                 {

                                     printf("\t\t\t\t\t\t\t\t\t\t\t74747\n");
                                     PlaySound(TEXT("piano10.wav"),NULL,SND_ASYNC);
                                     sleep(3);
                                     oq20:scanf("\n%d",&K21erm);

                                 }
                                 else
                                    {

                                        goto fiveeeit;
                                    }
                                    if(K21erm == 74747)
                                    {

                                      printf("\t\t\t\t\t\t\t\t\t\t\t44744\n");
                                     PlaySound(TEXT("piano11.wav"),NULL,SND_ASYNC);
                                     sleep(3);
                                     oq21:scanf("\n%d",&K21erm);
                                    }
                                    else
                                        {
                                            goto oq20;
                                        }



                                    if(K21erm == 44744)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t47747\n");
                                     PlaySound(TEXT("piano12.wav"),NULL,SND_ASYNC);
                                     sleep(3);
                                     oq22:scanf("\n%d",&K21erm);
                                    }
                                    else
                                    {
                                        goto oq21;
                                    }
                                     if(K21erm==47747)
                                    {

                                     printf("\t\t\t\t\t\t\t\t\t\t\t74774\n");
                                     PlaySound(TEXT("piano13.wav"),NULL,SND_ASYNC);
                                     sleep(3);
                                     oq23:scanf("\n%d",&K21erm);
                                    }
                                    else
                                    {
                                        goto oq22;
                                    }

                                     if(K21erm==74774)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\tLevel Up!\n\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t9889898\n");
                                     PlaySound(TEXT("piano14.wav"),NULL,SND_ASYNC);
                                     sleep(3);
                                     oq24:scanf("\n%d",&K21erm);
                                    }
                                    else
                                    {
                                     goto oq23;
                                    }

                                     if(K21erm==9889898)
                                    {
                                       printf("\t\t\t\t\t\t\t\t\t\t\t8988899\n");
                                     PlaySound(TEXT("piano16.wav"),NULL,SND_ASYNC);
                                     sleep(4);
                                     oq25:scanf("\n%d",&K21erm);
                                    }
                                    else
                                    {
                                        goto oq24;
                                    }

                                     if(K21erm==8988899)
                                    {
                                        printf("\n\t\tYo!You made it!");
                                     PlaySound(TEXT("piano17.wav"),NULL,SND_ASYNC);
                                     sleep(4);
                                     PlaySound(TEXT("rora.wav"),NULL,SND_ASYNC);
                                     sleep(8);
                                    }
                                    else
                                    {
                                        goto oq25;
                                    }

mag();
system("color F2");
printf("\n\n\t\t\t\t\t\t\tEnjoyed?! Wanna type again?\n\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\tPress 10 to go to the main menu\n\t\t\t\t\t\t\tPress any other key to end the App\n\n");
        int ag98gue45;
scanf("%d",&ag98gue45);
if(ag98gue45==50)
{
    goto contrivance2;
}


else
if(ag98gue45==10)
{
    goto MainMenu;
}
else
{
    goto End;
}

        break;

    case 2:printf("\n");
    system("color F0");
       printf("\n\t\t\t\t\t\t\tRule->Type the exact numbers that appear and press Enter instantly\n\n");
           sleep(3);
           printf("\n\n\t\t\t\t\t\t\tHere you go\n\n");
           sleep(2);
           printf("\n\t\t\t\t\t\t\t\t\t\t\t112\n");
    int K1erm;
fourt:scanf("%d",&K1erm);
if(K1erm == 112)
{printf("\t\t\t\t\t\t\t\t\t\t\t212\n");
 PlaySound(TEXT("elpi1.wav"),NULL,SND_ASYNC);
 sleep(2);
    six:scanf("\n%d",&K1erm);
}
    else
 {
goto fourt;
 }
    if(K1erm == 212)
    { printf("\t\t\t\t\t\t\t\t\t\t\t111\n");
        PlaySound(TEXT("elpi2.wav"),NULL,SND_ASYNC);
    sleep(2);
       three: scanf("\n%d",&K1erm);
    }
        else
        {

            goto six;
        }
        if(K1erm == 111)
        {
            printf("\t\t\t\t\t\t\t\t\t\t\t122\n");
 PlaySound(TEXT("elpi3.wav"),NULL,SND_ASYNC);
 sleep(2);
            nine : scanf("\n%d",&K1erm);
        }
        else
        {

            goto three;
        }
          if(K1erm== 122)
            {
         printf("\t\t\t\t\t\t\t\t\t\t\t121\n");
PlaySound(TEXT("elpi4.wav"),NULL,SND_ASYNC);
sleep(2);
                eight: scanf("\n%d",&K1erm);
            }
            else
            {


                goto nine;
            }
                 if(K1erm == 121)
                 {
                    printf("\t\t\t\t\t\t\t\t\t\t\t222\n");
 PlaySound(TEXT("elpi5.wav"),NULL,SND_ASYNC);
 sleep(2);
                     one:scanf("\n%d",&K1erm);
                 }
                 else
                     {

                         goto eight;
                     }
                     if(K1erm == 222)
                     {
                       printf("\t\t\t\t\t\t\t\t\t\t\t212\n");
   PlaySound(TEXT("elpi6.wav"),NULL,SND_ASYNC);
   sleep(3);
                         seven :scanf("\n%d",&K1erm);
                     }
                     else
                        {


                            goto one;
                        }
                         if(K1erm== 212)
                         {
                             printf("\t\t\t\t\t\t\t\t\t\t\t122\n");
   PlaySound(TEXT("elpi7.wav"),NULL,SND_ASYNC);
   sleep(3);
                               two:scanf("\n%d",&K1erm);
                         }
                         else
                            {

                                goto seven;
                            }

                             if(K1erm== 122)
                             {
                                printf("\t\t\t\t\t\t\t\t\t\t\t112\n");
PlaySound(TEXT("elpi8.wav"),NULL,SND_ASYNC);
sleep(2);
                                fiveee:scanf("\n%d",&K1erm);
                             }
                             else
                             {


                                 goto two;
                             }
                                 if(K1erm == 112)
                                 {
                                     printf("\t\t\t\t\t\t\t\t\t\t\tLevel Up!\n\n");
                                     printf("\t\t\t\t\t\t\t\t\t\t\t44545\n");
                                     PlaySound(TEXT("elpi9.wav"),NULL,SND_ASYNC);
                                     sleep(2);
                                     o20:scanf("\n%d",&K1erm);

                                 }
                                 else
                                    {

                                        goto fiveee;
                                    }
                                    if(K1erm == 44545)
                                    {

                                      printf("\t\t\t\t\t\t\t\t\t\t\t54554\n");
                                     PlaySound(TEXT("hdl1.wav"),NULL,SND_ASYNC);
                                     sleep(3);
                                     o21:scanf("\n%d",&K1erm);
                                    }
                                    else
                                        {
                                            goto o20;
                                        }



                                    if(K1erm == 54554)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t55445\n");
                                     PlaySound(TEXT("hdl2.wav"),NULL,SND_ASYNC);
                                     sleep(3);
                                     o22:scanf("\n%d",&K1erm);
                                    }
                                    else
                                    {
                                        goto o21;
                                    }
                                     if(K1erm==55445)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\tLevel Up!\n\n");
                                     printf("\t\t\t\t\t\t\t\t\t\t\t7887878\n");
                                     PlaySound(TEXT("hdl3.wav"),NULL,SND_ASYNC);
                                     sleep(4);
                                     o23:scanf("\n%d",&K1erm);
                                    }
                                    else
                                    {
                                        goto o22;
                                    }

                                     if(K1erm==7887878)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t8787887\n");
                                     PlaySound(TEXT("shra1.wav"),NULL,SND_ASYNC);
                                     sleep(4);
                                     o24:scanf("\n%d",&K1erm);
                                    }
                                    else
                                    {
                                     goto o23;
                                    }

                                     if(K1erm==8787887)
                                    {
                                       printf("\t\t\t\t\t\t\t\t\t\t\t7778788\n");
                                     PlaySound(TEXT("shra2.wav"),NULL,SND_ASYNC);
                                     sleep(4);
                                     o25:scanf("\n%d",&K1erm);
                                    }
                                    else
                                    {
                                        goto o24;
                                    }

                                     if(K1erm==7778788)
                                    {
                                     PlaySound(TEXT("shra3.wav"),NULL,SND_ASYNC);
                                     sleep(2);
                                     printf("\n\t\tYo!You made it!");
                                     PlaySound(TEXT("Olke.wav"),NULL,SND_ASYNC);
                                     sleep(10);
                                    }
                                    else
                                    {
                                        goto o25;
                                    }

mag();
system("color F2");
        printf("\n\n\t\t\t\t\t\t\tEnjoyed?! Wanna type again?\n\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\tPress 10 to go to the main menu\n\t\t\t\t\t\t\tPress any other key to end the App\n\n");
       int ague45809;
scanf("%d",&ague45809);
if(ague45809==50)
{
    goto contrivance2;
}


else
if(ague45809==10)
{
    goto MainMenu;
}
else
{
    goto End;
}


        break;



case 3: printf("\n");
    system("color F0");
    printf("\n\t\t\t\t\t\t\tRule->Type the exact numbers that appear and press Enter instantly\n\n");
           sleep(3);
           printf("\n\n\t\t\t\t\t\t\tHere you go\n\n");
           sleep(2);
           printf("\n\t\t\t\t\t\t\t\t\t\t\t666565\n");
    int K1erm104;
a1:scanf("%d",&K1erm104);
if(K1erm104 == 666565)
{printf("\t\t\t\t\t\t\t\t\t\t\t555656\n");
 PlaySound(TEXT("vir11.wav"),NULL,SND_ASYNC);
 sleep(3);
    a2:scanf("\n%d",&K1erm104);
}
    else
 {
goto a1;
 }
    if(K1erm104 == 555656)
    { printf("\t\t\t\t\t\t\t\t\t\t\t656665\n");
        PlaySound(TEXT("vir22.wav"),NULL,SND_ASYNC);
    sleep(3);
       a3: scanf("\n%d",&K1erm104);
    }
        else
        {

            goto a2;
        }
        if(K1erm104 == 656665)
        {
            printf("\t\t\t\t\t\t\t\t\t\t\t565565\n");
 PlaySound(TEXT("vir33.wav"),NULL,SND_ASYNC);
 sleep(3);
           a4: scanf("\n%d",&K1erm104);
        }
        else
        {

            goto a3;
        }
          if(K1erm104== 565565)
            {
         printf("\t\t\t\t\t\t\t\t\t\t\t656565\n");
PlaySound(TEXT("vir44.wav"),NULL,SND_ASYNC);
sleep(4);
                a5: scanf("\n%d",&K1erm104);
            }
            else
            {


                goto a4;
            }
                 if(K1erm104 == 656565)
                 {
                    printf("\t\t\t\t\t\t\t\t\t\t\t566565\n");
 PlaySound(TEXT("vir55.wav"),NULL,SND_ASYNC);
 sleep(4);
                     a6:scanf("\n%d",&K1erm104);
                 }
                 else
                     {

                         goto a5;
                     }
                     if(K1erm104 == 566565)
                     {
   PlaySound(TEXT("vir66.wav"),NULL,SND_ASYNC);
   sleep(3);
                         printf("\n\t\t\t\t\t\t\tYo!You made it!");
                         sleep(1);
                         system("color 79");
                         printf("\n\n\t\t\t\t\t\t\tYou have completed the Tour of our Project![Keep your gaze at the Screen]\n\n");
                         sleep(3);
                         system("color DC");
                         printf("\n\n\t\t\t\t\t\t\tHope this C program amused you!\n\n\n");
                         sleep(2);
                     }
                     else
                        {
                            goto a6;
                        }

mag();
system("color F2");
printf("\n\n\t\t\t\t\t\t\tEnjoyed?! Wanna type again?\n\t\t\t\t\t\t\tPress 50\n\t\t\t\t\t\t\tPress 10 to go to the main menu\n\t\t\t\t\t\t\tPress any other key to end the App\n\n");
       int ag3ue45097;
scanf("%d",&ag3ue45097);
if(ag3ue45097==50)
{
    goto contrivance2;
}
else
if(ag3ue45097==10)
{
    goto MainMenu;
}
else
{
    goto End;
}


break;
        default:printf("\nPlease Select appropriate option\n");
        goto contrivance2;
        break;

    }
        break;
    default: printf("\nPlease enter the appropriate option\n");
         goto Amusemenu;
         break;
}

mag();
system("color F2");
printf("\n\nWanna play again?\nPress 50\nPress 10 and go to main menu\nPress any other key to end the App\n\n");
int rpS;
scanf("%d",&rpS);
if(rpS==50)
{
    goto RPs;
}


else
if(rpS==10)
{
    goto MainMenu;
}
else
{
    goto End;
}
         default: printf("\nPlease enter the appropriate option\n");
         goto MainMenu;
         break;

}

End: enD();
    printf("\n\n\t\t\t\t\t\t\t\tThank you![Keep your gaze at the Screen]\n\t");
	sleep(11);
	system("color 8B");
    printf("\t\t\t\t\t\t\t\t\tCode by-\n\n");
    sleep(2);
    printf("\n\t\t\t\t\t\t\t\tAditya B. Prahalad");
    sleep(2);
    printf("\n\n\t\t\t\t\t\t\t\tChirag G. Shetty\n\n\t");
    sleep(2);
    printf("\t\t\t\t\t\t\tDivij P.\n\n\t");
    sleep(2);
    printf("\t\t\t\t\t\t\tGanesh Sharma Kithana\n\n\n");
    sleep(5);
    printf("\t\t\t\t\t\t\t\t!!!Bye Bye C programming!!!\n\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t*Enter any key to Finally Exit*\n");
    int anykeye;
    scanf("%d",&anykeye);
    if (anykeye == 5)
    {

        goto Babye;
    }
    else
        {

            Babye:printf("\n\t\t\t\t\t\t\t\tSEE YOU AGAIN!!!\n");
            system("color 9F");
        }

}
