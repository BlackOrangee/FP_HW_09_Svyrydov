#include <iostream>
using namespace std;

//Task 1. The user enters a number.Determine the number of digits in this number, calculate their sumand the arithmetic mean.Determine the number of zeros in this number.
//Communication with the user can be organized through the menu.

int main()
{
	int num = 0, menu = 0, zeros_num = 0;
	double digits_num = 0, digits_sum = 0, mean = 0;
	do
	{
		cout << "\n\n\tEnter the number\n\t0 -- Exit\n\n\t";	// Message to user
		cin >> num;		// Number input
		
		if (num != 0)	// Need for exit from program 
		{
			int i = num, c = 0;
			
			while (i != 0)
			{
				digits_num++;	// Calculating number of digits

				c = i % 10;		// Variable to get the last number
				if (c == 0)
				{
					zeros_num++;// Calculating number of zeros
				}
				digits_sum += c;// Calculate sum of digits
				i /= 10;		// Truncates the entered number
			}

			mean = digits_sum / digits_num;	// Calculate the arithmetic mean

			do
			{
				/*	Menu
				*
				*	0 --Change the number
				*	1 --Determine the number of digits
				*	2 --Calculate sum of digits
				*	3 --Calculate the arithmetic mean
				*	4 --Determine the number of zeros in this number
				*/

				if (menu == 0)	//Menu display (first time)
				{
					cout << "\n\n\t0 -- Change the number\n\t1 -- Determine the number of digits\n\t2 -- Calculate sum of digits\n\t3 -- Calculate the arithmetic mean\n\t4 -- Determine the number of zeros in this number\n\n\t";

				}
				cin >> menu; // Input user choice

				switch (menu)
				{
				case 1:		// Output the number of digits and menu

					cout << "\n\tThe number of digits is: " << digits_num;
					cout << "\n\n\t0 -- Change the number\n\t1 -- Determine the number of digits\n\t2 -- Calculate sum of digits\n\t3 -- Calculate the arithmetic mean\n\t4 -- Determine the number of zeros in this number\n\n\t";
					break;
				case 2:		// Output the sum of digits and menu

					cout << "\n\tThe sum of digits is: " << digits_sum;
					cout << "\n\n\t0 -- Change the number\n\t1 -- Determine the number of digits\n\t2 -- Calculate sum of digits\n\t3 -- Calculate the arithmetic mean\n\t4 -- Determine the number of zeros in this number\n\n\t";
					break;
				case 3:		// Output the arithmetic mean and menu

					cout << "\n\tThe arithmetic mean is: " << mean;
					cout << "\n\n\t0 -- Change the number\n\t1 -- Determine the number of digits\n\t2 -- Calculate sum of digits\n\t3 -- Calculate the arithmetic mean\n\t4 -- Determine the number of zeros in this number\n\n\t";
					break;
				case 4:		// Output the number of zeros and menu

					cout << "\n\tThe number of zeros is: " << zeros_num;
					cout << "\n\n\t0 -- Change the number\n\t1 -- Determine the number of digits\n\t2 -- Calculate sum of digits\n\t3 -- Calculate the arithmetic mean\n\t4 -- Determine the number of zeros in this number\n\n\t";
					break;
				default:

					break;
				}
			} while (menu != 0);
		}
	} while (num != 0);
}