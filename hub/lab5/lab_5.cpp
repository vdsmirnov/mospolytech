#include "lab_5_1.cpp"
#include "lab_5_2.cpp"
#include "lab_5_3.cpp"
#include "lab_5_4.cpp"
#include "lab_5_5.cpp"

using namespace std;

int user_input_lab_5 = 1;

void user_fall_lab_5() {
    while (user_input_lab_5 < 0 || user_input_lab_5 > 5) {
        cout << endl << "!! ������� ������ �����, ������ ������ !!" << endl;
        cout << "������� ����� ������ ������ ��� ������� 0 ��� ���������� ���������: ";
        cin >> user_input_lab_5;
    }
}

void lab_5() {
    system("cls");
    cout << "������������ ������ �5\n������� ����� ������, ����� ��������� �" << endl;
    cout << endl << "1. ����� ���������� ����� ����� ������� � ��������� ������������ (x1, y1) � (x2, y2)\n2. ���� ��� ����� A, B, C �� �������� ���. ����� ����� �������� AC � BC � �� �����\n3. ���� ��� ����� A, B, C �� �������� ���. ����� C ����������� ����� ������� A � B.����� ������������ ���� �������� AC � BC" << endl;
    cout << "4. ���� ���������� ���� ��������������� ������ ��������������:(x1, y1), (x2, y2).������� �������������� ����������� ���� ���������. ����� P � S\n5. ���� ���������� ���� ������ ������������: (x1, y1), (x2, y2), (x3, y3). ����� ��� �������� � �������" << endl;
    while (user_input_lab_5 != 0) {
        cout << endl << "������� ����� ������ ������ ��� ������� 0 ��� �������� ���. ������: ";
        cin >> user_input_lab_5;
        user_fall_lab_5();
        switch (user_input_lab_5) {
        case 1:
            lab_5_1();
            break;
        case 2:
            lab_5_2();
            break;
        case 3:
            lab_5_3();
            break;
        case 4:
            lab_5_4();
            break;
        case 5:
            lab_5_5();
            break;
        }
    }
    system("cls");
}