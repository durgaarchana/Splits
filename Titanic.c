/* Name : Titanic.c {{{
 * Author : durgaswaroop
 * Description : The driver program. Everything starts here
 * }}} 
 */

#include <stdio.h>

// function prototypes
void newUserFileCreator(char *); //{{{
void existingUserBillsLoader(char *);
void existingUserloginFunction();
void newUserRegistrationFunction();
void newUserNameClashDetector(char *); //}}}

main(){
	int userInput = -1;

	//The Initial welcome + login screen
	printf(" * * * Welcome to Splits * * * \n\n\n\n");
	while(userInput != 0){
		printf("Select one of the following options\n");
		printf("1. Login\n");
		printf("2. Create New User\n");
		printf("0. Exit Splits\n");
		scanf("%d", &userInput);
		switch(userInput){
			case 1:
				existingUserloginFunction();
				break;
			case 2:
				newUserRegistrationFunction();
				break;
			case 0:
				exit(0);
				break;
			default:
				printf("Invalid input. Try again\n");
		}
	}

	//Loops till the user presses 0 to exit
	while(userInput != 0){
		printf("Select one of the following options\n");
		printf("1. View past bills\n");
		printf("2. Add a new bill\n");
		printf("3. Change a past bill\n");
		printf("4. Delete a past bill\n");
		printf("0. Exit Splits\n");
		scanf("%d", &userInput);
	}
}

//function definitions
void existingUserloginFunction(){
	char userName [20];
	//printf("Inside Login Function\n");
	printf("Enter Username : ");
	scanf("%s",userName);
	existingUserBillsLoader(userName);
}

void existingUserBillsLoader(char * userName){
	printf("Inside previous bills loader function\n");
}

void newUserRegistrationFunction(){
	//printf("Inside reg fn\n");
	char userName [20];
	printf("Enter the following details\n");
	printf("Username : ");
	scanf("%s",userName);
	newUserNameClashDetector(userName);
	newUserFileCreator(userName);
}

void newUserNameClashDetector(char * userName){
	printf("inside new user name clash detector\n");
}

void newUserFileCreator(char * userName){
	printf("Inside new user file creator fun\n");
}
