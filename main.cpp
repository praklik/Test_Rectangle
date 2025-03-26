#include <iostream>
#include <conio.h>
#include <fstream>
#include "Header.h"

using namespace std;

struct Point { int x, y;};

struct Rectangle {Point A, B;};

void Input(istream& is, Rectangle& rect);

void Read(ofstream& os, const Rectangle& rect);

void PrintInfo(const Rectangle& rect);

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 2");

	cout << "***Прямоугольник***\n\n";

	char choice;
	char filename[30];

	ifstream fin;
	ofstream fout;

	Rectangle rect;

	bool fileInput = false;
	bool fileRead = false;

	do
	{
		PrintMenu();
		cin >> choice;

		switch (choice)
		{
		case '1':	cout << "\nВведите имя файла: ";
					cin >> filename;
					fin.open(filename);
					if (!fin.is_open())
					{
						cout << "Такого файла не существует!";
						_getch();
						fileInput = false;
						break;
					}
					else
						fileInput = true;
					break;

		case '2':	cout << "\nВведите имя файла: ";
					cin >> filename;
					fout.open(filename, ios::app);
					break;

		case '3':	if(!fileInput)
					{
						break;
					}
					Input(fin, rect);
					fileRead = true;
					break;

		case '4':	if (fileRead && fout.is_open())
					{
						Read(fout, rect);
					}
					break;

		case '5':	cout << "\nВведите 2 противоположенные вершины прямоугольника (x1,y1, x2,y2):\n";
					Input(cin, rect); fileRead = true;
					break;

		case '6':	if(fileRead)
					{
						PrintInfo(rect);
					}
					break;
		}
		system("cls");

	} while(choice != 'y');

	_getch();
	return 0;
}