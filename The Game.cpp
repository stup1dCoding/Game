#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include "Functions.h"
#include "Greeting.h"
#include "Window.h"
#include "Prototype.h"
#include "Global Constants.h"


using namespace std;


int main()
{
    srand(time(NULL));



    char symbol[] = { char(1),char(2),char(3),char(4),char(5),char(6) };
    char buffer[] = { char(14) };
    char** game = createArray(6);
    

    transferArray(game, symbol);
    
    sizeWindow(WIDTH, HIGHT, TOP, LEFT);
    blinked();
    showArray(game, symbol, buffer);
    system("cls");
    checkArray(game, symbol, buffer);
    swaping(game,symbol, buffer);
    

    















}
        




    /*while (true) {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (game[j][i] != game[j][i-1<6]) {
                    swap(game[j][i], game[j][i-1<6]);
                }
                showArray(game, symbol);
                Sleep(1500);
                system("cls");
            }
        }
   }*/
    

















