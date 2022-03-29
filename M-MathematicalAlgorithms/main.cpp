#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;


int main()
{
	string price = "";
  	string discount;
	
	// boolen variable for checking whether input string is a number or not.
	bool isDouble = false;

	// Counter to count digits in the input 
	int numberCounter = 0,
	// Counter for counting the decimal points in the input
	decimalCounter = 0;

	double convertedPrice = 0, convertedDiscount = 0;

	do 
	{
		cout << "Please, Enter the price: ";
		// Getting the input from the user
		getline (cin, price);
		// Checking whether the input is a valid number or not (positive number)
		for (int i = 0; i < price.size(); i++)
		{
			// Counting the digits in the input
			if (isdigit (price[i]))
				numberCounter++;
			// Counting the decimal points in the input 	
			else if (price[i] == '.')
				decimalCounter++;				
		}
		// If there is just one decimal point, increment numberCounter by one to check it with the length of the string
		if (decimalCounter == 1)
			numberCounter++;

		// If the numbercounter is equal to the string length
		if (numberCounter == price.size())
		{
			// Checks whether it is just a blank string or just a decimal point OR not.
			if (price == "" || price == ".")
				isDouble = false;
			// Converting the string to double data type and store the double number in convertedPrice	
			else
			{	
				stringstream str_stream_object (price);
				str_stream_object >> convertedPrice;
				// turn isdouble to true to exit the loop
				isDouble = true;
			}	

		}
		// Else reassign variables to the primary value then retake the input from the user
		else
		{
			numberCounter = 0;
			decimalCounter = 0;
		}

	// Redoing this if the number was negative or it is not a number.
	} while (isDouble == false); 

	// Reassign variables to the primary value then take the second input from the user
	numberCounter = 0;
	decimalCounter = 0;
	isDouble = false;

  
	do 
	{
		cout << "Please, Enter the discount (like this 25% or just 25): ";

		cin.ignore(0);
		getline(cin, discount);

		// removing the spaces from the text to the end of it, then returning a pointer to the beginning of the removed spaces
		auto removed = remove(discount.begin(), discount.end(), '%');
		// Erasing the spaces from the end of the text
		discount.erase(removed, discount.end());

		// Checking whether the input is a valid number or not (positive number)
		for (int i = 0; i < discount.size(); i++)
		{
			// Counting the digits in the input
			if (isdigit (discount[i]))
				numberCounter++;
			// Counting the decimal points in the input 	
			else if (discount[i] == '.')
				decimalCounter++;				
		}
		// If there is just one decimal point, increment numberCounter by one to check it with the length of the string
		if (decimalCounter == 1)
			numberCounter++;

		// If the numbercounter is equal to the string length
		if (numberCounter == discount.size())
		{
			// Checks whether it is just a blank string or just a decimal point OR not.
			if (discount == "" || discount == ".")
				isDouble = false;
			// Converting the string to double data type and store the double number in convertedPrice	
			else
			{	
				stringstream str_stream_object (discount);
				str_stream_object >> convertedDiscount;
				// turn isdouble to true to exit the loop
				isDouble = true;
			}	

		}
		// Else reassign variables to the primary value then retake the input from the user
		else
		{
			numberCounter = 0;
			decimalCounter = 0;
		}

	// Redoing this if the number was negative or it is not a number.
	} while (isDouble == false); 


	double finalPrice = convertedPrice - ((convertedDiscount / 100) * convertedPrice);

	cout << "Price after discount: "<< finalPrice;
	
}
