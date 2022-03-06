#include<iostream>
using namespace std;
const int m = 50;
class Items {
	int ItemCode[m]; 
	float ItemPrice[m];
	int count;
public:
	void CNT(void) { count = 0; }
	void getItem(void);
	void displaySum(void);
	void remove(void);
	void displayItems(void);

};
void Items::getItem(void)
{
	cout << "Enter Item Code:";
	cin >> ItemPrice[count];

	cout << " Enter Item cost:";
	cin >> ItemPrice[count];
	count++;
}
void Items::displaySum(void)
{
	float sum = 0;
	for (int i = 0; i < count; i++)
		sum = sum + ItemPrice[i];
	cout << "\nTotal value:" << sum << "\n";

}
void Items::remove(void)
{
	int a;
	cout << "Enter Item Code:";
	cin >> a;

	for (int i = 0; i < count; i++)
		if (ItemCode[i] == a)
			ItemPrice[i] = 0;
}
void Items::displayItems(void)
{
	cout << "\nCode price\n";
	for (int i = 0; i < count; i++)
	{
		cout << "\n " << ItemCode[i];
		cout << "    " << ItemPrice[i];
	}
	cout << "\n";
}
int main()
{
	Items order;
	order.CNT();
	int x;
	do
	{
		cout << "\nYou can do the following;"
			<< "Enter appropriate number\n";
		cout << "\n1:Add an Item";
		cout << "\n2:Display total value";
		cout << "n3\:Delete an Item";
		cout << "n4\:Display all items";
		cout << "\n5:Quit";
		cout << "\n\nWhat is your option?";

		cin >> x;
		switch (x)
		{ 
		case 1:order.getItem(); break;
		case 2:order.displaySum(); break;
		case 3:order.remove(); break;
		case 4:order.displayItems(); break;
		case 5:break;
		default:cout << "Error in input:try again\n";
		}
	} while (x != 5);
	return 0;
}