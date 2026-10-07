#include <stdio.h>
#include <string.h>

int main()
{
    //Define the user name variable
    char userName[100];
    //Prompt user to enter their name
    printf("What is your name?  ");
    fgets(userName,sizeof(userName),stdin);
    printf("\n");
    //Display back the entered name to the user
    printf("Your name is %s",userName);
    printf("\n");
    // strlen() library function is used to get the lenght of the user name
    printf("Your name is %d characters long.",strlen(userName));
    printf("\n");
    return 0;
}
