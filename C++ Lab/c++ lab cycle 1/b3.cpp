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
    string a;int b;string c;float d;
    cout << "Enter name and your account type :\n";
    cin >> a >> c;
    cout << "\n\n";
    cout << "Please enter your account number :";
    cin >> b;
    cout << "\n";
    cout << "Please enter your account balance : ";
    cin >> d;
    if (d < 500) {
        cout << "Invalid amount";
    }
    else 
    cout << "\n\n";
    name = a;
    acc = b;
    type = c;
    balance = d;
}

void BankAccount::deposit() {
    cout << "Enter the depositing amount :";
    float a;
    cin >> a;
    balance = balance + a;
    cout << "DEPOSITION SUCCESSFULL";
    cout << "\nAccount main balance : " << balance << endl;
}

void BankAccount::withdraw() {
    cout << "Enter the withdrawing amount :";
    float a;
    cin >> a;
    if (balance >= a and a>=500 ) {
        balance = balance - a;
        cout << "Amount withdrawn successfully";
        cout << "\nBalance amount : " << balance << endl;
    }
    else { cout << "Your balance :" << balance << "\n!!!INSUFFICIENT BALANCE!!!\n\n"; }
}

void BankAccount::display() {
    cout << "\n_________ACCOUNT STATEMENT_________" << endl;
    cout << "\n" << "Name : " << name << "\n" << "Account number : " << acc << "\n" << "Account type : " << type << "\n";
    if (balance >= 500) {
        cout << "Balance Amount : " << balance;
    }
    else { cout << "INVALID AMOUNT!!!.BALANCE MUST BE MINIMUM Rs.500 TO START AN ACCOUNT.DEPOSIT VALID AMOUNT."; }
}
int main() {
    BankAccount acc1;
    string user;
    while (true) {
        cout << "\n\n";
        cout << "\n *WELCOME * ";
        cout << "\n ##############################";
        cout << "\n1) Adding new account";
        cout << "\n2) Withdraw";
        cout << "\n3) Deposit";
        cout << "\n4) Balance enquiry";
        cout << "\n5) Account statement";
        cout << "\nEnter 0 to stop the program \n\n";

        cout << "\n\nEnter your choice : ";cin >> user;
        if (user == "1") { acc1.input(); }
        else if (user == "2") { acc1.withdraw(); }
        else if (user == "3") { acc1.deposit(); }
        else if (user == "4") { acc1.display(); }
        else if (user == "5") { acc1.display(); }

        else if (user == "0") { exit(0); }
        else if (user != "0") { cout << "You have entered a wrong option \n\n"; }

        string user;
        cout << "\n\nDO YOU WANT TO CONTINUE ?PRESS 'y' IF YES OR ANY OTHER KEY TO EXIT ";
        cin >> user;
        if (user == "y")
            continue;
        else
            return false;
    }
}

