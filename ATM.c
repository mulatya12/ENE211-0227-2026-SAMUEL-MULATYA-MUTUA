#include <stdio.h>

// Global account balance
float balance = 5000.00;

// Function 1: Login
int login()
{
    int storedPIN = 1234;
    int enteredPIN;
    int attempts = 0;

    while (attempts < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == storedPIN)
        {
            printf("Login successful!\n");
            return 1;
        }
        else
        {
            printf("Incorrect PIN!\n");
            attempts++;
        }
    }

    printf("Access denied!\n");
    return 0;
}

// Function 2: Check balance
void checkBalance()
{
    printf("Your current balance is: %.2f\n", balance);
}

// Function 3: Deposit money
void deposit(float amount)
{
    if (amount > 0)
    {
        balance = balance + amount;

        printf("Deposit successful!\n");
        printf("New balance: %.2f\n", balance);
    }
    else
    {
        printf("Invalid deposit amount!\n");
    }
}

// Function 4: Withdraw money
void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid withdrawal amount!\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance!\n");
    }
    else
    {
        balance = balance - amount;

        printf("Withdrawal successful!\n");
        printf("New balance: %.2f\n", balance);
    }
}

// Function 5: Display ATM menu
void displayMenu()
{
    printf("\n============================\n");
    printf("      WELCOME TO OUR ATM\n");
    printf("============================\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("============================\n");
    printf("Enter your choice: ");
}

// Main function
int main()
{
    int choice;
    float amount;

    printf("WELCOME TO THE ATM SYSTEM\n");

    // Check login
    if (login() == 1)
    {
        do
        {
            displayMenu();
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    checkBalance();
                    break;

                case 2:
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    deposit(amount);
                    break;

                case 3:
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    withdraw(amount);
                    break;

                case 4:
                    printf("Thank you for using our ATM!\n");
                    break;

                default:
                    printf("Invalid choice! Try again.\n");
            }

        } while (choice != 4);
    }

    return 0;
}
