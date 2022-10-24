//starting of program
#include <stdio.h>
#include <windows.h>
// added stdio.h and windows.h header files stdio.h for i/o operations and windows.h for some functions involving arithmetic. functions
void getaroom();
void restaurant();
void checkout();
void Onlinepayment();
//declared functions in three lines
int ser,age,date,room,food,amt=0,phn,pay,items,R,paytm,confirm,printexit,ppin,passcd,passwd=8937,comp,billpaid,croom;
char name[50],city[50],rname[50],complaints[2000];
int main() //starting of main funnction
{
    printf("\n\n\t   WELCOME TO HOTEL NSR\nWe have the following services for you:\n\n   1.GET A ROOM.\n\n   2.MOVE TO RESTAURANT .\n\n   3.CHECKOUT CUSTOMER(only for staff).\n\nPlease enter your preferred choice: ");
    scanf("%d",&ser); //taking ser input from user
    switch (ser)
    {
        case 1: getaroom();
                break;
        case 2: restaurant();
                break;
        case 3: checkout();
                break;
        default: printf("Invalid Option.");
    }
}
void getaroom() //definition of getaroom() function
{
  printf("\nEnter your name: ");
  getchar();
  gets(name);
  printf("\nEnter your age: ");
  scanf("%d",&age);
  printf("\nEnter your city: ");
  getchar();
  gets(city);
  printf("\nEnter checkin date: ");
  scanf("%d",&date);
  printf("\nWe have the following rooms for you: \n\n   1. SINGLE AC      @Rs 6000/- per day. \n\n   2. SINGLE Non-AC  @Rs.5000/- per day. \n\n   3. DOUBLE AC      @Rs11000/- per day. \n\n   4. DOUBLE Non-AC  @Rs 9000/- per day. \n\nPlease enter your choice.");
  scanf("%d",&room);
  switch(room)
    {
        case 1: printf("\nYOUR ROOM NUMBER is 101. \nDo you want a subscription to food services (@Rs1000/-per day per person)? \n1.Yes. \n2.No. \nPlease enter your choice.");
                 scanf("%d",&food);
                if (food == 1){
                    printf("\nFood charges will be added to your bill. \nROOM NUMBER - 101. \nThank you.");
                    Sleep(2000);
                    main();}
                else if (food == 2){
                    printf("\nROOM NUMBER - 101. \nThank you for booking a room with us.");
                    Sleep(2000);
                    main();}
                else{
                    printf("\nInvalid option!");
                    Sleep(2000);
                    main();}
                break;

        case 2: printf("\nYOUR ROOM NUMBER is 201. \nDo you want a subscription to food services (@Rs1000/-per day per person)? \n1.Yes. \n2.No. \nPlease enter your choice.");
                scanf("%d",&food);
                if (food == 1){
                    printf("\nFood charges will be added to your bill. \nROOM NUMBER - 201. \nThank you.");
                    Sleep(2000);
                    main();}
                else if (food == 2){
                    printf("\nROOM NUMBER - 201. \nThank you for booking a room with us.");
                    Sleep(2000);
                    main();}
                else{
                    printf("\nInvalid option!");
                    Sleep(2000);
                    main();}
                break;

        case 3: printf("\nYOUR ROOM NUMBER is 301. \nDo you want a subscription to food services (@Rs1000/-per day per person)? \n1.Yes. \n2.No. \nPlease enter your choice.");
                scanf("%d",&food);
                if (food == 1){
                    printf("\nFood charges will be added to your bill.\nROOM NUMBER - 301. \nThank you.");
                    Sleep(2000);
                    main();}
                else if (food == 2){
                    printf("\nROOM NUMBER - 301. \nThank you for booking a room with us.");
                    Sleep(2000);
                    main();}
                else{
                    printf("\nInvalid option!");
                    Sleep(2000);
                    main();}
                break;

        case 4: printf("\nYOUR ROOM NUMBER is 401. \nDo you want a subscription to food services (@Rs1000/-per day per person)? \n1.Yes. \n2.No. \nPlease enter your choice.");
                scanf("%d",&food);
                if (food == 1){
                    printf("\nFood charges will be added to your bill.\nROOM NUMBER - 401. \nThank you.");
                    Sleep(2000);
                    main();}
                else if (food == 2){
                    printf("\nROOM NUMBER - 401. \nThank you for booking a room with us.");
                    Sleep(2000);
                    main();}
                else{
                    printf("\nInvalid option!");
                    Sleep(2000);
                    main();}
                break;

        default: printf("\nInvalid option!");
    }
}


void Onlinepayment()
{
    printf("\n\t Payemnts-Powered by RazorPay");
    printf("\nPlease enter your Paytm Id:  ");
    scanf("%d",&paytm);
    printf("\n\n\t Payments-Powered by RazorPay \nPlease verify your details: \nName: %s \nPaytm Id: %d \nPayment Towards: NSR Eatery \nAmount: Rs.%d \n\t 1.Confirm. \n\t 2.Cancel.\n",rname,paytm,amt);
    scanf("%d",&confirm);
    switch(confirm)
    {
        case 1: printf("\nPlease enter your pin: ");
                scanf("%d",&ppin);
                printf("\n\n\t Payments-Powered by RazorPay\n\nPayment of Rs.%d towards NSR Eatery Successfull.  \nTransaction number: IH85496JK \nThank You for using our services. \n\t 1.Print. \n\t 2.Exit.\n",amt);
                scanf("%d",&printexit);
                if ( printexit == 1){
                    printf("\nPrinting... \nPlease proceed to table no.25.\nThank You.");
                    Sleep(1500);
                    main();}
                else if (printexit==2){
                    printf("\nPlease proceed to table no. 25\nThank You.");
                    Sleep(1500);
                    main();}
                else{
                    printf("\nInvalid Option!");
                    Sleep(1000);
                    main();}
                break;
        case 2: printf("\nTransaction Cancelled by User!");
                Sleep(1000);
                restaurant();
                break;
        default: printf("\nInvalid Option!");
    }
}

 void checkout()
 {
     printf("\n\t CUSTOMER CHECKOUT WINDOW");
     printf("\nEnter staff passcode: ");
	scanf("%d",&passcd);
     if (passcd==passwd)
     {
         printf("\nAuthentication Granted");
         printf("\n\nEnter Room Number: ");
         scanf("%d",&croom);

         printf("\nBill has been paid ? \n   1.Yes. \n   2.No.\n");
         scanf("%d",&billpaid);
         switch(billpaid)
         {
         case 1: printf("\nAny complaints or suggestions from customer ? \n   1.Yes. \n   2.No.\n");
                scanf("%d",&comp);
                switch(comp)
                {
                case 1: printf("\nEnter suggestion or complaint: ");
                        getchar();
                        gets(complaints);
                        printf("\nThank you for the remark. \nThe Customer has been checked out and room no.%d is empty now. \nThank You.",croom);
                        Sleep(1000);
			main();
                        break;
			
                case 2: printf("\nThank you for the remark. \nThe Customer has been checked out and room no.%d is empty now. \nThank You.",croom);
                        Sleep(1000);
			main();
                        break;

                default: printf("\nInvalid option!");
			main();
                }
                break;
        case 2: printf("\nPlease pay the bill.");
                Sleep(1000);
		main();
                break;
		
        default: printf("\nInvalid option!");
		
		main();
         }
    }
    else
    {
        printf("\nAccess denied!\n\n");
        Sleep(1000);
	main();
    }
 }
