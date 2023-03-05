//	Display the calendar for the selected month,
//	taking into account the indicated number of the day of the week for the beginning of the month.

#include <iostream>
using namespace std;

int main()
{
	unsigned int month = 0, week_day = 0, day = 1, month_days = 0;

	do
	{
		cout << "\n\n\tEnter the month number (1 - 12): ";	cin >> month;	// Month input
	} while (month > 12);	// if user enter incorrect data yt be asked again
	do
	{
		cout << "\tEnter the day number of week (1 - 7) when that month started: ";	cin >> week_day; // Input day of week
	} while (week_day > 7);	// if user enter incorrect data yt be asked again
	
	if (month == 1)			//* Output current month and assign the corresponding number of days
	{
		month_days = 31;
		cout << "\n\n\t\t\t\tJanuary";
	}
	else if (month == 2)	//*
	{
		month_days = 28;
		cout << "\n\n\t\t\t\tFebruary";
	}
	else if (month == 3)	//*
	{
		month_days = 31;
		cout << "\n\n\t\t\t\tMarch";
	}
	else if (month == 4)	//*
	{
		month_days = 30;
		cout << "\n\n\t\t\t\tApril";
	}
	else if (month == 5)	//*
	{
		month_days = 31;
		cout << "\n\n\t\t\t\tMay";
	}
	else if (month == 6)	//*
	{
		month_days = 30;
		cout << "\n\n\t\t\t\tJune";
	}
	else if (month == 7)	//*
	{
		month_days = 31;
		cout << "\n\n\t\t\t\tJuly";
	}
	else if (month == 8)	//*
	{
		month_days = 31;
		cout << "\n\n\t\t\t\tAugust";
	}
	else if (month == 9)	//*
	{
		month_days = 30;
		cout << "\n\n\t\t\t\tSeptember";
	}
	else if (month == 10)	//*
	{
		month_days = 31;
		cout << "\n\n\t\t\t\tOctober";
	}
	else if (month == 11)	//*
	{
		month_days = 30;
		cout << "\n\n\t\t\t\tNovember";
	}
	else if (month == 12)	//*
	{
		month_days = 31;
		cout << "\n\n\t\t\t\tDecember";
	}

	cout << "\n\n\tMo\tTu\tWe\tTh\tFr\tSa\tSu\n";	// Print days manes

	for (int c = 0; c < 6; c++) // Сolumns
	{
		for (int i = 1; i < 8; i++)	// lines
		{
			if ((i < week_day) && (c == 0))	// Outputs gaps for missing days
			{
				cout << "\t_ ";
			}
			else if (day <= month_days)		// Outputs days
			{
				cout << "\t" << day;
				day++;
			}
				
			

		}
		cout << "\n";
	}
}