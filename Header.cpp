//
// Created by Pasha on 26.03.2025.
//
#include <iostream>
#include <conio.h>
#include <fstream>
#include "Header.h"

using namespace std;

struct Point		//структура в которой хранятся координаты
{
    int x;
    int y;
};

struct Rectangle	//2 точки Прямоугольника (у каждой точки есть 2 координаты это Х и У
{
    Point A;
    Point B;
};

void PrintMenu()
{
    cout << "1. Открыть файл для считывания\n";
    cout << "2. Создать файл для ввода\n";
    cout << "3. Считать значения из файла\n";
    cout << "4. Записать в файл\n";
    cout << "5. Ввести вручную\n";
    cout << "6. Информация\n";
    cout << "у. - для выхода\n";
}

void Input(istream& is, Rectangle& rect)
{
    int x1, x2, y1, y2;
    is >> x1 >> y1;
    is >> x2 >> y2;

    Point A = { x1, y1 };
    Point B = { x2, y2 };

    rect.A = A;
    rect.B = B;
}

void Read(ofstream& os, const Rectangle& rect)
{
    os << rect.A.x << ' ' << rect.A.y << endl;
    os << rect.B.x << ' ' << rect.B.y << endl;
}

void PrintInfo(const Rectangle& rect)
{
    system("cls");

    cout << "Прямоугольник:\n";
    cout << "x1 = " << rect.A.x << "; y1 = " << rect.A.y << endl;
    cout << "x2 = " << rect.B.x << "; y2 = " << rect.B.y << endl;

    //int dist1, dist2;
    int dist1 = abs(rect.A.x - rect.B.x);
    int dist2 = abs(rect.A.y - rect.B.y);

    cout << "Длина 1 стороны: " << dist1 << endl;
    cout << "Длина 2 стороны: " << dist2 << endl;

    cout << "Периметр: " << 2 * (dist1 + dist2) << endl;
    cout << "Площадь: " << (dist1 * dist2) << endl;

    _getch();
}
