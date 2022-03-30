#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int i,j,k,x;
int seat[2][3][3];
int booked;

void newuser();
void existinguser();
void details();
void economyalotment();
void reservation();
void businessalotment();


struct reservation{
    int passengers;
    int flightno;
    char fromlocation[100];
    char tolocation[100];
    int dep_time;
    int arr_time;
};

struct ID{
char fname[20];
char lname[20];
char passport[20];
char gender;
char password[20];
struct reservation R;
}passenger,login,file;

int main()
{
        
    int input,i;
    printf("\t**Welcome to JZM Airways**");
  for(i=0;;i++)
      {
    printf("\n\nPlease Enter  From the Following Options\n1:Existing User\n2:New User\n");
    scanf("%d",&input);
    if((input==1)||(input==2))
        {
            break;
        }
        system("cls");
        printf("Wrong Input Try Again With Valid Option");
}
    if(input==2)
    {newuser();}
    if(input==1)
    {existinguser();}
    
}
    



void newuser()
{    system("cls");
printf("\t\t\t\t\t**Welcome to JZM Airways**\n\n");
    
//    struct ID *ptr_passenger;
//    ptr_passenger=&passenger;
    
       printf("\nKindly Enter your Login Details:");
    printf("\nFirst Name:");
    scanf("%s",passenger.fname);
    printf("Last Name:");
    fflush(stdin);
    scanf("%s",passenger.lname);
    printf("4 digit Passport Number:");
    scanf("%s",&passenger.passport);
    printf("ID PassWord:");
    scanf("%s",&passenger.password);
       FILE *outfile;
    // open file for writing
    outfile=fopen("LoginData.txt","a");
    fprintf(outfile,"%s\t%s\t%s\t%s\n",passenger.fname,passenger.lname,passenger.passport,passenger.password);
    if(fwrite != 0)
        printf("User details updated successfully!\n");
    else
        printf("Error updating user details!\n");

    fclose (outfile);

    system("cls");
    printf("\n\t%s,Your Account has been succefully made!!!!.",passenger.fname);
   
    printf("\n\nPlease Enter from the Following Options\n1.Reserve a Seat\n2.View your flight Details\n3.Exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case(1):
        {reservation();
            break;}
            case(2):
        {details();
            break;}
        case(3):
        {break;
        }
        default:printf("Invalid Input!\n");
    }
}
void existinguser()
{    system("cls");
    printf("\t**JZM Airways LOGIN**\n\n");
    int x;
       printf("\nKindly Enter your Login Details:");
    printf("\nFirst Name:");
    scanf("%s",&login.fname);
       fflush(stdin);
    printf("Last Name:");
    gets(login.lname);
    for(i=0;;i++)
    {
    printf("4 digit Passport Number:");
    scanf("%s",&login.passport);
    if(strlen(login.passport)==4)
        {break;
        }
        system("cls");
        printf("\t**JZM Airways LOGIN**\n\n");
        printf("Validation Failed Must Be 4 Digit\n");
    }
    printf("ID PassWord:");
    scanf("%s",&login.password);
       FILE *outfile;
    // open file for Reading
    outfile=fopen("LoginData.txt","r");
    if (outfile == NULL)
    {
        printf("\nError opening file\n");
    }
    fscanf(outfile,"%s %s %s %s",file.fname,file.lname,file.passport,file.password);
      if(strcmp(file.fname,login.fname)==0)
          {
              if((file.password,login.password)==0)
                  {
                      break;
                }
            else
                {printf("Wrong Login");
                }
        }
      getch();
    // close file
    fclose (outfile);
    system("cls");
    printf("\n\tWelcome Home %s %s!",login.fname,login.lname);
    printf("\n\nPlease Enter from the Following Options\n1.Reserve a Seat\n2.View your flight Details\n3.Exit\n");
    void (*ptr_reservation)()=&reservation;
    void (*ptr_details)()=&details;
    scanf("%d",&x);
    switch(x)
    {
        case(1):
        {    (*ptr_reservation)();
            break;}
            case(2):
        {    (*ptr_details)();
            break;}
            case(3):
            {break;
            }
            default:printf("Invalid Input!\n");
    }
}

