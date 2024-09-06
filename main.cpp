#include <iostream>
/*
autor: Kotelnikov Anatolui
group: KE-317
date: 06.09.24
*/
using namespace std;
//программа является учебной
int main()
{
    system("chcp 1251");
    system("cls");
    int x,y;
    cout << "Введите два числа:\n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "Сумма = " << x+y << " Вычитание = " << x-y <<  " Произведение = " << x*y;

    return 0;
}
