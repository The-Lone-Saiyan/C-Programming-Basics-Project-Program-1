#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double OriginalPrice, MarkUp, SalesTax, FinalSale;
	OriginalPrice = 99;
	MarkUp = .6;
	SalesTax = .0525;
	FinalSale = (OriginalPrice + (OriginalPrice * MarkUp)) + (OriginalPrice + (OriginalPrice * MarkUp)) * SalesTax;

	cout << "Please enter the item price:" << endl;
	cin >> OriginalPrice;

	cout << "Item Price: $" << OriginalPrice << endl;

	cout << "Mark Up: " << MarkUp * 100 << "%" << endl;

	cout << "Sales Tax: " << SalesTax * 100 << "%" << endl;

	cout << "Final Sale Price: $" << FinalSale << endl;

	cout << FinalSale << endl;

	return 0;
}