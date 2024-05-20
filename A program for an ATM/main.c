#include <stdio.h>

float balance = 10000.00;

int authenticate(int pin);
float requestAmount();
void deposit();
void withDraw(float amount);
void transfer();

int main() {
    int pin, tries = 0;

start:
    printf("WELCOME TO ABC BANK\nEnter your four digit pin\n");
    scanf("%d", &pin);

menu:
    if (authenticate(pin) && tries < 4) {
        int menu_item;
        printf("Select an option\n1. Check Balance\n2. Withdrawal\n3. Deposit\n4. Transfer\n");
        scanf("%d", &menu_item);

        switch(menu_item){
            case 1: printf("%g\n", balance); break;
            case 2: withDraw(requestAmount()); break;
            case 3: deposit(); break;
            case 4: transfer(); break;
            default: printf("Invalid option\n");
        }
    } else {
        printf("Invalid pin\n");
        tries++;
        if (tries == 4) {
            printf("Maximum pin tries exceeded.\n");
            return 0;
        }
        printf("Tries left: %d\n", 4-tries);
        goto start;
    }

    int response;
    printf("Would you like to perform another transaction?\n1. Yes\n2. No\n");
    scanf("%d", &response);
    if(response == 1) {
        goto menu;
    }

    printf("Thank you for banking with us\n");
    return 0;
}

int authenticate(int pin) {
    // Hardcoded pin for demo purposes
    int correct_pin = 1634;
    if (pin == correct_pin) {
        return 1;
    }
    return 0;
}

float requestAmount() {
    float amount;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    return amount;
}

void deposit() {
    float amount = requestAmount();
    balance += amount;
    printf("Deposit successful\n");
}

void withDraw(float amount) {
    if (amount > balance) {
        printf("Insufficient balance\n");
        return;
    }
    balance -= amount;
    printf("Withdrawal successful\n");
}

void transfer() {
    float amount = requestAmount();
    printf("Enter the recipient's account number: ");
    int recipient;
    scanf("%d", &recipient);
    withDraw(amount);
    printf("Transfer successful\n");
}
