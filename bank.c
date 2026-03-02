#include <stdio.h>
#include <string.h>

#define MAX_TRANSACTIONS 5
#define MAX_USERS 3

typedef struct {
    char name[20];
    int balance;
    int daily_limit;
    int withdrawn_today;
    int transactions[MAX_TRANSACTIONS];
    int txn_count;
} Account;

int can_withdraw(Account account, int amount) {
    if (amount <= 0) {
        printf("? Invalid amount!\n");
        return 0;
    }
    if (amount > account.balance) {
        printf("? Insufficient balance.\n");
        return 0;
    }
    if (amount + account.withdrawn_today > account.daily_limit) {
        printf("? Daily limit exceeded.\n");
        return 0;
    }
    return 1;
}

void process_withdrawal(Account *account, int amount) {
    account->balance -= amount;
    account->withdrawn_today += amount;

    if (account->txn_count < MAX_TRANSACTIONS) {
        account->transactions[account->txn_count++] = amount;
    } else {
        // rotate transactions
        for (int i = 1; i < MAX_TRANSACTIONS; i++)
            account->transactions[i-1] = account->transactions[i];
        account->transactions[MAX_TRANSACTIONS-1] = amount;
    }

    printf("? Withdrawal approved. New balance: %d\n", account->balance);
}

void show_history(Account account) {
    printf("\n--- Last %d Transactions ---\n", account.txn_count);
    for (int i = 0; i < account.txn_count; i++) {
        printf("%d. %d\n", i+1, account.transactions[i]);
    }
    if (account.txn_count == 0) printf("No transactions yet.\n");
    printf("----------------------------\n");
}

void menu(Account *account) {
    int choice, amount;

    do {
        printf("\n==== %s's Account ====\n\n", account->name);
        printf("1. Check balance\n");
        printf("2. Withdraw\n");
        printf("3. Show last transactions\n");
        printf("0. Exit\n\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Balance: %d | Withdrawn today: %d | Daily limit: %d\n",
                       account->balance, account->withdrawn_today, account->daily_limit);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (can_withdraw(*account, amount))
                    process_withdrawal(account, amount);
                break;
            case 3:
                show_history(*account);
                break;
            case 0:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 0);
}

int main() {
    Account users[MAX_USERS] = {
        {"Achille", 50000, 20000, 0, {0}, 0},
        {"Rugema", 75000, 30000, 0, {0}, 0},
        {"Ishya", 60000, 25000, 0, {0}, 0}
    };

    int user_choice;
    printf("Select user:\n");
    for (int i = 0; i < MAX_USERS; i++)
        printf("%d. %s\n", i+1, users[i].name);
    printf("Choice: ");
    scanf("%d", &user_choice);

    if (user_choice < 1 || user_choice > MAX_USERS) {
        printf("Invalid user selection.\n");
        return 0;
    }

    menu(&users[user_choice-1]);

    return 0;
}
