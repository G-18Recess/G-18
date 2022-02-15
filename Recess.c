#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<mysql.h>
#include<time.h>
//SQL ERROR FUNCTION
void finish_with_error(MYSQL*conn){
fprintf(stderr,"%s\n",mysql_error(conn));
mysql_close(conn);
exit(1);
}



int main(){
        system("color 6");
        int select;
        double time_taken;
//CURRENT TIME
        char arrray[100]={"6"};
        time_t start_time;
        time_t end_time;
        time_t currentTime;
        time(&currentTime);
        time_t p=ctime(&currentTime);
        printf("\r \n%s\n",p);

//other variables
int* letter;
int mark, sum;
char dummy[25];
double total;
    float entry=0;
    int result;
    float average;
     total=0;
    sum=0;
    int Choice;
    int count=1;
    int n,i,j;

    int marks( int a) {
    total = a / 28 * 100;
    printf("The percenatage mark got is %d\n", total);
}
    //Definig the letters
int A[7][4] = { {0,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,1},{1,0,0,1},{1,0,0,1},{1,0,0,1} };
    int B[7][4] = { {1,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,0} };
    int C[7][4] = { {0,1,1,1},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{0,1,1,1} };
    int D[7][4] = { {1,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,1,1,0} };
    int E[7][4] = { {1,1,1,1},{1,0,0,0},{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0},{1,1,1,1} };
    int F[7][4] = { {1,1,1,1},{1,0,0,0},{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0},{1,0,0,0} };
    int G[7][4] = { {0,1,1,1},{1,0,0,0},{1,0,0,0},{1,0,1,1},{1,0,0,1},{1,0,0,1},{0,1,1,1} };
    int H[7][4] = { {1,0,0,1},{1,0,0,1},{1,0,0,1},{1,1,1,1},{1,0,0,1},{1,0,0,1},{1,0,0,1} };
    int I[7][4] = { {1,1,1,1},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0},{1,1,1,1} };
    int J[7][4] = { {1,1,1,1},{0,0,1,0},{0,0,1,0},{0,0,1,0},{1,0,1,0},{1,0,1,0},{0,1,1,1} };
    int K[7][4] = { {1,0,0,1},{1,0,0,1},{1,0,1,0},{1,1,0,0},{1,0,1,0},{1,0,0,1},{1,0,0,1} };
    int L[7][4] = { {1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,1,1,1} };
    int M[7][4] = { {1,0,0,1},{1,1,1,1},{1,1,1,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1} };
    int N[7][4] = { {1,0,0,1},{1,1,0,1},{1,1,0,1},{1,1,1,1},{1,0,1,1},{1,0,1,1},{1,0,0,1} };
    int O[7][4] = { {0,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0} };
    int P[7][4] = { {1,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,0},{1,0,0,0},{1,0,0,0},{1,0,0,0} };
    int Q[7][4] = { {0,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,1,1},{0,1,1,1} };
    int R[7][4] = { {1,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1} };
    int S[7][4] = { {0,1,1,1},{1,0,0,0},{1,0,0,0},{0,1,1,0},{0,0,0,1},{0,0,0,1},{1,1,1,0} };
    int T[7][4] = { {1,1,1,1},{1,1,1,1},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0} };
    int U[7][4] = { {1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0} };
    int V[7][4] = { {1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0},{0,1,1,0} };
    int W[7][4] = { {1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,1,1,1},{1,1,1,1},{1,0,0,1} };
    int X[7][4] = { {1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1} };
    int Y[7][4] = { {1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0} };
    int Z[7][4] = { {1,1,1,1},{0,0,0,1},{0,0,1,0},{0,1,0,0},{1,0,0,0},{1,0,0,0},{1,1,1,1} };
    int array[7][4];
    time_t start, end, star, endt;
