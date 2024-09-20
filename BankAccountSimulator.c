#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Account structure
struct Account 
{
    int accountNumber;
    char name[100];
    float balance;
};

// Creating an Account
struct Account creatAccount(int accountNumber, char name[], float initialDeposit)
{
    struct Account newAccount;
    newAccount.accountNumber = accountNumber;
    strcpy(newAccount.name, name);
    newAccount.balance = initialDeposit;
    return newAccount;
}

// Depositing Money
void deposit(struct Account *account, float amount)
{
    if (amount > 0)
    {
        account->balance += amount;
        printf("Successfully deposited $%.2f. New balance $%.2f\n", amount, account->balance);
    }
    else 
    {
        printf("Invalid deposit amount.\n");
    }
}