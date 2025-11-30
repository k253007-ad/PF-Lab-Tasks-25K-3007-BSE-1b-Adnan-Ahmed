#include <stdio.h>
#include <string.h>
#include <time.h>

struct transaction {
    char type[20];
    float amount;
    char date[30];
};

struct account {
    int accNo;
    char name[50];
    char type[20];
    float balance;
    char creationDate[30];
    char lastTransactionDate[30];
    struct transaction history[100];
    int transactionCount;
};

void getDate(char dateStr[]) {
    time_t t = time(NULL);
    struct tm *dt = localtime(&t);
    sprintf(dateStr, "%02d-%02d-%04d", dt->tm_mday, dt->tm_mon + 1, dt->tm_year + 1900);
}

float minBalance(char type[]) {
    if(strcmp(type, "Savings") == 0) return 1000;
    if(strcmp(type, "Current") == 0) return 5000;
    if(strcmp(type, "Fixed") == 0) return 10000;
    return 0;
}

float interestRate(char type[]) {
    if(strcmp(type, "Savings") == 0) return 4;
    if(strcmp(type, "Fixed") == 0) return 7;
    return 0;
}

void createAccount(struct account a[], int i){
    printf("\nEnter Account Number: ");
    scanf("%d", &a[i].accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", a[i].name);

    int choice;
    printf("\nAccount Type:\n1. Savings\n2. Current\n3. Fixed Deposit\nChoose: ");
    scanf("%d", &choice);

    if(choice == 1) strcpy(a[i].type, "Savings");
    else if(choice == 2) strcpy(a[i].type, "Current");
    else strcpy(a[i].type, "Fixed");

    float minBal = minBalance(a[i].type);

    do {
        printf("Enter Initial Deposit (Minimum %.2f): ", minBal);
        scanf("%f", &a[i].balance);
    } while(a[i].balance < minBal);

    getDate(a[i].creationDate);
    strcpy(a[i].lastTransactionDate, a[i].creationDate);

    a[i].transactionCount = 0;

    printf("\nAccount Created Successfully!\n");
}

void addTransaction(struct account *a, char type[], float amount) {
    struct transaction *t = &a->history[a->transactionCount];

    strcpy(t->type, type);
    t->amount = amount;
    getDate(t->date);

    strcpy(a->lastTransactionDate, t->date);

    a->transactionCount++;
}

void deposit(struct account *a){
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    a->balance += amount;
    addTransaction(a, "Deposit", amount);

    printf("\nDeposit Successful!\n");
}

void withdraw(struct account *a){
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if(a->balance - amount < minBalance(a->type)) {
        printf("\nWithdrawal denied! Minimum balance %.2f required.\n", minBalance(a->type));
        return;
    }

    a->balance -= amount;
    addTransaction(a, "Withdrawal", amount);

    printf("\nWithdrawal Successful!\n");
}

void showAccount(struct account a){
    printf("\n===============================");
    printf("\nAccount Number : %d", a.accNo);
    printf("\nName           : %s", a.name);
    printf("\nType           : %s", a.type);
    printf("\nBalance        : %.2f", a.balance);
    printf("\nCreated On     : %s", a.creationDate);
    printf("\nLast Activity  : %s", a.lastTransactionDate);
    printf("\nInterest Rate  : %.2f%%", interestRate(a.type));
    printf("\n===============================\n");
}

void showTransactions(struct account a){
    printf("\nTRANSACTION HISTORY\n");
    printf("=====================\n");

    for(int i=0; i < a.transactionCount; i++){
        printf("%d. %s  %.2f  [%s]\n",
               i+1,
               a.history[i].type,
               a.history[i].amount,
               a.history[i].date
        );
    }
}

int findAcc(struct account a[], int n, int acc){
    for(int i=0;i<n;i++){
        if(a[i].accNo == acc) return i;
    }
    return -1;
}

void loadDefaults(struct account a[], int *n){
    *n = 3;

    strcpy(a[0].name, "Ali");
    a[0].accNo = 1;
    strcpy(a[0].type, "Savings");
    a[0].balance = 5000;
    strcpy(a[0].creationDate, "01-01-2022");
    strcpy(a[0].lastTransactionDate, "01-01-2022");
    a[0].transactionCount = 1;
    strcpy(a[0].history[0].type, "Deposit");
    a[0].history[0].amount = 5000;
    strcpy(a[0].history[0].date, "01-01-2022");

    strcpy(a[1].name, "Sara");
    a[1].accNo = 2;
    strcpy(a[1].type, "Current");
    a[1].balance = 10000;
    strcpy(a[1].creationDate, "15-03-2021");
    strcpy(a[1].lastTransactionDate, "15-03-2021");
    a[1].transactionCount = 1;
    strcpy(a[1].history[0].type, "Deposit");
    a[1].history[0].amount = 10000;
    strcpy(a[1].history[0].date, "15-03-2021");

    strcpy(a[2].name, "Hamza");
    a[2].accNo = 3;
    strcpy(a[2].type, "Fixed");
    a[2].balance = 20000;
    strcpy(a[2].creationDate, "10-10-2020");
    strcpy(a[2].lastTransactionDate, "10-10-2020");
    a[2].transactionCount = 1;
    strcpy(a[2].history[0].type, "Deposit");
    a[2].history[0].amount = 20000;
    strcpy(a[2].history[0].date, "10-10-2020");

    printf("\nLoaded 3 default accounts.\n");
}

int main(){
    struct account a[100];
    int n = 0, choice;

    printf("\nEnter number of accounts (0 for default): ");
    scanf("%d", &n);

    if(n == 0) {
        loadDefaults(a, &n);
    }

    while(1){
        printf("\n========== BANK MENU ==========");
        printf("\n1. Create Account");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. View Account");
        printf("\n5. View Transaction History");
        printf("\n6. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1){
            createAccount(a, n);
            n++;
        }
        else if(choice == 2){
            int acc;
            printf("Enter Account No: ");
            scanf("%d", &acc);

            int index = findAcc(a, n, acc);
            if(index == -1) printf("\nAccount Not Found!\n");
            else deposit(&a[index]);
        }
        else if(choice == 3){
            int acc;
            printf("Enter Account No: ");
            scanf("%d", &acc);

            int index = findAcc(a, n, acc);
            if(index == -1) printf("\nAccount Not Found!\n");
            else withdraw(&a[index]);
        }
        else if(choice == 4){
            int acc;
            printf("Enter Account No: ");
            scanf("%d", &acc);

            int index = findAcc(a, n, acc);
            if(index == -1) printf("\nAccount Not Found!\n");
            else showAccount(a[index]);
        }
        else if(choice == 5){
            int acc;
            printf("Enter Account No: ");
            scanf("%d", &acc);

            int index = findAcc(a, n, acc);
            if(index == -1) printf("\nAccount Not Found!\n");
            else showTransactions(a[index]);
        }
        else if(choice == 6){
            printf("\nThank you for using Bank System!");
            break;
        }
        else {
            printf("\nInvalid Choice!");
        }
    }

    return 0;
}
