#include <stdio.h>
struct Bank
{
    int accNo;
    char name[50];
    float balance;
};
struct Bank customer;
void createAccount()
{
    printf("\nEnter Account Number: ");
    scanf("%d", &customer.accNo);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", customer.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &customer.balance);
    printf("\nAccount Created Successfully!\n");
}
void deposit()
{
    float amount;
    printf("\nEnter Amount to Deposit: ");
    scanf("%f", &amount);
    customer.balance += amount;
    printf("Amount Deposited Successfully!\n");
    printf("Current Balance: %.2f\n", customer.balance);
}
void withdraw()
{
    float amount;
    printf("\nEnter Amount to Withdraw: ");
    scanf("%f", &amount);
    if (amount <= customer.balance)
    {
        customer.balance -= amount;
        printf("Withdrawal Successful!\n");
        printf("Remaining Balance: %.2f\n", customer.balance);
    }
    else
    {
        printf("Insufficient Balance!\n");
    }
}
void display()
{
    printf("\n------ Account Details ------\n");
    printf("Account Number : %d\n", customer.accNo);
    printf("Account Holder : %s\n", customer.name);
    printf("Balance        : %.2f\n", customer.balance);
}
int main()
{
    int choice;
    do
    {
        printf("\n===== Bank Account System =====");
        printf("\n1. Create Account");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Display Account");
        printf("\n5. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }
    } 
    while (choice != 5);
    return 0;
}