#include <stdio.h>

void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    float balance = 1000.0;
    int choice;

    while (1) {
        printf("\n===== ATM SYSTEM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void checkBalance(float balance) {
    printf("\nYour current balance is: ₹%.2f\n", balance);
}

float deposit(float balance) {
    float amount;
    printf("\nEnter the amount to deposit: ₹");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("₹%.2f deposited successfully!\n", amount);
    } else {
        printf("Invalid amount. Deposit failed.\n");
    }

    return balance;
}

float withdraw(float balance) {
    float amount;
    printf("\nEnter the amount to withdraw: ₹");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("₹%.2f withdrawn successfully!\n", amount);
    } else if (amount > balance) {
        printf("Insufficient balance! Withdrawal failed.\n");
    } else {
        printf("Invalid amount. Withdrawal failed.\n");
    }

    return balance;
}
