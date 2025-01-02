#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createAccount()
{
    srand(time(NULL));
    char name;
    int mobile_no, aadhar;
    int acc_no = (rand() % 9999999999 - 999999 + 1) + 999999;

    printf("Account holder name: ");
    scanf("%c", &name);
    printf("Enter mobile number: ");
    scanf("%d", &mobile_no);
    printf("Enter aadhar number: ");
    scanf("%d", &aadhar);
    
}

int main()
{
    int choice;

    printf("----------Welcome to AU Bank----------");
    printf("\nChoose the function you want to operate with:\n");
    printf("1---> Create a new Account");
    printf("2---> Deposit Money in your Account");
    printf("3---> Withdraw Money from your Account");
    printf("4---> Check account details");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        createAccount();
        break;
    }

    case 2:
    {

        break;
    }

    case 3:
    {

        break;
    }

    case 4:
    {

        break;
    }

    default:
    {
        printf("Choose from 1 to 4");
        break;
    }
    }
    return 0;
}