//DECLARATION OF MYSQL VARIABLES
MYSQL_RES *resultset;
MYSQL_RES *res;
MYSQL_ROW row;
MYSQL_RES*name;
char Fname[30], sqlquery[10];
char pass[10];
MYSQL * conn;
//database connection
  printf("\n\n\t\t\t\ \xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHARACTER ASSIGNMENT SYSTEM.\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\nEnter the usercode to login:");
  scanf("%s",dummy);

   conn = mysql_init(NULL);
   conn = mysql_real_connect(conn,"localhost","root","","recess",0,NULL,0);
   if(conn){
        system("cls");

   }
   else {
     printf("\t\t\t Please re-try again\n");
   }
   clock_t t;
   struct tm*myTime=localtime(&currentTime);
   char start_date[255]="";
   char year[20];
   itoa(myTime->tm_year+1900,year,10);
   char month[20];
   itoa(myTime->tm_mon+1,month,10);
   char day[20];
   itoa(myTime->tm_mday,day,10);
   strcat(start_date,year);
   strcat(start_date,"-");
   strcat(start_date,month);
   strcat(start_date,"-");
   strcat(start_date,day);
   printf("%s",start_date);
   //This is the way the users Login
   char query7[255]="SELECT * FROM tree WHERE Usercode=\'";
   strcat(query7,dummy);
   strcat(query7,"\'");

   if(mysql_query(conn,query7)){
    finish_with_error(conn);
   }
//Login if
  res=mysql_store_result(conn);
   if((row=mysql_fetch_row(res))>0){

    //welcome
printf("\t\t\t\tWelcome ");
char query8[255]="SELECT lastname FROM tree WHERE Usercode=\'";
strcat(query8,dummy);
strcat(query8,"\'");
if(mysql_query(conn,query8)){
    finish_with_error(conn);
}
res=mysql_store_result(conn);
if(res==NULL){
    finish_with_error(conn);
}
int num_fields=mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
    printf("%s",row[i]?row[i]:NULL);

      }
   }
       mysql_free_result(res);
      //end welcome

      //Defining the commands
         label:
        //system("cls");
    printf("\n\n\t\t\t\t\t CHARACTER ASSIGNMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n1.viewall\n2.checkstatus \n3.viewassignment () \n4.checkdates (shows if there is an assignment within a specified date range) \n5.requestactivation\n6.attempt\n\n\n\n\n ");

    char choice[20];
    char a[20]="viewall";
    char b[20]="checkstatus";
    char c[20]="viewassignment";
    char d[20]="checkdates";
    char e[20]="requestactivation";
    char f[10]="attempt";
    char g[10]="DISPLAY";
    printf("Enter choice from the menu list by typing the command as stated:");
    scanf("%s",choice);
    //viewa\ll command
    if(strcmp(a,choice)==0){
            printf("\n__________________________________________________________________\n");
        printf("\n |ASSIGNMENT_ID\t\t|END_DATE\t\t|END_TIME\n");
 printf("\n|__________________________________________________________________|\n");
   if(mysql_query(conn,"SELECT Id,Enddate,end FROM work")){
    finish_with_error(conn);
   }
   res=mysql_store_result(conn);
   if(res==NULL){
    finish_with_error(conn);
   }
   int num_fields=mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
    printf(" \t  %s\t",row[i]?row[i]:NULL);

      }

//printf("\n");
printf("\n|__________________________________________________________________|\n");
    }
   mysql_free_result(res);
   //goto label;

  printf("Enter 1 to go to menu and other key to exit");
   scanf("%d",&select);
   if (select==1)
        {

            system("cls");
            goto label;
        }

    else {
        system("cls");
        //close();
        printf("do you wish to exit");
        }

    }

        //Check status
        else if(strcmp(b,choice)==0){
        printf("\n|USERCODE\t|ATTEMPTED\t|AVERAGE_SCORE|PERCENTAGE_MISSED|PERCENTAGE_ATTEMPTED\n");
        char rquery[255]="SELECT Usercode , attempted ,average_score, Percentage_attempted, Percentage_missed FROM tree where Usercode = \'";

    strcat(rquery,dummy);
    strcat(rquery,"\'");

   if(mysql_query(conn,rquery)){
    finish_with_error(conn);
   }
   res=mysql_store_result(conn);
   if(res==NULL){
    finish_with_error(conn);
   }
   int num_fields=mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
for(int i=0;i<num_fields;i++){
 printf(" %s\t\t",row[i]?row[i]:NULL);

      }

printf("\n");
    }
