#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int acc;
    string type;
    float balance;
public:
    void input();
    void deposit();
    void withdraw();
    void display();
};

void BankAccount::input() {
    string a; int b; string c; float d;
    cout << "enter your name and account type :\n";
    cin >> a >> c;
    cout << "\n\n";
    cout << "enter your account number :";
    cin >> b;
    cout << "\n\n";
    cout << "enter your balance amount";
    cin >> d;
    cout << "\n\n";
    name = a;
    acc = b;
    type = c;
    balance = d + 500.00;
}

void BankAccount::deposit() {
    cout << "Enter the depositing amount :";
    float a;
    cin >> a;
    balance = balance + a;
}

void BankAccount::withdraw() {
    cout << "Enter the withdrawing amount :";
    float a;
    cin >> a;
    if (balance >= a) {
        balance = balance - a;
    }
    else { cout << "your balance :" << balance << "\nyou can withdraw that amount\n\n"; }
}

void BankAccount::display() {
    cout << name << "\n" << acc << "\n" << type << "\n" << balance << "\n";
}

main() {
    BankAccount acc1;
    string user;
    while (user != "exit") {
        cout << "\na) adding new account";
        cout << "\nb) withdraw";
        cout << "\nc) deposit";
        cout << "\nd) balance enquiry";
        cout << "\ne) account statement";
        cout << "\nenter exit to stop the program \n\n";

        cout << "\n\nenter your choice : "; cin >> user;
        if (user == "a") { acc1.input(); }
        else if (user == "b") { acc1.withdraw(); }
        else if (user == "c") { acc1.deposit(); }
        else if (user == "d") { acc1.display(); }
        else if (user == "e") { acc1.display(); }
        else if (user != "exit") { cout << "you have entered a wrong opt \n\n"; }
    }
    return 0;
}