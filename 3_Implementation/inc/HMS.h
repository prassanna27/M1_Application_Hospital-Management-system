#ifndef HSM_H
#define HSM_H

//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<windows.h>
#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>

//FUNCTION DECLERATION
void WelcomeScreen(void);//WelcomeScreen function decleration
void Title(void);//Title function decleration
void MainMenu(void);//MainMenu function decleration
void LoginScreen(void);//LoginScreen function decleration
void Add_rec(void);//Add_rec function declaration
void func_list();//function to list the patient details
void Search_rec(void);//Search_rec function declaration
void Edit_rec(void);//Edit_rec function declaration
void Dlt_rec(void);//Dlt_rec function declaration
void ex_it(void);//exit function declaration
//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y) {
COORD pos = {x, y};//sets co-ordinates in (x,y).
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

#endif
