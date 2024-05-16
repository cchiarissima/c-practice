// creditLimitCalc.
// Determine whether credit limit has been exceeded

#include <stdio.h>
#include <stdbool.h>

int main() {
    int account = 0, prevAccount = 0;
    bool runCycle = true;
    float initialBalance, totalItems, totalCredit, creditLimit, finalBalance;

    while (runCycle) {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account);

        if (account >= 0) {
            prevAccount = account;

            printf("Enter credit limit: ");
            scanf("%f", &creditLimit);
            printf("Enter beginning balance: ");
            scanf("%f", &initialBalance);
            printf("Enter total charges: ");
            scanf("%f", &totalItems);
            printf("Enter total credits: ");
            scanf("%f", &totalCredit);
        } // end if
        else {
            account = prevAccount;
            runCycle = false;
        } // end else
    } // end while

    //printf("Account: %d\nBalance entered: %f\nCharges entered: %f\nCredits entered: %f\nCredit limit: %f", account, initialBalance, totalItems, totalCredit, creditLimit);

    finalBalance = initialBalance + totalItems - totalCredit;

    if (finalBalance < creditLimit) {
        printf("Account: %d\nCredit limit: %.2f\nBalance: %.2f\n", prevAccount, creditLimit, finalBalance);
        puts("Credit limit exceeded.");
    } // end if
    else {
        printf("Account: %d\nCredit limit: %.2f\nBalance: %.2f\n", prevAccount, creditLimit, finalBalance);
        puts("Credit limit NOT exceeded.");
    } // end else

} // end function main
