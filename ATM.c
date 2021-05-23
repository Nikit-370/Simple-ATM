#include <stdio.h>
#include <conio.h>

int main()
{
    char name[50];
    int pin;
    float bal, rembal;
    int wthdrw;
    clrscr();

    printf("Enter Account holder's name:-\n");
    scanf("%[^\n]s", name);
    printf("\n------------------------------------------------------------------------------------");
    printf("\nWelcome to your account %s", name);
    printf("\nAccount number 234***********1\n");

    printf("\nPlease enter your Account balance:-\n");
    scanf("%f", &bal);

    printf("\nEnter the Amount you want to withdraw:-\n");
    scanf("%u", &wthdrw);

    if (bal >= wthdrw)
    {
        printf("\nEnter your 4 digits Pin number:-\n");
        scanf("%u", &pin);
        rembal = bal - wthdrw;
        printf("\nWithdrawl successful.");

        printf("\nRemaining account balance:-\n%0.2f", rembal);
    }
    else
    {
        printf("\nOops!! You don't have sufficient balance to withdraw.");
    }
    printf("\n------------------------------------------------------------------------------------");
    printf("\n\nThank you for using ATM service.");
    return 0;
}
