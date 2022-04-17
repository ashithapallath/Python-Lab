#include <iostream>
#include <iomanip>
using namespace std;


class Employeedetails {
protected:
int emplyeenumber;
public:

Employeedetails(int n) {
emplyeenumber = n;
if (n<=0)
cout<<"Invalid number of people\n";
}
void display() {
cout << "No of employees in marketing team "  << ":"  << emplyeenumber << endl;
}
};

class Teamleads {
protected:
int teamlead_no;
public:

Teamleads(int n) {
teamlead_no = n;
if (n <= 0)
cout << "Invalid number of people\n";
}
void display() {
cout << "No of team heads in marketing team "  << ":"  << teamlead_no << endl;
}
};


class marketing_team :public Employeedetails, public Teamleads {
protected:
int trainee_nof;
public:

marketing_team(int n1, int n2, int n3) :Employeedetails(n1), Teamleads(n2) {
trainee_nof = n3;
}
void display() {
cout << "No of trainees in marketing team "  << ":"  << trainee_nof << endl;
}
};


class office :public marketing_team {
protected:
int totalNoOfemployees, totalNoOfTeamleads, totalNoOfTrainee;
public:

office(int n1, int n2, int n3, int n4, int n5, int n6) :marketing_team(n1, n2, n3) {
totalNoOfemployees = n4;
totalNoOfTeamleads = n5;
totalNoOfTrainee = n6;
}
void display() {
cout << "\n";
cout<<"_____________________WORKERS DETAILS _____________________\n";
cout << "No of employee in the office " <<":" << totalNoOfemployees << endl;
cout << "No of Team heads in the office "  << ":"  << totalNoOfTeamleads << endl;
cout << "No of trainee in the office " << ":"  << totalNoOfTrainee << endl;
}
};

class Company :public office {
int workers;
public:
Company(int n1, int n2, int n3, int n4, int n5, int n6, int n7) :office(n1, n2, n3, n4, n5, n6) {
workers = n7;
}
void display() {
Employeedetails::display();
Teamleads::display();
marketing_team::display();
office::display();
cout << "No of workers in the Company : "  << workers << endl;
}
};


int main() {
cout << "***___________________________ WORKERS DETAILS__________________________***:\n";                                                  
int option;

int employeesAtM, teamleadsAtM, TraineeAtM, totalEmployee, totalTeamleads, totalTrainee, Companyworkers;
cout << "\n";
cout << "Enter the following details : \n";
cout << "\n";
cout << "1)No of employess at management team: " << endl;
cin >> employeesAtM;
cout << "2)No of team leads at management team: " << endl;
cin >> teamleadsAtM;
cout << "3)No of trainee at management team: " << endl;
cin >> TraineeAtM;

cout << "4)No of employess at office: " << endl;
cin >> totalEmployee;
cout << "5)No of team leads at office: " << endl;
cin >> totalTeamleads;
cout << "6)No of trainee in office: " << endl;
cin >> totalTrainee;

cout << "7)No of workers Registered under the Company: " << endl;
cin >> Companyworkers;
Company A(employeesAtM, teamleadsAtM, TraineeAtM, totalEmployee, totalTeamleads, totalTrainee, Companyworkers);
int choice;
cout << "Do you want to display the details\n1.1 for yes\n2.Any other number to exit program" << endl;
cin >> choice;
if (choice == 1) {
A.display();
}


else {


          cout << "Ended as per request " << endl;
          return 0;
    }
    return 0;

}


















