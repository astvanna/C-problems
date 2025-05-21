#include <stdio.h>
struct BankAccount {
	int accountNumber;
	char holderName[50];
	float balance;
};

void deposit(struct BankAccount *account, float amount) {
	account->balance += amount;
	printf("Deposited %.2f. New balance: %.2f\n", amount, account->balance);
}

void withdraw(struct BankAccount *account, float amount) {
	if (amount > account->balance) {
		printf("Insufficient funds!\n");
	} else {
		account->balance -= amount;
		printf("Withdrew %.2f. New balance: %.2f\n", amount, account->balance);
	}
}

void displayAccount(struct BankAccount account) {
	printf("\nAccount Details:\n");
	printf("Account Number: %d\n", account.accountNumber);
	printf("Holder Name: %s\n", account.holderName);
	printf("Balance: %.2f\n", account.balance);
}
