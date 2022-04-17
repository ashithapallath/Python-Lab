#include <iostream>
using namespace std;
const int m = 50;
class ITEMS
{
int ItemCode[m];
float ItemPrice[m];
int count;
string ItemName[m];
int ItemQuantity[m];
public:
void CNT(void){count = 0;}
void getItem(void);
void displaySum(void);
void remove(void);
void displayItems(void);
};
void ITEMS::getItem(void)
{
cout << "Enter item code :";
cin >> ItemCode[count];

cout<<"Enter item name :";
cin>>ItemName[count];

cout<<"Enter item quantity(in KG or in number) :";
cin>>ItemQuantity[count];


cout << "Enter item price : ";
cin >>ItemPrice[count];
count++;
}
void ITEMS::displaySum(void) {
float sum = 0;
for (int i = 0;i < count;i++)
sum = sum + ItemPrice[i]*ItemQuantity[i];
cout << "\nTotal value : " << sum << "\n";
}
void ITEMS::remove(void) {
int a;
cout << "Enter item code : ";
cin >> a;

for (int i = 0;i < count;i++)
if (ItemCode[i] == a)
ItemPrice[i] = 0;
}
void ITEMS::displayItems(void) {
cout << "\nCode price Name  Quantity\n";
for (int i = 0;i < count;i++) {
cout << "\n" << ItemCode[i];
cout << "  " << ItemPrice[i];
cout<< "   " << ItemName[i];
cout<< "         " << ItemQuantity[i];
}
cout << "\n";
}
int main() {
ITEMS order;
order.CNT();
int x;
do
{

cout <<"\nSelect what you want : "
<< "Enter appropriate number from the following: \n ";
cout << "**************************************************************************\n";
cout << "\n1:Add an item";
cout << "\n2:Display  total value";
cout << "\n3:Delete an item";
cout << "\n4:Display all items";
cout << "\n5:Exit";

cout << "\n\n What is your choice?";

cin >> x;
switch (x){
case 1: order.getItem();
break;
case 2: order.displaySum();
break;
case 3: order.remove();
break;
case 4: order.displayItems();
break;
case 5:
break;
default:cout << "Enter a valid choice";
}
} while (x != 5);
return 0;
}

