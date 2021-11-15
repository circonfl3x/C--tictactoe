#include <iostream>
using namespace std;
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <stdbool.h>
#include <algorithm>



char gameBoard [5][5] =
{
    {' ','|',' ','|',' '},
    {'-','+','-','+','-'},
    {' ','|',' ','|',' '},
    {'-','+','-','+','-'},
    {' ','|',' ','|',' '},
};

list <int> pos,co;
int playerplay, cpuplay;
time_t timer;

bool checkTrue(list <int> lr, int tolook);
void printBoard(char gameBoard[5][5]);
bool ispa(list <int> arr, list <int> arr2, int a);
bool WinCase(list <int> lr);
void input( char gameBoard[5][5], string player, int play);
int main(int argc, char **argv)
{
    while(1)
    {

        printBoard(gameBoard);
        while(1)
        {
            cout << "Play (1-9): ";
            cin >> playerplay;
            if (!cin) throw;
            else if (playerplay > 9) ;
            else if(ispa(pos, co, playerplay)) cout << "Position taken! Play again: " << endl;
            else
            {
                pos.push_back(playerplay);
                
                break;
            }
        }
        input(gameBoard, "player", playerplay);
        if(WinCase(pos))
        {
            cout << "Player wins!" << endl << endl;
            printBoard(gameBoard);
            break;
        }else ;
        while(1)
        {
            //srand((unsigned) time(&timer)); //greyed out for runtime issues
            cpuplay = rand() % 10;
            if(ispa(pos, co, cpuplay)) ;
            else if(cpuplay > 9) ;
            else
            {
                co.push_back(cpuplay);
                break;
            }
    
        }
        input(gameBoard, "cpu", cpuplay);
        if(WinCase(co))
        {
            cout << "CPU Wins!" << endl << endl;
            printBoard(gameBoard);
            break;
        }else ;


    }

    return 0;
}

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


bool ispa(list <int> arr, list <int> arr2, int a)
{
    if(find(arr.begin(), arr.end(), a) != arr.end() ) return true;
    else if (find(arr2.begin(), arr2.end(), a) != arr2.end()) return true;
    else return false;
}

bool checkTrue(list <int> lr, int tolook)
{
	return find(lr.begin(), lr.end(), tolook) != lr.end();
}

bool WinCase(list <int> lr)
{

	if(checkTrue(lr, 1) && checkTrue(lr, 2) && checkTrue(lr, 3)||
	checkTrue(lr, 4) && checkTrue(lr, 5) && checkTrue(lr, 6) ||
	checkTrue(lr, 7) && checkTrue(lr, 8) && checkTrue(lr, 9)||
	checkTrue(lr, 1) && checkTrue(lr, 4) && checkTrue(lr, 7) ||
	checkTrue(lr, 2) && checkTrue(lr, 5) && checkTrue(lr, 8) ||
	checkTrue(lr, 3) && checkTrue(lr, 6) && checkTrue(lr, 9) ||
	checkTrue(lr, 1) && checkTrue(lr, 5) && checkTrue(lr, 9) || 
	checkTrue(lr, 3) && checkTrue(lr, 5) && checkTrue(lr, 7)){
		return true;
	}

	else return false;

}

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