//Functions
void reservation()
{    system("cls");
    printf("\t**JZM Airways Reservation Process**");
    struct ID id;
    int z,u,y,i,choice;
    int passcnt=0;
    
     FILE *fp;
    char ch;
    
    fp=fopen("Schedule.txt", "r");
   
    if(fp==NULL)
    {
        puts("File not found!");
    }
    
    
    printf("%c",ch);
    
    printf("\nFlight Schedule\n");
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
     
    fclose(fp);
    
    FILE *outfile;
    // open file for writing
    outfile = fopen ("reservations.txt", "w");
    if (outfile == NULL)
    {
        printf("\nError opening file\n");
    }
   
    printf("\n\nKindly Enter your Name:\n");
    scanf("%s",&id.fname);
    printf("\nKindly Enter Flight Number:\n");
    printf("LS-");
    scanf("%d",&id.R.flightno);
    printf("Departure From:\n");
    scanf("%s",&id.R.fromlocation);
    printf("Arrival to:\n");
    scanf("%s",&id.R.tolocation);
    printf("Enter Departure Timings:\n");
    scanf("%d",&id.R.dep_time);
    printf("Enter Arrival Timings:\n");
    scanf("%d",&id.R.arr_time);
    // write struct to file
    fprintf(outfile,"%s %d %s %s %d %d",id.fname,id.R.flightno,id.R.fromlocation,id.R.tolocation ,id.R.dep_time,id.R.arr_time);
    if(fwrite != 0){
    
    system("cls");
    printf("Passenger details Saved successfully!\n");}
    else
        printf("Error saving passenger details!\n");
    fclose (outfile);

printf("\n\t\t\t\t\t\t**Seat Layout**\n");
printf("\n\t\t\t\t<0>Vacant\t\t\t\t<1>Occupied\n\n");
//randomly allocating seat number
printf("\n\t\t\t\t\tYour Data For Economy Class\n");
i=1;
srand(time(NULL));
    {for(j=1;j<=3;j++)
        {for(k=1;k<=3;k++)
            {
            x=rand()%2;
            seat[i][j][k]=x;
            printf("%d\t", x);
                 }
            printf("\n");
        }
    
    }

printf("\n\t\t\t\t\tYour Data For Business Class\n");
srand(time(NULL));
i=2;
    {for(j=1;j<=3;j++)
        {for(k=1;k<=3;k++)
            {srand(time(NULL));
            x=rand()%2;
            seat[i][j][k]=x;
            printf("%d\t", x);
            }
            printf("\n");
        }
        
    }
    char preview;
    printf("To Preview Available Seats press Any Key\n");
    getch();
            system("cls");
            printf("\t\t\t\t\t *****AVAILABLE SEATS*****\n");
            available();
        
    void (*ptr_alotment[])()={economyalotment,businessalotment};
    printf("Enter the Class you would like to travel in:\n1)Economy Class 2)Buissness Class\n");
    scanf("%d",&u);
    switch(u)
    {
        case(1):    //u-1 to make array index
                (ptr_alotment[u-1]());
                break;
            case(2):
                (ptr_alotment[u-1]());
                break;
                default: printf("\nKindly choose Valid Class.");
                
            }
        
            printf("\n\n\t\t\t\t\tWhat would you like to have for food:");
        system("cls");
printf("\n1)Chicken Parmesan+Garlic Rice+Belgian Mousse Cup\n2)Mexican Grilled Chicken+Mashed Potatoes+Dark Choclate Lava\n3)Sliced Beef with Grilled mushroom+French Fries+Nutella Macchiato\n");
scanf("%d",&z);
    
switch(z)
{
    case(1):
        printf("Chicken Parmesan+Garlic Rice + Belgian Mousse Cup will be served on flight");
        break;
        case(2):
            printf("Mexican Grilled Chicken+Mashed Potatoes+Dark Choclate Lava will be served on flight");
            break;
            case(3):
                printf("Sliced Beef with Grilled mushroom+French Fries+Nutella Macchiato will be served on flight");
                break;
                default: printf("\nInvalid input!");
            }
                
                printf("\n\nYour Seat has been booked! Have a Safe flight!");
                
                
                printf("\nDo you wish to view your flight details:\n<1>Yes\n<2>No\n");
                scanf("%d",&y);
                switch(y)
                {
                        case(1):{
                        details(id);
                        break;}
                        case(2):{
                            break;
                        }
                         }
                     
                     
                 
    printf("Do you wish to add one more passenger?\n<1>Yes\n<2>No,Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case(1):{
            reservation();
            break;
        }
        case(2):{
            exit(1);
            break;
        }
    }
    
                

}
    int available()
    {
    //available Seats Class Wise
        printf("\n\nAvailable Seats for Economy Class Are:\nNormal Seats\n");
                for(j=1;j<=3;j++)
                    {
                        for(k=1;k<=2;k++)
                            {
                                if(seat[1][j][k]==0)
                                    
                                    printf("Row %d\t Column%d\n",j,k);
                            }
                    }
                    printf("\n");
                    printf("Windows Seats\n");

                for(j=1;j<=3;j++)
                    {
                            {
                                if(seat[1][j][3]==0)
                                    
                                    printf("Row %d\t Column%d\n",j,k);
                            }
                    }
                    printf("\n");

            printf("Available Seats for Business Class Are\nNormal Seats\n");
                for(j=1;j<=3;j++)
                    {
                        for(k=1;k<=2;k++)
                            {
                                if(seat[2][j][k]==0)
                                    
                                    printf("Row %d\t Column%d\n",j,k);
                            }
                    }
            printf("Window Seats\n");
            for(j=1;j<=3;j++)
                            {
                                if(seat[2][j][3]==0)
                                    
                                    printf("Row %d\t Column%d\n",j,k);
                            }
                        
return 0;
    }

    

