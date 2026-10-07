#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// ALL THE SUBSECTIONS OF TASK 1 ARE IMPLEMENTED HERE
int main()
{
    int PIN=8474;
    int userAttempts= 0;
    int userInput;
    char passwordString[50];
    int passwordLength;

    while(true){
        if(userAttempts==3){
            printf("System locked! Wait for 5 seconds...\n");

            // FIFTH PART: THE 5 SECONDS COUNTDOWN INCASE OF TOO MANY INCORRECT ATTEMPTS
            for(int count = 5; count >0; --count){
                printf("%d...",count);
                Sleep(1000);
            }
            userAttempts= 0;
            printf("\nYou can try again now.\n\n");
        }
        printf("ENTER PIN: ");
        scanf("%d",&userInput);
        sprintf(passwordString, "%d", userInput);
        passwordLength = strlen(passwordString);

        // FIRST PART: ENSURING THE PIN IS 4 DIGITS
        if(passwordLength < 4){
            printf("PIN is too short (must be 4 digits)\n");
            continue;
        }else if (passwordLength >4){
            printf("PIN is too long (must be 4 digits)\n");
            continue;
        }
        // SKIPPED THIS FOR PROPER LOGICAL INTEGRATION WITH PART FOUR
        /*
        else{
            printf("PIN is exactly 4 digits\n\n");
        }
        */

        //FORTH PART: CHECKING THE ENTERED PIN AGAINST THE CORRECT ONE AND DISPLAYING REMIANING ATTEMPTS INCASE OF INCORRECT PIN ENTRY
        if(userInput==PIN){
            printf("\n\nACCESS GRANTED\n\n");
            break;
        }else if(userAttempts<2){
            printf("YOU ENTERED AN INCORRECT PIN, %d ATTEMPTS REMAINING\n\n",2-userAttempts);
        }
        userAttempts ++;
    }

    int selectedTask;
    while(true){
        // SECOND PART: DISPLAYING MENU AND READING USER CHOICE
        printf("\nMENU ACTIONS:\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. EXIT\n\n");
        scanf("%d",&selectedTask);

        // THIRD PART: USING SWITCH STATEMENT TO HANDLE USER SELECTION
        switch(selectedTask){
            case 1:
                printf("Access granted. Door unlocked.\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");

        }
        if(selectedTask == 4){
            break;
        }
    }

    return 0;
}
