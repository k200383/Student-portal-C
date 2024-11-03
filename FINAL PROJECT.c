#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int s; //wrong fuction
int m;
void login();//admin block
void admin();
void wrongA();
void calender();
void cal();
void displaycalender();
void updatecalender();
void Fall();
void Spring();
void details();
void studentdetails();
void teacherdetails();
void createaccount();
void Screateaccount();
void Tcreataccount();
void update();
void studentupdate();
void teacherupdate();
void updatedfile(char roll[20]);
void del_account();
void studentdel();
void teacherdel();
void userlogin();//teacher block
void userloginchoice(char tname[20]);
void homepaget(char idnumber[10]);
void marks(char tname[20]);
void chatbox();
void wrongT(char tname[20]);
void marks_display();
void studentlogin();//student block
void student();
void homepage(char idnumber[10]);
void academicdocument(char idnumber[10]);
void display_marks(char idnumber[10]);
void feedback(char idnumber[10]);
void studyplan(char idnumber[10]);
void Bscs(char idnumber[10]);
void Bsse(char idnumber[10]);
void wrongS(char idnumber[10]);
struct student
{
    char pass[20];
    char studentname[20];
    char fname[20];
    char lname[20];
};
void Tcreateaccount();
struct teacher T;
struct teacher
{
    char pass[20];
    char teachername[20];
    char fname[20];
    char lname[20];
};
struct studentP
{
	char roll_no[20];
	char sec[20];
    char Degree[20];
    char Campus[20];
    int  Batch;
    char Status[20];
    char Name[20];
    char Gender[20];
    char DOB[20];
    char Email[50];
    char Nationality[20];
    char Mobile_no[11];
};
struct teacherP
{
	char roll_no[20];
    char Qualifiction[20];
    char Campus[20];
    char year_of_joining[20];
    char Status[20];
    char Name[20];
    char Gender[20];
    char DOB[20];
    char Email[50];
    char Nationality[20];
    char Mobile_no[11];
};
struct feed_back
{
	int q1;
	int q2;
	int q3;
	int q4;
	int q5;
	int q6;
	char q7[100];
}a;
struct marks
{
	int ass_1;
	int ass_2;
	int mid_1;
	int mid_2;
	int final;
	int attendance;
};
int main()
{
	int o1;
    printf("\n\n\n\n\n\n");
	printf("                                                *****************************************************************\n");
	printf("                                                *****************************************************************\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                ***                      FAST UNVERSITY KHI                   ***\n");
	printf("                                                ***     ----    ----------------------------    ----          ***\n");
	printf("                                                ***             WELCOME   TO   NU  STUDENT   PORTAL           ***\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                *****************************************************************\n");
	printf("                                                *****************************************************************\n\n\n");
	int a4=0,c;
	printf("Press\n");
	printf("1 = FOR ADMIN\n2 = FOR TEACHER\n3 = FOR STUDENT\n");
	scanf("%d",&a4);
	if(a4==1)
	{
		login(); //ADMIN
	}
	else if(a4==2)
	{
		userlogin(); //TEACHER
	}
	else if(a4==3)
	{
		studentlogin(); //student
	}
   else{

   printf("\nWrong input\nDo you want to continue\n1.yes\n2.no\n");
   scanf("%d",&o1);
   if(o1==1)
   {
   	system("cls");
   	   main();
   }
   else if(o1==2)
   {
   	exit(0);
   }
   else
   {system("cls");
   	printf("wrong input\n");
   	main();
   }}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////admin block//////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void login()
{
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("                                                *****************************************************************\n");
	printf("                                                *****************************************************************\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                ***                FAST UNVERSITY KHI                         ***\n");
	printf("                                                ***     ----    ----------------------------    ----          ***\n");
	printf("                                                ***        WELCOME      TO    NU     ADMIN PORTAL             ***\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                *****************************************************************\n");
	printf("                                                *****************************************************************\n\n\n");
	

	char username[20];
  	char userpwd[10],c;
  	int i=0;
  
    printf("\nEnter your username : ");
    scanf("%s",&username);
    char del=0;
    
    printf("Enter your password : ");
    for(i=0;i<6;i++)
    {
      userpwd[i]=getch();
        if (userpwd[i]=='\b')
		{ printf("\b");
          printf(" %c",del);
          i--;
          printf("\b");
          i--;
		  continue;
		}
        else
        printf("*");   	
    }
    userpwd[i]='\0';
 
    printf("\n\nPress any key to continue");
    getch();
 
    if(!strcmp(username,"Hassan") && !strcmp(userpwd,"12345a"))
    {
        printf("\n\nWelcome Sir Hassan");
        getch();
        system("cls");
        admin();
    }
    else
    {
        printf("\n\nIncorrect username or password");
        getch();
        login();
    }
}
void admin()
{
	int a;
    printf("\n\n\nPLEASE SELECT FROM THE FOLLOWING OPTIONS\n\n");
	printf("1.ACADEMIC CALENDER\n\n");
	printf("2.REGISTRATION\n\n");
	printf("3.CREATE ACCOUNT\n\n");
	printf("4.UPDATE CONTACT DETAILS\n\n");
	printf("5.DELETE ACCOUNT\n\n");
	printf("\nPLEASE PRESS 1/2/3/4/5\n\n");
	scanf("%d",&a);
	switch(a){
	case 1:
		system("cls");
		calender(); 
		break;
	case 2:
		system("cls");
		details();
		break;
	case 3:
		system("cls");
		createaccount();
		break;
	case 4:
		system("cls");
		update();
		break;
	case 5:
		system("cls");
		del_account(); 
		break;
	
	default:
		printf("WRONG INPUT\n");
		wrongA();
	}   
	wrongA();
}
void wrongA()
{	

 	printf("\n\n\t\t\tDO YOU WANT TO CONTINUE=\n");
 	printf("\t\t\tPRESS 1 FOR YES AND 2 FOR NO\n");
    scanf("%d",&s);
    if(s==1)
    { 
	 	    system("cls");
	 	    admin();
	    }
	   
    
    else if(s==2)
    {
     	exit(0);
    } 
	 else
	    {
	 	    printf("wrong input\n");
	 	    wrongA();
	    }  
}
void calender()
{
	int Ac;
	printf("\t\t**Academic calender**\n\n");
	printf("Enter\n1.To display\n2.To update\n");
	scanf("%d",&Ac);
	if(Ac==1)
	{cal();
	displaycalender();}
	else if(Ac==2) 
	{
	updatecalender();}
	else {
		printf("\nwrong input");
		wrongA();
	}
	
}
char *y[]={"2020-21"};
char *h[]={" Fall ","  Spring  "};
char *sh1[]={"Registration","Aug 25-28","Jan 19-22"};  
char *sh2[]={"First day of Classes","Aug 31","Jan 25"};
char *sh3[]={"First Session Examinations","week 6","week 6"};
char *sh4[]={"Second Session Examinations","week 11","week 11"};
char *sh5[]={"Last day of Classes","Dec 18","May 13"};
char *sh6[]={"Final Examinations","Dec 22-31","May 25-Jun 4"};
char *sh7[]={"Announcements of results","Jan 15,2021","Jun 11"};
void cal()
{
	FILE *fp;
	fp=fopen("calender.txt","w+");
	if(fp==NULL)
	{
		printf("error");
		wrongA();
	}
	fprintf(fp,"\t**Academic calender for %s**\n\n",y[0]);
	int i,j;
	for(i=0;i<8;i++){	
	for (j=0;j<3;j++){
	if (i==0){
		if (j==0)
		fprintf(fp,"\t");
		else if (j==1)
		fprintf(fp,"\t\t\t%s",h[0]);
		else
		fprintf(fp,"\t\t%s\n",h[1]);
	}
	if (i==1){	
		if (j==0)
		{fprintf(fp,"%s",sh1[0]);}
		else if(j==1)
		{fprintf(fp,"\t\t\t%s",sh1[1]);}
		else
		fprintf(fp,"\t%s",sh1[2]);
	}
	if (i==2){
		{if (j==0)
		{fprintf(fp,"%s",sh2[0]);}
		else if(j==1)
		{fprintf(fp,"\t\t%s",sh2[1]);}
		else
		fprintf(fp,"\t\t%s",sh2[2]);
	}
   }
	if(i==3){
		if(j==0){
		fprintf(fp,"%s",sh3[0]);}
		else if (j==1)
		fprintf(fp,"\t%s",sh3[1]);
		else
		fprintf(fp,"\t\t%s",sh3[2]);
	}
	if(i==4){
		if(j==0){
		fprintf(fp,"%s",sh4[0]);}
		else if (j==1)
		fprintf(fp,"\t%s",sh4[1]);
		else
		fprintf(fp,"\t\t%s",sh4[2]);
	}
	if(i==5){
			{if (j==0)
			{fprintf(fp,"%s",sh5[0]);}
			else if(j==1)
			{fprintf(fp,"\t\t%s",sh5[1]);}
			else
			fprintf(fp,"\t\t%s",sh5[2]);
	}
			}
	if(i==6){
			{if (j==0)
			{fprintf(fp,"%s",sh6[0]);}
			else if(j==1)
			{fprintf(fp,"\t\t%6s",sh6[1]);}
			else
			fprintf(fp,"\t%s",sh6[2]);}
			}
	if(i==7){
			{if (j==0)
			{fprintf(fp,"%s",sh7[0]);}
			else if(j==1)
			{fprintf(fp,"\t%6s",sh7[1]);}
			else
			fprintf(fp,"\t%s",sh7[2]);
		}
			}
	}
	fprintf(fp,"\n");
	}
	fclose(fp);
}
void displaycalender()
{
		char c;
		FILE *fp;
		fp = fopen("calender.txt", "r");
		if (fp==NULL)
		{
		printf("ERROR");
		}
   		while (c != EOF) 
        {printf ("%c", c); 
		c = fgetc(fp); }
		fclose(fp); 
}
void updatecalender()
{
	int n;
	char a;
	char y1[8];
	displaycalender();
   
	printf("\n\nWhere you want to make changes:");
	printf("\n1.year\n2.Fall\n3.Spring");
	printf("\n-->Enter number Accordingly: ");
	scanf("%d",&n);
	if (n==1)
	{
		printf("\nWhich year calender 20XX-XX?: ");
		fflush(stdin);
		gets(y1);
		y[0]=y1;
		cal();
		printf("\nDo you want to make any other change?Press 'Y' or 'N: ");
		scanf(" %c",&a);
		if(a=='Y'){
	    updatecalender();}
	    
	    displaycalender();
	wrongA();	
	}
	
	if(n==2)
	{
		Fall();	
	}
	
	else if(n==3)
	{
		Spring();
	}
	else 
	{
			printf("\nWrong input");
			wrongA();
		}

}
void Fall(){
	
	printf("\t\t**CHANGES IN FALL**");
	int n,F,d,i;
	char F1[30],F2[30],F3[30],F4[30],F5[30],F6[30],F7[30];
	char ch=' ';
	static int c=0;   
		if (c==0){
		printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n6.%s\n7.%s",sh1[0],sh2[0],sh3[0],sh4[0],sh5[0],sh6[0],sh7[0]);}
		
		printf("\n\n-->Press number according to subheading:  ");
		scanf("%d",&F);
		switch(F){
			
		
		case 1:
					printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh1[1]);
					fflush(stdin);  
			        gets(F1);
			        for(i=strlen(F1);i<strlen(sh1[1]);i++){
			        	 	F1[i]=ch;} 
					F1[i]='\0';
			        sh1[1]=F1;
			        break;
		case 2:
					printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh2[1]);
					fflush(stdin);
			        gets(F2);
			        for(i=strlen(F2);i<strlen(sh2[1]);i++){
			        	 	F2[i]=ch;} 
					F2[i]='\0';
			        sh2[1]=F2;
			        break;
		case 3:
					printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh3[1]);
					 fflush(stdin);
			        gets(F3);
			        cal();
			        for(i=strlen(F3);i<strlen(sh3[1]);i++){
			        	 	F3[i]=ch;} 
					F3[i]='\0';
			        sh3[1]=F3;
			        break;
		case 4:
			    	printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh4[1]);
			          fflush(stdin);
					gets(F4);
			        for(i=strlen(F4);i<strlen(sh4[1]);i++){
			        	 	F4[i]=ch;} 
					F4[i]='\0';
			        sh4[1]=F4;
			        break;
		case 5:
			    	printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh5[1]);
					fflush(stdin);
			        gets(F5);
			        for(i=strlen(F5);i<strlen(sh5[1]);i++){
			        	 	F5[i]=ch;} 
					F5[i]='\0';
			        sh5[1]=F5;
			        break;
		case 6:
				    printf("Enter the change:\n");
				    printf("Kindly in format e.g%s:\n",sh6[1]);
				    fflush(stdin);
			        gets(F6);
			        for(i=strlen(F6);i<strlen(sh1[6]);i++){
			        	 	F6[i]=ch;} 
					F6[i]='\0';
			        sh6[1]=F6;
			        break;
		case 7:
				    printf("Enter the change:\n");
					printf("\nKindly in format e.g%s:\n",sh7[1]);
					fflush(stdin);
			        gets(F7);
			        for(i=strlen(F7);i<strlen(sh7[1]);i++){
			        	 	F7[i]=ch;} 
					F7[i]='\0';
			        sh7[1]=F7;
			        break;
	    default: 
				printf("Wrong input");
				Fall(); 
	}
		cal();
		c++;
		printf("\n-->Any more change in Fall?Press\n1.For Yes\n2.For No\n");
		scanf("%d",&d);
		if(d==1)
		Fall();	
	else if(d==2)
		{
		printf("\nPress \n1.To make any change in Calendar\n2.To display updated calender\n3.To exit\n");
		scanf("%d",&n);
		if (n==1)
		updatecalender();
		else if(n==2)
		displaycalender();
		else if(n==3)
		exit(0);
		wrongA();}	
	}

