#include<hms.h>
char ans=0;
int ok;
int b, valid=0;

struct patient//list of global variable
{
	int age;
	char Gender;
	char First_Name[20];
	char Last_Name[20];
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Doctor[20];
	char Problem[20];
};

struct patient  p,temp_c;

main(void)
{

    WelcomeScreen();//Use to call WelcomeScreen function
	Title();//Use to call Title function
	LoginScreen();//Use to call Menu function

}
