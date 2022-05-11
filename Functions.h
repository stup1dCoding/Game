#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include "Greeting.h"
#include "Global Constants.h"
#include "Prototype.h"


using namespace std;

# define random(min,max) min+rand()%(max+1-min)

void gotoxy(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(hConsole, coord);
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | Black));
}





char** createArray(int size) {                                                   //Создание массива
	char** array = new char* [size];
	for (int i = 0; i < size; i++) {
		array[i] = new char[size];
	}
	return array;
}

void showArray(char** array,char symbol[],char buffer[]) {                                                   // Вывод массива                
	char size = _msize(array) / sizeof(array[0]);
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << endl << endl << endl << endl;
	SetColor(White, 0);
	cout << tab5 << "          1      " << "2      " << "3      " << "4      " << "5      " << "6        " << endl << endl ;
	cout << tab5 << "          _      " << "_      " << "_      " << "_      " << "_      " << "_        " << endl << endl;
	for (int i = 0; i < size; i++)
	{
		SetColor(White, 0);
		cout << tab5<<" " <<i+1 <<  "    |   ";
		for (int j = 0; j < size; j++)
		{
			if (array[i][j] == symbol[0]) {
				SetColor(Green, 0);
				cout << array[i][j] << "      ";
			}
			else if (array[i][j] == symbol[1]) {
				SetColor(Brown, 0);
				cout << array[i][j] << "      ";
			}
			else if (array[i][j] == symbol[2]) {
				SetColor(Red, 0);
				cout << array[i][j] << "      ";
			}
			else if (array[i][j] == symbol[3]) {
				SetColor(LightBlue, 0);
				cout << array[i][j] << "      ";
			}
			else if (array[i][j] == symbol[4]) {
				SetColor(LightMagenta, 0);
				cout << array[i][j] << "      ";
			}
			else if (array[i][j] == symbol[5]) {
				SetColor(LightGray, 0);
				cout << array[i][j] << "      ";
			}
			else if (array[i][j] == buffer[0]) {
				SetColor(Black, 0);
				cout << array[i][j] << "      ";
			}
		}
		cout << endl << endl << endl;
	}
	SetColor(White, 0);
}

 char** transferArray(char** array, char symbol[]) {                        // Передача символов в двумерный массив
	char size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			array[i][j] = symbol[random(0, 5)];
		}
	}
	return array;
}

 char** checkArray(char**& array, char symbol[],char buffer[]) {
	char size = _msize(array) / sizeof(array[0]);
	bool flag = false;
	
	while (true) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (array[i][j] == array[i][j + 1]) {
					flag = true;
					array[i][j] = buffer[0];
				}
				else flag = false;
			}
		}
		if (flag == false) {
			break;
		}
	}
	while (true) {
		for (int i = 0; i < size-1; i++) {
			for (int j = 0; j < size; j++) {
				if ((array[i][j] == array[i+1][j])) {
					flag = true;
					array[i][j] = buffer[0];
				}
				else flag = false;
			}
		}
		if (flag == false) {
			break;
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[i][j] == buffer[0]) {
				array[i][j] = symbol[random(0, 5)];
			}
		}
	}
	return array;
}
 
 

 char** swaping(char**& array,char symbol[], char buffer[]) {
	 char size = _msize(array) / sizeof(array[0]);
	 int x, y;
	 int x1, y1;
	 int counter = 1;
	 int border;
	 int beginning;
	 bool flag = false;
	 while (true) {

		 showArray(array, symbol, buffer);
		 SetColor(White, 0);
		 cout << tab6 << "Please enter the first coordinates from 1 to 6:" << endl;
		 SetColor(LightRed, 0);
		 cout << tab6 << " x = ";
		 cin >> x;
		 cout << tab6 << " y = ";
		 cin >> y;
		 while (true) {
			 if ((x < 1 || x > 6) || (y < 1 || y > 6)) {
				 system("cls");
				 showArray(array, symbol, buffer);
				 SetColor(White, 0);
				 cout << tab6 << "Error, enter the correct values: " << endl;
				 cout << tab6 << "Please enter the first coordinates from 1 to 6:" << endl;
				 SetColor(LightRed, 0);
				 cout << tab6 << " x = ";
				 cin >> x;
				 cout << tab6 << " y = ";
				 cin >> y;
			 }
			 else if ((x > 1 || x < 6) || (y > 1 || y < 6)) {
				 break;
			 }
		 }
		 SetColor(White, 0);
		 cout << tab6 << "Please enter the second coordinates from 1 to 6:" << endl;
		 SetColor(LightRed, 0);
		 cout << endl;
		 cout << tab6 << " x1 = ";
		 cin >> x1;
		 cout << tab6 << " y1 = ";
		 cin >> y1;
		 while (true) {
			 if ((x1 < 1 || x1 > 6) || (y1 < 1 || y1 > 6)) {
				 system("cls");
				 showArray(array, symbol, buffer);
				 SetColor(White, 0);
				 cout << tab6 << "Error, enter the correct values: " << endl;
				 cout << tab6 << "Please enter the first coordinates from 1 to 6:" << endl;
				 SetColor(LightRed, 0);
				 cout << tab6 << " x = ";
				 cin >> x1;
				 cout << tab6 << " y = ";
				 cin >> y1;
			 }
			 else if ((x1 > 1 || x1 < 6) || (y1 > 1 || y1 < 6)) {
				 break;
			 }
		 }
		 swap(array[0 + (x - 1)][0 + (y - 1)], array[0 + (x1 - 1)][0 + (y1 - 1)]);
		 system("cls");
		 for (int i = 0; i < size - 1; i++) {
			 beginning = 0;
			 border = 0;
			 for (int j = 0; j < size - 1; j++) {
				 if (array[i][j] == array[i][j + 1]) {
					 counter++;
					 beginning = array[i][j];
					 flag = true;
					 if (array[i][j] == array[i][j + 2]) {
						 counter++;
						 border = array[i][j + 2];
					 }
					 else break;
				 }
				 else flag = false;
				 if (flag == true) {
					 for (int r = beginning; r <= border; r++) {
						 if (array[i][r] == array[i][r + 1] && array[i][r] == array[i][r + 2]) {
							 array[i][r] = buffer[0];
							 array[i][r + 1] = buffer[0];
							 array[i][r + 2] = buffer[0];
						 }
						 else if (array[i][r] == array[i][r - 1] && array[i][r] == array[i][r - 2]) {
							 array[i][r] = buffer[0];
							 array[i][r - 1] = buffer[0];
							 array[i][r - 2] = buffer[0];
						 }
						 else if (array[i][r] == array[i][r - 1] && array[i][r] == array[i][r + 1]) {
							 array[i][r] = buffer[0];
							 array[i][r - 1] = buffer[0];
							 array[i][r + 1] = buffer[0];
						 }
					 }
				 }
			 }
		 }
		 for (int i = size-1; i > 0; i--) {
			 for (int k = size-1; k > 0; k--) {
				 if (array[i][k] == buffer[0]) {
					 swap(array[i][k], array[i - 1][k]);
				 }
			 }
		 }
		 for (int i = 0; i < size-1; i++) {
			 for (int q = 0; q < size-1; q++) {
				 if (array[i][q] == buffer[0]) {
					 array[i][q] = symbol[random(0, 5)];
				 }
			 }
		 }

	 }
	 return array;
 }
			 
		 
	 





