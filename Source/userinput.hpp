void input( char gameBoard[5][5], string player, int play)
{
	char symbol = ' ';
	if(player == "player")
	{
		symbol = 'X';
	}else symbol = '0';

	switch(play)
	{
		case 1:
            gameBoard[0][0] = symbol;
            break;

            case 2:
            gameBoard[0][2] = symbol;
            break;


            case 3:
            gameBoard[0][4] = symbol;
            break;


            case 4:
            gameBoard[2][0] = symbol;
            break;


            case 5:
            gameBoard[2][2] = symbol;
            break;

            case 6:
            gameBoard[2][4] = symbol;
            break;

            case 7:
            gameBoard[4][0] = symbol;
            break;

            case 8:
            gameBoard[4][2] = symbol;
            break;

            case 9:
            gameBoard[4][4] = symbol;
            break;

            default:

            break;
	}
}