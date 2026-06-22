#include <iostream>
#include <string>

using namespace std;
int main()
{
	string item;
	const float tvprice = 799;
	const float refrigeratorprice = 1099;
	const float washerPrice = 899;
	const float dryerPrice = 699;
	const float tax = 0.10;
	float price = 0.0;
	float discount = 0.0;




	cout << "Please enter your items name ";
	cin >> item;

	cout << "Please enter your dicount rate ";
	cin >> discount;

	if (item == "TV")

		price = tvprice - (tvprice * discount) + (tvprice * tax);

	else if (item == "Refrigerator")
		price = refrigeratorprice - (refrigeratorprice * discount) + (refrigeratorprice * tax);

	else if (item == "Washer")
		price = washerPrice - (washerPrice * discount) + (washerPrice * tax);

	else if (item == "Dryer")
		price = dryerPrice - (dryerPrice * discount) + (dryerPrice * tax);

	else
		cout << "Invalid Item";



	cout << " The total price for your " << item << " is  " << price;



	return 0;
}