mysql_free_result(res);
        goto label;
        //END OF CHECKSTATUS
    }


    //VIEWASSIGNMENT
else if(strcmp(c,choice)==0){
        char Assign_id[255];
       printf("Enter the assignment Id:");
    scanf("%s",Assign_id);
    char myquery[255]="SELECT * FROM work WHERE Id = \'";

    strcat(myquery,Assign_id);
    strcat(myquery,"\'");
    printf("%s",myquery);
        printf("\n |ID\t |Character\t|Start_date\t|Start_Time\t|End_date\t|End_time\n");
          if(mysql_query(conn,myquery)){
    finish_with_error(conn);
   }
   res=mysql_store_result(conn);
   if(res==NULL){
    finish_with_error(conn);
   }
   int num_fields=mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
   for(int i=0;i<num_fields;i++){
     printf("|%s\t",row[i]?row[i]:NULL);

      }

    printf("\n");
    }
     mysql_free_result(res);
     goto label;

}


//Checkdates
else if(strcmp(d,choice)==0){
        char future_date[255];
       printf("ENTER FUTURE DATE IN FORMAT *YEAR-MONTH-DAY*:");
    scanf("%s",future_date);
    char query11[255]="SELECT Id,Startdate,Enddate FROM work WHERE Startdate BETWEEN \'";
    strcat(query11,start_date);
    strcat(query11,"\'");
    strcat(query11," AND \'");
    strcat(query11,future_date);
    strcat(query11,"\'");
    printf("%s",query11);
        printf("\n |ASSIGNMENT_ID\t|START_DATE\t|END_DATE\n");
          if(mysql_query(conn,query11)){
    finish_with_error(conn);
   }
   res=mysql_store_result(conn);
   if(res==NULL){
    finish_with_error(conn);
   }
   int num_fields=mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
   for(int i=0;i<num_fields;i++){
     printf("   %s\t\t",row[i]?row[i]:NULL);

      }

    printf("\n");
    }
     mysql_free_result(res);
     goto label;



     }

     else if(strcmp(e,choice)==0){
    char query[255];
    strcpy(query,"INSERT INTO requests (Usercode) VALUES(\'");
    strcat(query, dummy);
    strcat(query, "');");
    printf("%s\n",query);
          if (mysql_query(conn, query) !=0)
          {
             fprintf(stderr, "Row could not be inserted into activate table\n");
              exit(1);
          }



        //ACTIVATION REQUEST SENDING

 printf("\n\t\t\tEnter 1 to go to menu and other key to exit:");
   scanf("%d",&select);
   if (select==1)
        {

            system("cls");
            goto label;
        }

else {
        system("cls");
        //close();
        printf("You are exiting");
        }
        //REQUEST ACTIVATION
    }

        else if(strcmp(f,choice)==0){
            char mystring[300], myquery[100], ass[8], pupilname[20], stdtquery[230], reqquery[100], assid[10], idquery[100], assoption[10];
char option, assin[10], stotal[16], sseconds[10], assopquery[200], statquery[210], status[10];
int id;
        if (mysql_query(conn, "SELECT Id, assignment FROM work ; ") != 0)
    {
        printf("Query failed  with the following message:\n");
        printf("%s\n", mysql_error(conn));
        exit(1);
    }

    MYSQL_ROW row;
    res = mysql_store_result(conn);


    while ((row = mysql_fetch_row(res)) != NULL)
    {
        printf("ID: %s\n", row[0]);
        printf("Character: %s\n", row[1]);

    }
    mysql_free_result(res);
    printf("\nenter the assignment id\n");
    scanf("%d", &id);
    char idString[10];
    sprintf(idString, "%d", id);
    printf("This is the assignment for you to do\n\n");
    strcpy(sqlquery, "SELECT Id, assignment FROM work  where Id = ");
    strcat(sqlquery, idString);

    start = time(NULL);

    if (mysql_query(conn, sqlquery) != 0) {
        printf("Query failed  with the following message:\n");
        printf("%s\n", mysql_error(conn));
        exit(1);
    }
    res = mysql_use_result(conn);
    while (row = mysql_fetch_row(res)) {


        printf("ID: %s\n", row[0]);
        ("Character: %s\n", row[1]);
        strcpy(ass, row[1]);
        int x = strlen(ass);

        for (n = 0; n <= x; n++) {

        printf("--------------%c---------------\n", ass[n]);

            if (ass[n] == 'A' ) {


                printf("you're currently drawing letter A'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                        }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (A[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &A[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }


        }
                if (ass[n] == 'B' ) {

                printf("you're currently drawing letter B'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (B[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &B[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                //array for comparing/ marking the character.

            }

            if (ass[n] == 'C' ) {

                printf("you're currently drawing letter C'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (C[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &C[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                //array for comparing/ marking the character.

            }

            if (ass[n] == 'D' ) {

                printf("you're currently drawing letter D'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (D[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &D[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                //array for comparing/ marking the character.

            }

            if (ass[n] == 'E' ) {

                printf("you're currently drawing letter E'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (E[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &E[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                //array for comparing/ marking the character.

            }

            if (ass[n] == 'F' ) {

                printf("you're currently drawing letter F'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (F[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &F[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'G' ) {

                printf("you're currently drawing letter G'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (G[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &G[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                //array for comparing/ marking the character.

            }

            if (ass[n] == 'H' ) {

                printf("you're currently drawing letter H'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (H[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &H[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'I' ) {

                printf("you're currently drawing letter I'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (I[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &I[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'J' ) {

                printf("you're currently drawing letter J'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (J[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &J[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'K' ) {

                printf("you're currently drawing letter K'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (K[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &J[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'L' ) {

                printf("you're currently drawing letter L'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (L[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &L[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }


            }

            if (ass[n] == 'M' ) {

                printf("you're currently drawing letter M'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (M[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &M[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }


            if (ass[n] == 'N' ) {

                printf("you're currently drawing letter N'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (N[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &N[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'O' ) {

                printf("you're currently drawing letter O'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (O[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &O[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'P' ) {

                printf("you're currently drawing letter P'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (P[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &P[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                //array for comparing/ marking the character.

            }

            if (ass[n] == 'Q' ) {

                printf("you're currently drawing letter Q'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (Q[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &Q[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'R' ) {

                printf("you're currently drawing letter R'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (R[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &R[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'S' ) {

                printf("you're currently drawing letter S'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (S[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &S[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'T' ) {

                printf("you're currently drawing letter T'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (T[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &T[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'U' ) {

                printf("you're currently drawing letter U'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (U[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &U[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'V' ) {

                printf("you're currently drawing letter V'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (V[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &V[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'W' ) {

                printf("you're currently drawing letter W'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (W[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &W[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'X' ) {

                printf("you're currently drawing letter X'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (X[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &X[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                //array for comparing/ marking the character.
                printf("you scored %d in this letter\n", sum);
                end = time(NULL);
                printf("\nThe time taken to do this assignment is %.2f seconds\n\n\n\t", difftime(end, start));
            }

            if (ass[n] == 'Y' ) {
                start = time(NULL);
                printf("you're currently drawing letter Y'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (Y[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &Y[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }

            if (ass[n] == 'Z' ) {

                printf("you're currently drawing letter Z'\n\n");
                printf("enter 0 or 1 to draw your character:\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("enter 0 or 1 at row %d, column %d:", (i + 1), (j + 1));
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        if (Z[i][j] == array[i][j])
                        {
                            sum = sum + 1;
                        }

                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the character you entered is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &array[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("\n\n");
                printf("the correct character is shown below\n");
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 4; j++) {
                        *letter;
                        letter = &Z[i][j];
                        if (*letter == 1) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

            }
             printf("you scored %d in this letter\n", sum);
                end = time(NULL);
                printf("\nThe time taken to do this assignment is %.2f seconds\n\n\n\t", difftime(end, start));




        }

             //End of attempting

        }
        fflush(stdin);
    }
    mysql_free_result(res);

        }



   else{
    printf("\n\n\n\t\t\t\t ******INVALID USERCODE*****");
    main();
   }

}
