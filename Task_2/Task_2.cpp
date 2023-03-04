// Task 2. Write a program that displays a chessboard with a given cell size on the screen.
//

#include <iostream>
using namespace std;

int main()
{
	int cell_size, board_size, menu = 0;
	char cell_filled = '|', cell_empty = '_';	// Default symbols
		 
	cout << R"(
	 ||||||| ||| ||| ||||||| ||||||| ||||||| |||||||  ||||||| ||||||| ||||||||  ||||||  
	 |     | | | | | |     | |     | |     | |     |  |     | |     | |      |  |    || 
	 | ||||| | | | | | ||||| | ||||| | ||||| | ||| |  | ||| | | ||| | | |||| |  | ||  | 
	 | |     | | | | | |     | |     | |     | | | |  | | | | | | | | | |  | |  | | | | 
	 | |     | ||| | | ||||| | ||||| | ||||| | ||| || | | | | | ||| | | |||| |  | | | | 
	 | |     |     | |     | |     | |     | |      | | | | | |     | |      |  | | | | 
	 | |     | ||| | | ||||| ||||| | ||||| | | |||| | | | | | | ||| | | ||| ||  | | | | 
	 | |     | | | | | |         | |     | | | |  | | | | | | | | | | | | | |   | | | | 
	 | ||||| | | | | | ||||| ||||| | ||||| | | |||| | | ||| | | | | | | | | ||| | ||  | 
	 |     | | | | | |     | |     | |     | |      | |     | | | | | | | |   | |    || 
	 ||||||| ||| ||| ||||||| ||||||| ||||||| |||||||| ||||||| ||| ||| ||| ||||| ||||||  
                                                                               
                                                                            
	 ||||||| ||||||| |||     ||| ||||||| ||||||||  ||||||| ||||||| ||||||| ||||||||  
	 |     | |     | | ||||| | | |     | |      |  |     | |     | |     | |      |  
	 | ||||| | ||||| |     | | | | ||||| | |||| |  | ||| | ||| ||| | ||| | | |||| |  
	 | |     | |     | ||| | | | | |     | |  | |  | | | |   | |   | | | | | |  | |  
	 | |     | ||||| | | | | | | | ||||| | |||| |  | ||| |   | |   | | | | | |||| |  
	 | | ||| |     | | | | | | | |     | |      |  |     |   | |   | | | | |      |  
	 | | | | | ||||| | | | | | | | ||||| | ||| ||  | ||| |   | |   | | | | | ||| ||  
	 | | | | | |     | | | ||| | | |     | | | |   | | | |   | |   | | | | | | | |   
	 | ||| | | ||||| | | |     | | ||||| | | | ||| | | | |   | |   | ||| | | | | ||| 
	 |     | |     | | | ||||| | |     | | | |   | | | | |   | |   |     | | | |   | 
	 ||||||| ||||||| |||     ||| ||||||| ||| ||||| ||| |||   |||   ||||||| ||| |||||)";		// Programm logo

	//// Comunication with user
	cout << "\n\n\tEnter the size of one cell in characters (recommended 2 or 3 characters): ";	cin >> cell_size;	// Input cell size			
	cout << "\tEnter the size of board (in cells): "; cin >> board_size;	// Input board size
	cout << "\tStandart cell symbols is:\n\n\t\"|\" for one character of one filled cell\n\t\"_\" for one character of one empty cell";		// Show standart symbols
	cout << "\n\n\tDo you want to change cell symbols?\n\n\t0 -- Nope\n\t1 -- Yes\n\t";		// Request to change symbols
	
	do
	{
		cin >> menu;	// Answer to request

		if (menu == 1)	// Changing process
		{
			cout << "\n\tEnter new character for filled cell => "; cin >> cell_filled;	// Input filed symbol
			cout << "\tEnter new character for empty cell => "; cin >> cell_empty;		// Input emty symbol
			menu = 0;	// Exit
		}
		else if (menu != 0)	// if the user gives incorrect answer, menu shows again
		{
			cout << "\n\n\tDo you want to change cell symbols?\n\n\t0 -- Nope\n\t1 -- Yes\n\t";
		}

	} while (menu != 0);// Exit if process completed or changing not choised

	for (int down = 0; down < board_size; down++)	//	Down size
	{
		cout << "\n\t";

		if (down % 2)	// Show even lines
		{
			for (int side = 0; side < board_size; side++)	// Side size
			{
				if (side % 2)	// Combinate felled cells and ampty 
				{
					for (int cell = 0; cell < cell_size; cell++)	// Make felled cell
					{
						cout << cell_empty;
					}
				}
				else
				{
					for (int cell = 0; cell < cell_size; cell++)	// Make empty cell
					{
						cout << cell_filled;
					}
				}
			}
		}
		else			// Show odd lines
		{
			for (int side = 0; side < board_size; side++)	// Side size
			{
				if (side % 2)	// Combinate felled cells and empty 
				{
					for (int cell = 0; cell < cell_size; cell++)	// Make felled cell
					{
						cout << cell_filled;
					}
				}
				else
				{
					for (int cell = 0; cell < cell_size; cell++)	// Make empty cell
					{
						cout << cell_empty;
					}
				}
			}
		}
	}
	cout << "\n\n\n";
}
