#include "lab_6_1.cpp"
#include "lab_6_2.cpp"
#include "lab_6_3.cpp"
#include "lab_6_4.cpp"
#include "lab_6_5.cpp"
#include "lab_6_6.cpp"
#include "lab_6_7.cpp"

using namespace std;

int user_input_lab_6 = 1;

void user_fall_lab_6() {
    while (user_input_lab_6 < 0 || user_input_lab_6 > 7) {
        cout << endl << "!! ������� ������ �����, ������ ������ !!" << endl;
        cout << "������� ����� ������ ������ ��� ������� 0 ��� ���������� ���������: ";
        cin >> user_input_lab_6;
    }
}

void lab_6() {
    system("cls");
    cout << "������������ ������ �6\n������� ����� ������, ����� ��������� �" << endl;
    cout << endl << "1. �������� ������� ���������� ���������� A � B � ������� ����� �������� A � B\n2. ���� ���������� A, B, C. �������� �� ��������, ���������� ���������� A � B, B - � C, C - � A, � ������� ����� �������� ���������� A, B, C" << endl;
    cout << "3. ���� ���������� A, B, C. �������� �� ��������, ���������� ���������� A � C, C - � B, B - � A, � ������� ����� �������� ���������� A, B, C\n4.����� �������� ������� y = 3x^6 - 6x^2 - 7 ��� ������ �������� x" << endl;
    cout << "5. ����� �������� ������� y = 4*(x-3)^6 - 7*(x-3)^3 + 2 ��� ������ �������� x\n6. ���� ����� A. ��������� A^8 , ��������� ��������������� ���������� � ��� �������� ���������\n7. ���� ����� A. ��������� A^15, ��������� ��� ��������������� ���������� � ���� �������� ���������" << endl;
    while (user_input_lab_6 != 0) {
        cout << endl << "������� ����� ������ ������ ��� ������� 0 ��� �������� ���. ������: ";
        cin >> user_input_lab_6;
        user_fall_lab_6();
        switch (user_input_lab_6) {
        case 1:
            lab_6_1();
            break;
        case 2:
            lab_6_2();
            break;
        case 3:
            lab_6_3();
            break;
        case 4:
            lab_6_4();
            break;
        case 5:
            lab_6_5();
            break;
        case 6:
            lab_6_6();
            break;
        case 7:
            lab_6_7();
            break;
        }
    }
    system("cls");
}