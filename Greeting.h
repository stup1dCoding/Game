#pragma once
#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include "Global Constants.h"

using namespace std;

char SetColor(int text, int bg) {                                               // Функция изменения цвета фона и текста
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
	return text;
}

 void frontLable(char(a), char(b)) {

	SetColor(1 + rand() % 15, 0);
	cout << endl << endl << endl << endl << endl;
	cout << tab;
	for (int j = 0; j < 35; j++) {
		cout << char(a);
	}
	cout << endl;
	cout << tab << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(a) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << endl;
	cout << tab << char(a) << char(b) << char(a) << char(b) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(a) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(b) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab << char(a) << char(b) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << endl;
	cout << tab << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(b) << char(b) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab;
	for (int j = 0; j < 35; j++) {
		cout << char(a);
	}
	cout << endl;
	cout << tab2;
	for (int j = 0; j < 10; j++) {
		cout << char(a);
	}
	cout << endl;
	cout << tab2 << char(a) << char(b) << char(b) << char(b) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab2 << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << endl;
	cout << tab2 << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << endl;
	cout << tab2 << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << endl;
	cout << tab2 << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab2;
	for (int j = 0; j < 10; j++) {
		cout << char(a);
	}
	cout << endl;
	cout << tab3;
	for (int j = 0; j < 14; j++) {
		cout << char(a);
	}
	cout << endl;
	cout << tab3 << char(a) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab3 << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << endl;
	cout << tab3 << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab3 << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << endl;
	cout << tab3 << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab3;
	for (int j = 0; j < 14; j++) {
		cout << char(a);
	}
	cout << endl;
	cout << tab4;
	for (int j = 0; j < 21; j++) {
		cout << char(a);
	}
	cout << endl;
	cout << tab4 << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab4 << char(a) << char(b) << char(a) << char(a) << char(a) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(a) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << endl;
	cout << tab4 << char(a) << char(b) << char(a) << char(b) << char(b) << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(b) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab4 << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << endl;
	cout << tab4 << char(a) << char(b) << char(b) << char(b) << char(b) << char(a) << char(b) << char(a) << char(a) << char(b) << char(a) << char(b) << char(a) << char(a) << char(a) << char(b) << char(a) << char(b) << char(b) << char(b) << char(a) << endl;
	cout << tab4;
	for (int j = 0; j < 21; j++) {
		cout << char(a);
	}

	cout << endl;
	SetColor(1 + rand() % 15, 0);
	cout << tab << tab << tab << tab << "PLEASE ENTER ANY KEY TO CONTINUE:):):) ";

	Sleep(1500);
	system("cls");
}
void blinked() {
	while (!_kbhit()) {
		frontLable(219, 196);
		if (_kbhit()) {
			break;
		}
	}
}
