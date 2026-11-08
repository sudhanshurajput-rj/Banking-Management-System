
#include <iostream>
using namespace std;

// Parent Class
class Account {
public:
    string name;
    int accountNumber;
    double balance;

    // Account Creation
    void createAccount() {
        cout << "\nEnter Customer Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!" << endl;
    }

    // Deposit Money
    void deposit() {
        double amount;

        cout << "\nEnter Deposit Amount: ";
        cin >> amount;

        if (amount > 0) {
            balance = balance + amount;
            cout << "Money Deposited Successfully!" << endl;
        }
        else {
            cout << "Invalid Amount!" << endl;
        }
    }

    // Withdraw Money
    void withdrawal() {
        double amount;

        cout << "\nEnter Withdrawal Amount: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Money Withdrawn Successfully!" << endl;
        }
        else {
            cout << "Insufficient Balance or Invalid Amount!" << endl;
        }
    }

    // Display Account Details
    void displayAccount() {
        cout << "\n========== Account Details ==========" << endl;

        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

// Child Class 1
class SavingsAccount : public Account {
public:
    void interest() {
        cout << "\nSavings Account Interest: 5%" << endl;
    }
};

// Child Class 2
class CurrentAccount : public Account {
public:
    void overdraft() {
        cout << "\nOverdraft Facility Available!" << endl;
    }
};

// Main Function
int main() {

    int choice;

    cout << "===== BANKING MANAGEMENT SYSTEM =====" << endl;

    cout << "\n1. Savings Account";
    cout << "\n2. Current Account";

    cout << "\n\nEnter Your Choice: ";
    cin >> choice;

    if (choice == 1) {

        SavingsAccount s1;

        s1.createAccount();
        s1.deposit();
        s1.withdrawal();
        s1.displayAccount();
        s1.interest();

    }

    else if (choice == 2) {

        CurrentAccount c1;

        c1.createAccount();
        c1.deposit();
        c1.withdrawal();
        c1.displayAccount();
        c1.overdraft();

    }

    else {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}