void Spring(){
		printf("\t\t**CHANGES IN SPRING**");
	int n,S,d,i;
	char S1[30],S2[30],S3[30],S4[30],S5[30],S6[30],S7[30];
	char ch=' ';
	static int c=0;
		if (c==0){
		printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n6.%s\n7.%s",sh1[0],sh2[0],sh3[0],sh4[0],sh5[0],sh6[0],sh7[0]);}
		
		printf("\n-->Press number according to subheading:  ");
		scanf("%d",&S);
		switch(S){

		case 1:
					printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh1[2]);
					fflush(stdin);  
			        gets(S1);
			        for(i=strlen(S1);i<strlen(sh1[2]);i++){
			        	 	S1[i]=ch;} 
					S1[i]='\0';
			        sh1[2]=S1;
			        break;
		case 2:
					printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh2[2]);
					fflush(stdin);
			        gets(S2);
			        for(i=strlen(S2);i<strlen(sh2[2]);i++){
			        	 	S2[i]=ch;} 
					S2[i]='\0';
			        sh2[2]=S2;
			        break;
		case 3:
					printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh3[2]);
					fflush(stdin);
			        gets(S3);
			        for(i=strlen(S3);i<strlen(sh3[2]);i++){
			        	 	S3[i]=ch;}
					S3[i]='\0';
			        sh3[2]=S3;
			        break;
		case 4:
				    printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh4[2]);
			        fflush(stdin);
					gets(S4);
			        for(i=strlen(S4);i<strlen(sh4[2]);i++){
			        	 	S4[i]=ch;} 
					S4[i]='\0';
			        sh4[2]=S4;
			        break;
		case 5:
				    printf("Enter the change:\n");
					printf("Kindly in format e.g%s:\n",sh5[2]);
					fflush(stdin);
			        gets(S5);
			        for(i=strlen(S5);i<strlen(sh5[2]);i++){
			        	 	S5[i]=ch;} 
					S5[i]='\0';
			        sh5[2]=S5;
			        break;
		case 6:
				    printf("Enter the change:\n");
				    printf("Kindly in format e.g%s:\n",sh6[2]);
				    fflush(stdin);
			        gets(S6);
			        for(i=strlen(S6);i<strlen(sh1[2]);i++){
			        	 	S6[i]=ch;}
					S6[i]='\0';
			        sh6[2]=S6;
			        break;
		case 7:
				    printf("Enter the change:\n");
					printf("\nKindly in format e.g%s\n:",sh7[2]);
					fflush(stdin);
			        gets(S7);
			        for(i=strlen(S7);i<strlen(sh7[2]);i++){
			        	 	S7[i]=ch;} 
					S7[i]='\0';
			        sh7[2]=S7;
			        break;
	    default: 
			        printf("Wrong input");
			        Spring(); 
	}
		cal();
		c++;
		printf("\n-->Any more change in Spring?Press\n1.For Yes\n2.For No\n");
		scanf("%d",&d);
		if(d==1)
		{Spring();}	
	else if(d==2)
		{
		printf("\nPress \n1.To make any change in Calendar\n2.To display updated calender\n3.To leave\n");
		scanf("%d",&n);
		if (n==1)
		updatecalender();
		else if(n==2)
		displaycalender();
		else if(n==3)
		exit(0);
		wrongA();}		
	}
