void printBoard(char gameBoard[5][5])
{
	int rows = 0;
	int columns = 0;
	do
	{
		cout << gameBoard[columns][rows];
		rows++;
		if(rows == 5)
		{
			columns++;
			rows = 0;
			cout << endl;

		}

	}while(columns < 5);
}