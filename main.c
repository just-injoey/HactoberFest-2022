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
void restaurant()
{
    printf("\n\tWelcome NSR Eatery \n1.View Menu. \n2.Exit \nPlease enter your desired option.");
    scanf("%d",&R);
	if (R==1)
	{
        printf("\t                MENU                   ");
        printf("\n\t ------------------------------------");
        printf("\n\t |SNo.|     Item Name       | Price |");
        printf("\n\t ------------------------------------");
        printf("\n\t | 1. | WATER BOTTLE(1000ML) | Rs.30|");
        printf("\n\t ------------------------------------");
        printf("\n\t | 2. | TEA (1 CUP)         | Rs.20 |");
        printf("\n\t ------------------------------------");
        printf("\n\t | 3. | SNACKS(1PKT)        | Rs.30 |");
        printf("\n\t ------------------------------------");
        printf("\n\t | 4. | BREAKFAST( 1PLATE)  | Rs.100 |");
        printf("\n\t ------------------------------------");
        printf("\n\t | 5. | LUNCH( 1PLATE)      | Rs.130|");
        printf("\n\t ------------------------------------");
        printf("\n\t | 6. | DINNER( 1PLATE)     | Rs.200|");
        printf("\n\t ------------------------------------");
        printf("\n\t | 7. | DESSERT             | Rs.250 |");
        printf("\n\t ------------------------------------");
        printf("\nHow many types of items you want ? ");
        scanf("%d",&items);
        int a[items],b[items];
        for (int i = 0; i<items; ++i)
        {
            printf("Enter choice: ");
            scanf("%d",&a[i]);
            if (a[i] ==1 || a[i] == 2 || a[i]==3 || a[i]==4 || a[i]==5 || a[i]==6 || a[i]==7 )
            {
                printf("\nEnter quantity: ");
                scanf("%d",&b[i]);
            }
            else {
                printf("Invalid option!");
                Sleep(1000);
                restaurant();}
        }
        printf("\nEnter your Name: ");
        getchar();
        gets(rname);
	Add_entry=tk.Entry(win,width=50,textvariable=Add_var)
        Add_entry.grid(row=1,column=1)
        In_label=tk.Label(win,text="Enter Checkin Date",font=("Comic Sans MS",15))
        In_label.grid(row=2,column=0,sticky=tk.W)
        In_var=tk.StringVar()
        In_entry=tk.Entry(win,width=50,textvariable=In_var)
        In_entry.grid(row=2,column=1)
        Out_label=tk.Label(win,text="Enter CheckOut Date",font=("Comic Sans MS",15))
        Out_label.grid(row=3,column=0,sticky=tk.W)
        Out_var=tk.StringVar()
        Out_entry=tk.Entry(win,width=50,textvariable=Out_var)
        Out_entry.grid(row=3,column=1)
        Room_label=tk.Label(win,text="We have the following Rooms for you,Choose one:-",font=("Comic Sans MS",25),bg="black",fg="white")
        Room_label.grid(row=4,column=1,sticky=tk.W)
        printf("\nEnter your Phone Number: ");
        scanf("%d",&phn);
        printf("\n\t\t\t    EATERY BILL \n\t  Customer's name: %s \n\t  Phone number: %d",rname,phn);
        int k=0;
        printf("\n\t --------------------------------------------------------------------");
	    printf("\n\t |SNo.|     Item Name       | Price(1) |   Quantity   |    Price    |");
	    printf("\n\t --------------------------------------------------------------------");
        for (int i=0; i<items; ++i)
        {
            switch(a[i])
            {
                case 1: amt = amt + b[i]*15;
                        printf("\n\t | %d. | WATER BOTTLE(500Ml) |   Rs.25  |      %d      |     Rs.%d    |",k+1,b[i],(b[i]*15));
	                    printf("\n\t -------------------------------------------------------------------");
                        k=k+1;
                        break;
                case 2: amt = amt + b[j]*10;
                        printf("\n\t | %d. | TEA (1 CUP)         |   Rs.20  |      %d      |     Rs.%d    |",k+1,b[i],(b[i]*10));
	                    printf("\n\t -------------------------------------------------------------------");
                        k=k+1;
                        break;
                case 3: amt = amt + b[i]*30;
                       	printf("\n\t | %d. | SNACKS(1PKT)        |   Rs.30  |      %d      |     Rs.%d    |",k+1,b[i],(b[i]*20));
                    	printf("\n\t -------------------------------------------------------------------");
                        k=k+1;
                        break;
                case 4: amt = amt + b[j]*90;
                    	printf("\n\t | %d. | BREAKFAST( 1PLATE)  |   Rs.100  |      %d      |     Rs.%d    |",k+1,b[i],(b[i]*90));
	                    printf("\n\t -------------------------------------------------------------------");
                        k=k+1;
                        break;
                case 5: amt = amt + b[i]*150;
                        printf("\n\t | %d. | LUNCH( 1PLATE)      |   Rs.150 |      %d      |     Rs.%d    |",k+1,b[i],(b[i]*120));
	                    printf("\n\t ------------------------------------------------------------------");
                        k=k+1;
                        break;
                case 6: amt = amt + b[j]*170;
                       	printf("\n\t | %d. | DINNER( 1PLATE)     |   Rs.200 |      %d      |     Rs.%d    |",k+1,b[i],(b[i]*150));
                    	printf("\n\t -------------------------------------------------------------------");
                        k=k+1;
                        break;
                case 7: amt = amt + b[i]*60;
                       	printf("\n\t | %d. | DESSERT             |   Rs.250  |      %d      |     Rs.%d    |",k+1,b[i],(b[i]*50));
                    	printf("\n\t -------------------------------------------------------------------");
                        k=k+1;
                        break;
                default: printf("\nInvalid option!");
            }
        }
        printf("\n\t |Total Amount                                       |Rs.%d/-|",amt);
        printf("\nPlease choose your payment method: \n1.Online payment. \n2.Cash.\n");
        scanf("%d",&pay);
        if (pay==1)
            Onlinepayment();
        else if(pay==2){
            printf("\nPlease submit Rs.%d/- cash at counter no.3 and proceed to Table No. 25 \nThank You.",amt);
            Sleep(1000);
            main();}
        else {
            printf("\nInvalid option!");
            Sleep(1000);
            restaurant();}
	}
    else if (R ==2) {
        printf("\nThank You for visiting us.");
        Sleep(1000);
        main(); }
    else {
        printf("\nInvalid Option!");
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
