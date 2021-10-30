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

#include "printgameboard.hpp"
#include "userinput.hpp"
#include "posavail.hpp"
#include "win.hpp"

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
            else if(!checkPos(pos, co, playerplay)) cout << "Position taken! Play again: " << endl;
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
            if(!checkPos(pos, co, cpuplay)) ;
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
