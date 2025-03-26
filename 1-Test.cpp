//
// Created by Pasha on 26.03.2025.
//

#include <locale.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    system("color 2");

    cout << "1-Test";
    cout << ": это решение 1-ой задачи";

    _getch();
    return 0;
}