void details(struct ID id)
{ int f,o;
    printf("\nHave you already booked your flight?\n");
    printf("<1>Yes\n<2>No\n<3>Exit\n");
    scanf("%d",&f);
    switch (f) {
        case (1):
            o=rand()%1000;
            printf("\nTicket Number:%d",o);
            printf("\nFlight NO:LS-%d\nDeparture From:%s\nArrival To:%s\nDeparts at:%d\nArrives at destination:%d\n\n",id.R.flightno,id.R.fromlocation,id.R.tolocation,id.R.dep_time,id.R.arr_time);
            break;
        case (2):
        {
            printf("\nKindly Book your flight!\n");
            reservation();
        }
        case(3):
        {
            exit(1);
        }
            
        default: printf("Invalid Input!");
            break;
    }
    }

void economyalotment()
{    int l;
    //Allotment if Economy Class Selected
        printf("\n\n\t\t\t\t\tKindly Choose from Available Economy Seats\n");
        for(i=0;;i++)
        {
            for(l=0;;l++)
                {    printf("\nEnter Row\n");
                    scanf("%d",&j);
                    printf("Enter column\n");
                    scanf("%d",&k);
                    if((j<3)&&(k<3)){
                        break;}
                    printf("Invalid Input!");
                }
            if(seat[1][j][k]==0)
                {break;
                }
                printf("Seat Already Occupied\tKindly Enter Available Seat!!\n");
        }
        seat[1][j][k]=1;//Seat Alotted
        printf("Seat Alloted At Row %d   Column %d",j,k);
        printf("\n\t\t\t\t\t***Updated Preview Of Economy Class*** \n");
        i=1;
            printf("\t\t\t\t");
            for(j=1;j<=3;j++)
                {for(k=1;k<=3;k++)
                    {
                        printf("\t%d\t",seat[i][j][k]);
                     }
                    printf("\n\n\n\t\t\t\t");
                }
                printf("\tPress Any Key To Continue.....");
                getch();
        booked++;
        
}

void businessalotment()
{    //Allotment if Business Class Selected
    printf("\t\t\t\t\tKindly Choose from Available Business Seats\n");
    for(i=0;;i++)
    {
    printf("Enter Row\n");
    scanf("%d",&j);
    printf("Enter column\n");
    scanf("%d",&k);
    if(seat[2][j][k]==0)
                {break;
                }
            printf("Invalid Input !!! Seat Already Occupied\tKindly Enter Other Available Seat\n");
        }
        seat[2][j][k]=1;
        printf("Seat Alloted At Row %d   Column %d",j,k);
        printf("\n\t\t\t\t\t***Updated Preview Of Business Class*** \n");
        i=2;
            printf("\t\t\t\t");
            for(j=1;j<=3;j++)
                {for(k=1;k<=3;k++)
                    {
                        printf("\t%d\t",seat[i][j][k]);
                     }
                    printf("\n\n\n\t\t\t\t");
                }
                printf("\tPress Any Key To Continue.....");
                getch();
        booked++;
}

