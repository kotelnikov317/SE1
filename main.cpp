#include <iostream>

using namespace std;

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
    cout << "Сумма = " << x+y << " Произведение = " << x*y;

    return 0;
}
