#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double OriginalPrice, MarkUp, SalesTax, FinalSale;

	cout << "Please enter the item price:" << endl;
	cin >> OriginalPrice;

	cout << "Please enter the markup percent:" << endl;
	cin >> MarkUp;

	cout << "Please enter the sales tax:" << endl;
	cin >> SalesTax;

	FinalSale = (OriginalPrice + (OriginalPrice * MarkUp)) + (OriginalPrice + (OriginalPrice * MarkUp)) * SalesTax;

	cout << "Item Price: $" << OriginalPrice << endl;

	cout << "Mark Up: " << MarkUp * 100 << "%" << endl;

	cout << "Sales Tax: " << SalesTax * 100 << "%" << endl;

	cout << "Final Sale Price: $" << fixed << setprecision(2) << FinalSale << endl;

	return 0;
}