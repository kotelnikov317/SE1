#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    int x,y;
    cout << "������� ��� �����:\n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "����� = " << x+y << " ������������ = " << x*y;

    return 0;
}