void details()
{	int a;
	printf("\t\t**REGISTERATION**\n");
	printf("Enter\n-->1.Student\n-->2.Teacher\n");
	scanf("%d",&a);
	if(a==1)
	{
		studentdetails();
	}
	if(a==2)
	{
		teacherdetails();
	}
	else
	{
		wrongA();
	}
	
}
void studentdetails()
{ printf("\t\t**STUDENT REGISTRATION**\n");
	struct studentP profile;
	char roll[20];
	printf("ROLL NO:");
	fflush(stdin);
	gets(profile.roll_no);
	strcpy(roll,profile.roll_no);
	printf("Section:");
	fflush(stdin);
	gets(profile.sec);
	printf("Degree:");
	fflush(stdin);
	gets(profile.Degree);
	printf("Campus:");
	fflush(stdin);
	gets(profile.Campus);
	printf("Batch:");
	fflush(stdin);
	scanf("%d",&profile.Batch);
	printf("Status:");
	fflush(stdin);
	gets(profile.Status);
	printf("Name:");
	fflush(stdin);
	gets(profile.Name);
	printf("Gender:");
	fflush(stdin);
	gets(profile.Gender);
	printf("DOB:");
	fflush(stdin);
	gets(profile.DOB);
	printf("Email:");
	fflush(stdin);
	gets(profile.Email);
	printf("Nationality:");
	fflush(stdin);
	gets(profile.Nationality);
	fflush(stdin);
	printf("mobile number:");
	fflush(stdin);
	gets(profile.Mobile_no);
	FILE *fp;
	char ch;
	strcat(roll,".txt");
	fp=fopen(roll,"w+");

	if (fp==NULL)
	{
		printf("\n Unable to Open!");
		wrongA();
	}
	else 
	{
	    fputs("ROLL NO       : ",fp);
	    fputs(profile.roll_no,fp);
	    fputs("\nSection       : ",fp);
	    fputs(profile.sec,fp);
	    fputs("\nDegree        : ",fp);
	    fputs(profile.Degree,fp);
	    fputs("\nCampus        : ",fp);
	    fputs(profile.Campus,fp);
	    fputs("\nBatch         : ",fp);
	    fprintf(fp,"%d",profile.Batch);
	    fputs("\nStatus        : ",fp);
	    fputs(profile.Status,fp);
	    fputs("\nName          : ",fp);
	    fputs(profile.Name,fp);
	    fputs("\nGender        : ",fp);
	    fputs(profile.Gender,fp);
	    fputs("\nDOB           : ",fp);
	    fputs(profile.DOB,fp);
	    fputs("\nEmail         : ",fp);
	    fputs(profile.Email,fp);
	    fputs("\nNationality   : ",fp);
	    fputs(profile.Nationality,fp);
	    fputs("\nmobile number : ",fp);
	    fputs(profile.Mobile_no,fp);
	}
	fclose(fp);
    printf("\n Registered Successfully.");
    printf("\nPress any key to continue...");
}
void teacherdetails()
{  printf("\t\t**TEACHER REGISTRATION**\n");
	struct teacherP profile;
	char roll[20];
	printf("ROLL NO:");
	fflush(stdin);
	gets(profile.roll_no);
	strcpy(roll,profile.roll_no);
	printf("Qualifications:");
	fflush(stdin);
	gets(profile.Qualifiction);
	printf("Campus:");
	fflush(stdin);
	gets(profile.Campus);
	printf("year of joining:");
	fflush(stdin);
	gets(profile.year_of_joining);
	printf("Status:");
	fflush(stdin);
	gets(profile.Status);
	printf("Name:");
	fflush(stdin);
	gets(profile.Name);
	printf("Gender:");
	fflush(stdin);
	gets(profile.Gender);
	printf("DOB:");
	fflush(stdin);
	gets(profile.DOB);
	printf("Email:");
	fflush(stdin);
	gets(profile.Email);
	printf("Nationality:");
	fflush(stdin);
	gets(profile.Nationality);
	printf("mobile number:");
	fflush(stdin);
	gets(profile.Mobile_no);
	FILE *fp;
	char ch;
	strcat(profile.roll_no,"tp.txt");
	fp=fopen(profile.roll_no,"w+");
	if (fp==NULL)
	{
		printf("\n Unable to Open!");
		wrongA();
	}
	else
	{
		fputs("ROLL NO        : ",fp);
	    fputs(roll,fp);
	    fputs("\nQualification  : ",fp);
	    fputs(profile.Qualifiction,fp);
	    fputs("\nCampus         : ",fp);
	    fputs(profile.Campus,fp);
	    fputs("\nYear of joining: ",fp);
	    fputs(profile.year_of_joining,fp);
	    fputs("\nStatus         : ",fp);
	    fputs(profile.Status,fp);
	    fputs("\nName           : ",fp);
	    fputs(profile.Name,fp);
	    fputs("\nGender         : ",fp);
	    fputs(profile.Gender,fp);
	    fputs("\nDOB            : ",fp);
	    fputs(profile.DOB,fp);
	    fputs("\nEmail          : ",fp);
	    fputs(profile.Email,fp);
	    fputs("\nNationality    : ",fp);
	    fputs(profile.Nationality,fp);
	    fputs("\nmobile number  : ",fp);
	    fputs(profile.Mobile_no,fp);
    }
	fclose(fp);
}
void createaccount()
{	int a;
	printf("Enter\n-->1.Student\n-->2.Teacher\n");
	scanf("%d",&a);
	if(a==1)
	{
		Screateaccount();
	}
	if(a==2)
	{
		Tcreateaccount();
	}
	else
	{
		wrongA();
	}
	
}
void Screateaccount()
{   printf("\t\t**STUDENT ACCOUNT**\n");
    struct student S;
    char filename[20];
    int i;
    
    system("cls");
    puts("\t\t**Create Student Account**");
    printf("\n\n");
    printf(" Enter First Name: ");
    fflush(stdin);
    gets(S.fname);
    printf("\n");
    printf(" Enter Last Name: ");
    gets(S.lname);
    printf("\n");
    printf(" Enter Username: ");
    gets(S.studentname);
    printf("\n");
    printf(" Enter Password: ");
    gets(S.pass);
    printf("\n");
    for(i=0;S.studentname[i]!='\0';i++)
    {
    	filename[i]=S.studentname[i];
	}
	filename[i]='\0';
	
    strcat(filename,"Sdetails.txt");
    FILE *fp;
    fp = fopen (filename, "wb+");
    if (fp == NULL)
    {
        printf("\nError opened file\n");
        wrongA();
    }

	fflush(stdin);

   fputs("\nFirst Name:",fp);
   fflush(stdin);
	fputs(S.fname,fp);
	fputs("\nLast NAme:",fp);
	 fflush(stdin);
	fputs(S.lname,fp);
	fputs("\nUsername:",fp);
	 fflush(stdin);
	fputs(S.studentname,fp);
	fputs("\nPassword:",fp);
	 fflush(stdin);
	fputs(S.pass,fp);
	printf("\n");

    fclose (fp);
    system("cls");
    printf("\n Account Created Successfully.");
    printf("\nPress any key to continue...");
    getch();
    system("cls");
   // wrongA();
}
void Tcreateaccount()
{   printf("\t\t**TEACHER ACCOUNT**\n");
{
    struct teacher T;
    char filename[20];
    int i;
    
    system("cls");
    puts("\t\t**Create Teacher Account**");
    printf("\n\n");
    printf(" Enter First Name: ");
    fflush(stdin);
    gets(T.fname);
    printf("\n");
    printf(" Enter Last Name: ");
    gets(T.lname);
    printf("\n");
    printf(" Enter Username: ");
    gets(T.teachername);
    printf("\n");
    printf(" Enter Password: ");
    gets(T.pass);
    printf("\n");
    for(i=0;T.teachername[i]!='\0';i++)
    {
    	filename[i]=T.teachername[i];
	}
	filename[i]='\0';
	
    strcat(filename,"Tdetails.txt");
    FILE *fp;
    fp = fopen (filename, "wb+");
    if (fp == NULL)
    {
        printf("\nError opened file\n");
        wrongA();
    }
	
   fputs("\nFirst Name:",fp);
   fflush(stdin);
	fputs(T.fname,fp);
	fputs("\nLast NAme:",fp);
	 fflush(stdin);
	fputs(T.lname,fp);
	fputs("\nUsername:",fp);
	 fflush(stdin);
	fputs(T.teachername,fp);
	fputs("\nPassword:",fp);
	 fflush(stdin);
	fputs(T.pass,fp);
	printf("\n");

    fclose (fp);
    printf("\n Account Created Successfully.");
    printf("\nPress any key to continue...");
    getch();
}
}
void update()
{	printf("\t\t**UPDATE CONTACT DETAILS**\n");
	int a;
	printf("Enter\n-->1.Student\n-->2.Teacher\n");
	scanf("%d",&a);
	if(a==1)
	{
		studentupdate();
	}
	if(a==2)
	{
		teacherupdate();
	}
	else
	{
		wrongA();
	}
}
void studentupdate()
{		printf("\t\t**UPDATE STUDENT CONTACT INFORMATION**\n");
	struct studentP profile;
	char roll[20];
	printf("Enter Roll number to update:\n");
	printf("ROLL NO:");
	fflush(stdin);
	gets(profile.roll_no);
	strcpy(roll,profile.roll_no);
	int a;
	printf("-->Press number to make changes to be made at:\n");
	printf("1.Email:\n");
	printf("2.mobile number:\n");
	printf("3.both\n");
	scanf("%d",&a);
	FILE *fp,*ftemp;
	char ch,email[50],mob[20];
	strcat(roll,".txt");
	fp=fopen(roll,"r");
	ftemp=fopen("newfile.txt","w");

	if (fp==NULL || ftemp==NULL)
	{
		printf("\n Unable to Open!");
		wrongA();
	}
	do{
	fscanf(fp,"ROLL NO       : %s\nSection       : %s\nDegree        : %s\nCampus        : %s\nBatch         : %d\nStatus        : %s\nName          : %s\nGender        : %s\nDOB           : %s\nEmail         : %s\nNationality   : %s\nmobile number : %s",profile.roll_no,profile.sec,profile.Degree,profile.Campus,&profile.Batch,profile.Status,profile.Name,profile.Gender,profile.DOB,profile.Email,profile.Nationality,profile.Mobile_no);
	}while(!feof(fp));

	if( a==1 )
	{   
	    printf("Enter email:\n");
	    fflush(stdin);
	    gets(email);
	    strcpy(profile.Email,email);
	   
	   }
	else if(a==2 )
	{
		
	  printf("Enter MobileNO:\n");
	    fflush(stdin);
	    gets(mob);
	    strcpy(profile.Mobile_no,mob);
	  
	}
	else if(a==3 )
	{   printf("Enter email:\n");
	    fflush(stdin);
	    gets(email);
	    strcpy(profile.Email,email);
	     printf("Enter MobileNO:\n");
	    fflush(stdin);
	    gets(mob);
	    strcpy(profile.Mobile_no,mob);
	    
	}
	else{
	
	wrongA();}
	fputs("ROLL NO       : ",ftemp);
	    fputs(profile.roll_no,ftemp);
	    fputs("\nSection       : ",ftemp);
	    fputs(profile.sec,ftemp);
	    fputs("\nDegree        : ",ftemp);
	    fputs(profile.Degree,ftemp);
	    fputs("\nCampus        : ",ftemp);
	    fputs(profile.Campus,ftemp);
	    fputs("\nBatch         : ",ftemp);
	    fprintf(ftemp,"%d",profile.Batch);
	    fputs("\nStatus        : ",ftemp);
	    fputs(profile.Status,ftemp);
	    fputs("\nName          : ",ftemp);
	    fputs(profile.Name,ftemp);
	    fputs("\nGender        : ",ftemp);
	    fputs(profile.Gender,ftemp);
	    fputs("\nDOB           : ",ftemp);
	    fputs(profile.DOB,ftemp);
	    fputs("\nEmail         : ",ftemp);
	    fputs(profile.Email,ftemp);
	    fputs("\nNationality   : ",ftemp);
	    fputs(profile.Nationality,ftemp);
	    fputs("\nmobile number : ",ftemp);
	    fputs(profile.Mobile_no,ftemp);

  	 fclose(fp);
	fclose(ftemp);
	remove(roll);
	rename("newfile.txt",roll);
	updatedfile(roll);
    wrongA();
}
void updatedfile( char roll[20])
{
		FILE *fptr;
		fptr=fopen(roll,"r");

	if (fptr==NULL)
	{
		printf("\n Unable to Open!");
		wrongA();
	}
	char c;
	printf("\n\n\t\t**UPDATED FILE**\n");
	c = fgetc(fptr); 
	    while (c != EOF) 
	    { 
	        printf ("%c", c); 
	        c = fgetc(fptr); 
	    }

	fclose(fptr);
}
void teacherupdate()
{		printf("\t\t**UPDATE STUDENT CONTACT INFORMATION**\n");
	struct teacherP profile;
	char roll[20];
	printf("Enter Roll number to update:\n");
	printf("ROLL NO:");
	fflush(stdin);
	gets(profile.roll_no);
	strcpy(roll,profile.roll_no);
	int a;
	printf("-->Press number to make changes to be made at:\n");
	printf("1.Email:\n");
	printf("2.mobile number:\n");
	printf("3.both\n");
	scanf("%d",&a);
	FILE *fp,*ftemp;
	char ch,email[50],mob[20];
	strcat(roll,"tp.txt");
	fp=fopen(roll,"r");
	ftemp=fopen("newfile.txt","w");

	if (fp==NULL || ftemp==NULL)
	{
		printf("\n Unable to Open!");
		wrongA();
	}
	do{
    fscanf(fp,"ROLL NO        : %s\nQualification  : %s\nCampus         : %s\nYear of joining: %s\nStatus         : %s\nName           : %s\nGender         : %s\nDOB            : %s\nEmail          : %s\nNationality    : %s\nmobile number  : %s",profile.roll_no,profile.Qualifiction,profile.Campus,profile.year_of_joining,profile.Status,profile.Name,profile.Gender,profile.DOB,profile.Email,profile.Nationality,profile.Mobile_no);

	}while(!feof(fp));

	if( a==1 )
	{   
	    printf("Enter email:\n");
	    fflush(stdin);
	    gets(email);
	    strcpy(profile.Email,email);
	   
	   }
	else if(a==2 )
	{
		
	  printf("Enter MobileNO:\n");
	    fflush(stdin);
	    gets(mob);
	    strcpy(profile.Mobile_no,mob);
	  
	}
	else if(a==3 )
	{   printf("Enter email:\n");
	    fflush(stdin);
	    gets(email);
	    strcpy(profile.Email,email);
	     printf("Enter MobileNO:\n");
	    fflush(stdin);
	    gets(mob);
	    strcpy(profile.Mobile_no,mob);
	    
	}
	else{
	
	wrongA();}
		fputs("ROLL NO        : ",ftemp);
	    fputs(profile.roll_no,ftemp);
	    fputs("\nQualification  : ",ftemp);
	    fputs(profile.Qualifiction,ftemp);
	    fputs("\nCampus         : ",ftemp);
	    fputs(profile.Campus,ftemp);
	    fputs("\nYear of joining: ",ftemp);
	    fputs(profile.year_of_joining,ftemp);
	    fputs("\nStatus         : ",ftemp);
	    fputs(profile.Status,ftemp);
	    fputs("\nName           : ",ftemp);
	    fputs(profile.Name,ftemp);
	    fputs("\nGender         : ",ftemp);
	    fputs(profile.Gender,ftemp);
	    fputs("\nDOB            : ",ftemp);
	    fputs(profile.DOB,ftemp);
	    fputs("\nEmail          : ",ftemp);
	    fputs(profile.Email,ftemp);
	    fputs("\nNationality    : ",ftemp);
	    fputs(profile.Nationality,ftemp);
	    fputs("\nmobile number  : ",ftemp);
	    fputs(profile.Mobile_no,ftemp);
  	 fclose(fp);
	fclose(ftemp);
	remove(roll);
	rename("newfile.txt",roll);
	printf("%s",roll);
	updatedfile(roll);
    wrongA();
}
void del_account()
{   int a;
	printf("\t\t**DELETE ACCOUNT**");
	printf("\nPress\n-->1.students\n-->2.teachers\n");
	scanf("%d",&a);
	switch(a)
	{
		 case 1:
		 	studentdel();
		 	break;
		 case 2:
		 	teacherdel();
		 	break;
		default:
			wrongA();
			break;
	}
}
void studentdel()
{	printf("\t\t**STUDENT ACCOUNT DELETION**");
	char Roll_no[20];
	char Roll_noA[20];
	char Roll_noM[20];
	printf("\nEnter the Roll number of student :");
	fflush(stdin);
	gets(Roll_no);
	strcpy(Roll_noA,Roll_no);
	strcpy(Roll_noM,Roll_no);
	strcat(Roll_no,".txt");
	int del = remove(Roll_no);
	strcat(Roll_noA,"Sdetails.txt");
	int delA = remove(Roll_noA);
	strcat(Roll_noM,"m.txt");
	int delM = remove(Roll_noM);
    if (del==0)
    printf("The file is Deleted successfully");
    else
    {
	printf("Roll Number is not registered");
    wrongA();}
}
void teacherdel()
{	printf("\t\t**TEACHER ACCOUNT DELETION**");
	char Roll_no[20];
	char Roll_noA[20];
	printf("\nEnter the Roll number of teacher :");
	fflush(stdin);
	gets(Roll_no);
	strcpy(Roll_noA,Roll_no);
	strcat(Roll_no,"tp.txt");
	int del = remove(Roll_no);
	strcat(Roll_noA,"Tdetails.txt");
	int delA = remove(Roll_noA);
    if (del==0)
    printf("The file is Deleted successfully");
    else
    {
	printf("Roll Number is not registered");
    wrongA();}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////Teacher Block/////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void userlogin()
{
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("                                                *****************************************************************\n");
	printf("                                                *****************************************************************\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                ***                FAST UNVERSITY KHI                         ***\n");
	printf("                                                ***     ----    ----------------------------    ----          ***\n");
	printf("                                                ***        WELCOME      TO    NU  TEACHER  PORTAL             ***\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                *****************************************************************\n");
	printf("                                                *****************************************************************\n\n\n");
	int a,b,c,s;
		char tname[20],pwd[20];
    char filename[20];
    int i;
    FILE *fp;
    struct teacher T;
  
    printf(" Enter Username: ");
    fflush(stdin);
    gets(tname);
    printf("\n");
    printf(" Enter Password: ");
    fflush(stdin);
    gets(pwd);
 	for(i=0;tname[i]!='\0';i++)
    {
    	filename[i]=tname[i];
	}
	filename[i]='\0';
	
    strcat(filename,"Tdetails.txt");
    fp = fopen (filename, "rb+");
    if(fp==NULL)
    {
        printf("\"File not found\"");
        wrongT(tname);
    }

 do{
 fscanf(fp,"\nFirst Name:%s\nLast NAme:%s\nUsername:%s\nPassword:%s\n",T.fname,T.lname,T.teachername,T.pass);
        if(strcmp(tname,T.teachername) == 0 && strcmp(pwd,T.pass)==0)
        {
            printf(" \n Username And Password is Correct.\n");
       
            printf("\nWelcome %s %s",T.fname,T.lname);
            printf("\nEnter any key to continue");
            getch();
              userloginchoice(tname);
            break;
      
        }
        else
        {
            printf("\n Username And Password is Incorrect.\n\n");
            printf("For queries contact flex.support@nu.edu.pk");
            getch();
        userlogin(tname);
            
        }
   }while(!feof(fp));
    fclose(fp);
}
void userloginchoice(char tname[20]) 
{   
    int a;
   system("cls");
    printf("\n\n\nPLEASE SELECT FROM THE FOLLOWING OPTIONS\n\n");
    printf("1.HOMEPAGE\n");
	printf("2.UPLOAD MARKS\n");
	printf("3.VIEW ACADEMIC CALENDER\n");
	printf("4.CHATBOX\n");
	printf("5.VIEW MARKS OF A STUDENT\n\n");
	printf("PLEASE PRESS 1/2/3/4/5\n\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		homepaget(tname);
		break;
		case 2:
		marks(tname);
		break;
		case 3:
		displaycalender();
		break;
		case 4:
		chatbox();
		break;	
		case 5:
		marks_display();
		wrongT(tname);	
		default:
		{
		printf("WRONG INPUT\n");
	    wrongT(tname);
		}
	} 
}
void homepaget(char idnumber[10])
{
	system("cls");
	char Roll_no[20],ch;
	FILE *fp;
	system("cls");
	strcpy(Roll_no,idnumber);
	strcat(idnumber,"tp.txt");
	fp=fopen(idnumber,"r");
	if(fp==NULL)
	{
		printf("\nUnable to open");
		exit(0);
	}
	else
	{
		while( (ch=getc(fp)) !=EOF )
		putch (ch);
	}
	fclose(fp);
	wrongT(Roll_no);
}
void marks(char tname[20])
{
	system("cls");
	int a;
	struct marks m;
	char Roll_no[20],idnumber[20];
	printf("Enter the roll number of the student you want to enter marks for!");
	fflush(stdin);
	gets(Roll_no);
	printf("Enter\n1.For assignment#1\n2.For assignment#2\n3.For Mid-Term #1\n4.For Mid-Term #2\n5.For Final\n6.Attendance Marks\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("Enter assignment 1 marks:");
		scanf("%d",&m.ass_1);
		break;
	    case 2:
		printf("Enter assignment 2 marks:");
		scanf("%d",&m.ass_2);
		break;
	    case 3:
		printf("Enter mid 1 marks       :");
		scanf("%d",&m.mid_1);
		break;
	    case 4:
		printf("Enter mid 2 marks       :");
		scanf("%d",&m.mid_2);
		break;
	    case 5:
		printf("Enter final exam marks  :");
		scanf("%d",&m.final);
		break;
		case 6:
		printf("Enter Attendence Marks  :");
		scanf("%d",&m.attendance);
		break;
		default: exit(0);

    }
    strcpy(idnumber,Roll_no);
	strcat(Roll_no,"m.txt");
	FILE *fp;
	fp=fopen(Roll_no,"ab+"); 
	fwrite(&m,sizeof(struct marks),1,fp);
	if (fp==NULL)
	{
		printf("\n Unable to Open!");
		exit(0);
	}
	else
	{
		switch(a)
		{
		    case 1:
		    fputs("\nAssignment 1      :",fp);
	        fprintf(fp,"%d",m.ass_1);
	        break;
	        case 2:
    		fputs("\nAssignment 2      :",fp);
	    	fprintf(fp,"%d",m.ass_2);
	    	break;
	    	case 3:
	        fputs("\nMID 1             :",fp);
		    fprintf(fp,"%d",m.mid_1);
		    break;
		    case 4:
	        fputs("\nMID 2             :",fp);
		    fprintf(fp,"%d",m.mid_1);
		    break;
		    case 5:
            fputs("\nFinal Exam        :",fp);
		    fprintf(fp,"%d",m.final);
		    break;
		    case 6:
		    fputs("\nAttendance marks  :",fp);
			fprintf(fp,"%d",m.attendance);
			break;	
		}
	}
	fclose(fp);
	printf("\nDo you ant to enter more marks?");
	printf("\npress \n-->1.Yes\n--.2.No\n");
	scanf("%d",&s);
	
	switch(s)
	{
		case 1:
    	marks(tname);
	    break;	
	    case 2:
	    	wrongT(tname);
	}
	
}
void wrongT(char tname[20])
{	
printf("\n\n\t\t\tDO YOU WANT TO CONTINUE=\n");
 	printf("\t\t\tPRESS 1 FOR YES AND 2 FOR NO\n");
    scanf("%d",&s);
    if(s==1)
    { 
	 	    system("cls");
	 	    userloginchoice(tname);
	    }
	   
    
    else if(s==2)
    {
     	exit(0);
    } 
	 else
	    {
	 	    printf("wrong input\n");
	 	    wrongT(tname);
	    }  
}
void marks_display()
{
	char Roll_no[20];
	printf("\nEnter the ID number of the students you want to view marks for:\n");
	fflush(stdin);
	gets(Roll_no);
	display_marks(Roll_no);
} 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////Student block/////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void studentlogin()
{	system("cls");
	printf("\n\n\n\n\n\n");                                               
	printf("                                                *****************************************************************\n");
	printf("                                                *****************************************************************\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                ***                      FAST UNVERSITY KHI                   ***\n");
	printf("                                                ***     ----    ----------------------------    ----          ***\n");
	printf("                                                ***             WELCOME   TO   NU  STUDENT USER  PORTAL       ***\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                ***                                                           ***\n");
	printf("                                                *****************************************************************\n");
	printf("                                                *****************************************************************\n\n\n");
	
	int a;
    int i;
    char sname[20],pwd[20];
    char filename[20];
    struct student S;
    struct studentP  profile;
    printf(" Enter Username: ");
    fflush(stdin);
    gets(sname);
    printf("\n");
    printf(" Enter Password: ");
    fflush(stdin);
    gets(pwd);
    
    for(i=0;sname[i]!='\0';i++)
    	filename[i]=sname[i];
    	
	filename[i]='\0';
    strcat(filename,"Sdetails.txt");
    FILE *fp;
    fp = fopen (filename, "rb+");
    if(fp==NULL)
    {
        printf("\"File not found\"");
       wrongS(sname);
    }
    do{
 	fscanf(fp,"\nFirst Name:%s\nLast NAme:%s\nUsername:%s\nPassword:%s\n",S.fname,S.lname,S.studentname,S.pass);
    if(strcmp(sname,S.studentname) == 0 && strcmp(pwd,S.pass)==0)
     {
        printf(" \n Username And Password is Correct.\n");
        printf("\nWelcome %s %s",S.fname,S.lname);
        getch();
        system("cls");
        student(sname);
     }
    else
    {
        printf("\n Username And Password is Incorrect.\n\n");
        printf("For queries contact flex.support@nu.edu.pk");
        getch();
	    studentlogin();   
    }
   }while(!feof(fp));
    fclose(fp);
    system("cls");
}
void student(char sname[20])
{
	int a;
    char filename[20];
    struct student S;
    struct studentP  profile;
    printf("\n\n\nPLEASE SELECT FROM THE FOLLOWING OPTIONS\n\n");
	printf("1.HOME PAGE\n\n"); 
	printf("2.MARKS\n\n");
	printf("3.ACADEMIC DOCUMENT\n\n");
	printf("4.COURSE FEEDBACK\n\n");
	printf("5.TENTATIVE STUDY PLAN\n\n");
	printf("6.ACADEMIC CALENDER\n\n");
	printf("7.CHATBOX\n");
	printf("PLEASE PRESS 1/2/3/4/5/6/7\n\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		homepage(sname); 	
		break;
		case 2:
		display_marks(sname);
		break;
		case 3:
		academicdocument(sname);
		break;
		case 4:
		feedback(sname);
    	break;
		case 5:
		studyplan(sname);
		break;
		case 6:
		displaycalender();
		wrongS(sname);
		break;
		case 7:
		chatbox(sname);	
		default:
		{
		   // printf("WRONG INPUT\n");
		    wrongS(sname);
     	} 
     	
	}
}
void homepage(char idnumber[10])  
{ 	char sname[10];
	strcpy(sname,idnumber);
	system("cls");
	FILE *fptr;
 	char c;
  	strcat(idnumber,".txt");
    fptr = fopen(idnumber, "r"); 
    if (fptr == NULL) 
    { 
        printf("\nCannot open file \n"); 
        printf("For queries contact concerned Academic Officer,to register.");
        wrongS(sname); 
    }  
    c = fgetc(fptr); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr); 
    } 
    fclose(fptr); 
	wrongS(sname);	
}
void display_marks(char sname[10])
{
	char idnumber[10];
	strcpy(idnumber,sname);
	char ch;
	FILE *fp;
	system("cls");
	strcat(sname,"m.txt");
	fp=fopen(sname,"r");
	if(fp==NULL)
	{
		printf("\nUnable to open");
		exit(0);
	}
	else
	{
		while( (ch=getc(fp)) !=EOF )
		putch (ch);
	}
	getch();
	fclose(fp);
	wrongS(idnumber);
}
void feedback(char idnumber[10])
{
	system("cls");
	struct feed_back a;
	printf("\nRate Every Question fron 1 to 5\n1.strongly agree\n2.agree\n3.uncertain\n4.disagree\n5.strongly disagree\n");
	printf("Question:1 Training was relevant to my needs.\n");
	scanf("%d",&a.q1);
	printf("Question:2 Material provided was helpful.\n");
	scanf("%d",&a.q2);
	printf("Question:3 Credit hours per course were sufficient.\n");
	scanf("%d",&a.q3);
	printf("Question:4 Content was well organized.\n");
	scanf("%d",&a.q4);
	printf("Question:5 Lectures met my expectations.\n");
	scanf("%d",&a.q5);
	printf("Question:6 Lectures met my expectations.\n");
	scanf("%d",&a.q6);
	printf("Question:7 Give suggestions if any, else write no suggestion.\n");
	fflush(stdin);
	gets(a.q7);
	FILE *fp;
	fp=fopen("feedback.txt","ab"); 
	if (fp==NULL)
	{
		printf("\n Unable to Open!");
		wrongS(idnumber);
	}
	else
	{
		fputs("\n\nThe feedback given by ",fp);
		fputs(idnumber,fp);
		fputs("\nQuestion:1 Training was relevant to my needs.\n",fp);
		fprintf(fp,"%d",a.q1);
		fputs("\nQuestion:2 Material provided was helpful.\n",fp);
		fprintf(fp,"%d",a.q2);
		fputs("\nQuestion:3 Credit hours per course were sufficient.\n",fp);
		fprintf(fp,"%d",a.q3);
		fputs("\nQuestion:4 Content was well organized.\n",fp);
		fprintf(fp,"%d",a.q4);
		fputs("\nQuestion:5 Lectures met my expectations.\n",fp);
		fprintf(fp,"%d",a.q5);
		fputs("\nQuestion:6 Lectures met my expectations.\n",fp);
		fprintf(fp,"%d",a.q6);
		fputs("\nQuestion:5 Give suggestions if any, else write no suggestion.\n",fp);
		fputs(a.q7,fp);
	}
	fclose(fp);
	wrongS(idnumber);
}
void studyplan(char sname[10])
{	char idnumber[10];
	strcpy(idnumber,sname);
	system("cls");
	struct studentP profile;
	FILE *fp;
	strcat(idnumber,".txt");
	fp=fopen(idnumber,"r+");
	char ch;
	do{
	fscanf(fp,"ROLL NO       : %s\nSection       : %s\nDegree        : %s\nCampus        : %s\nBatch         : %d\nStatus        : %s\nName          : %s\nGender        : %s\nEmail         : %s\nNationality   : %s\nmobile number : %s",profile.roll_no,profile.sec,profile.Degree,profile.Campus,&profile.Batch,profile.Status,profile.Name,profile.Gender,profile.DOB,profile.Email,profile.Nationality,profile.Mobile_no);
		strupr(profile.Degree); 
		if(strcmp(profile.Degree,"BSCS")==0)
		Bscs(sname);
		else if(strcmp(profile.Degree,"BSSE")==0)
		Bsse(sname);
		else
		{
		while( (ch=getc(fp)) !=EOF )
		putch (ch);
		printf("You will be updated soon");
	    }
		break;
	}while(!feof(fp));
    wrongS(sname); 
}
void Bscs(char sname[10])
{  
    char sn[2];
	char b[]="cs";
	char d[]="se";
	int i,j;
	char c;
	printf("\nEnter semester number: ");
	scanf("%s",&sn);
	strcat(sn,b);
	strcat(sn,".txt");
	FILE *fptr;
    fptr = fopen(sn, "r"); 
    if (fptr == NULL) 
    { 
        printf("\nCannot open file \n"); 
        wrongS(sname); 
    } 
    c = fgetc(fptr); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr); 
    } 
    fclose(fptr);
	wrongS(sname); 
}
void Bsse(char sname[10])
{  
    char sn[2];
	char d[]="se";
	int i,j;
	char c;
	printf("\nEnter semester number: ");
	scanf("%s",&sn);
	strcat(sn,d);
	strcat(sn,".txt");
	FILE *fptr;
    fptr = fopen(sn, "r"); 
    if (fptr == NULL) 
    { 
        printf("\nCannot open file \n"); 
        wrongS(sname); 
    } 
    c = fgetc(fptr); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr); 
    } 
    fclose(fptr);
	wrongS(sname); 
}
void chatbox(char sname[10])
{
	char ch,text[100];
	system("cls");
	FILE *fp;
	fp=fopen("chatbox.txt","r");
	if(fp==NULL)
	{
		printf("\nUnable to open");
		exit(0);
	}
	else
	{
		while( (ch=getc(fp)) !=EOF )
		putch (ch);
	}
	fclose(fp);
	printf("\nEnter your comment:");
	fflush(stdin);
	gets(text);
	fp=fopen("chatbox.txt","a+");
	fputs("\n",fp);
	fputs(sname,fp);
	fputs(":\t",fp);
	fputs(text,fp);
	fclose(fp);
	wrongS(sname);
}
void wrongS(char sname[10])
{	

 	printf("\n\n\t\t\tDO YOU WANT TO CONTINUE=\n");
 	printf("\t\t\tPRESS 1 FOR YES AND 2 FOR NO\n");
    scanf("%d",&s);
    if(s==1)
	 	    student(sname);

    else if(s==2)
    {
     	exit(0);
    } 
	else
	    {
	 	    printf("wrong input\n");
	 	    wrongS(sname);
	    }  
}
void academicdocument(char sname[10])
{
	system("cls");
   struct studentP profile;
   char c,idnumber[10];
   char sn[3];
   char b[]="cs";
   char d[]="se";
   FILE *fp1;
   FILE *fp2;
   FILE *fp3;
   strcpy(idnumber,sname);
   strcat(sname,".txt");
   fp1 = fopen(sname, "r");
   printf("\nEnter semester number: ");
   fflush(stdin);
  gets(sn);

  do{
  		fscanf(fp1,"ROLL NO       : %s\nSection       : %s\nDegree        : %s\nCampus        : %s\nBatch         : %d\nStatus        : %s\nName          : %s\nGender        : %s\nEmail         : %s\nNationality   : %s\nmobile number : %s",profile.roll_no,profile.sec,profile.Degree,profile.Campus,&profile.Batch,profile.Status,profile.Name,profile.Gender,profile.DOB,profile.Email,profile.Nationality,profile.Mobile_no);
		strupr(profile.Degree);
  if(strcmp(profile.Degree,"BSCS")==0){
	strcat(sn,b);
	strcat(sn,".txt");
   }
   else if (strcmp(profile.Degree,"BSSE")==0){
	strcat(sn,b);
	strcat(sn,".txt");}
	else
	{
		printf("\nYou will be updated soon");
		wrongS(idnumber);
	 }
   fp2 = fopen(sn, "r");  
   fp3 = fopen("ac.txt", "w");
   fprintf(fp3,"Name: %s",profile.Name);
   fprintf(fp3,"\nSection: %s",profile.sec);
   fprintf(fp3,"\n");
   while ((c = fgetc(fp2)) != EOF)
   fputc(c, fp3);
   fclose(fp3); 

    printf("\n\t\tHere is your admit card: \n\n"); 
    fp3 = fopen("ac.txt", "r");
    c = fgetc(fp3); 
    while (c != EOF) 
        {
		printf ("%c", c); 
		c = fgetc(fp3); }
		break;
	} while(!feof(fp1));	
    fclose(fp1); 
    fclose(fp2); 
    fclose(fp3); 
    getch();
    wrongS(idnumber);
}
