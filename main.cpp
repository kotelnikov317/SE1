#include <iostream>
/*
autor: Kotelnikov Anatolui
group: KE-317
date: 06.09.24
*/
using namespace std;
//��������� �������� �������
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
    cout << "����� = " << x+y << " ��������� = " << x-y <<  " ������������ = " << x*y;

    return 0;
}
