#include "lab_7_1.cpp"
#include "lab_7_2.cpp"
#include "lab_7_3.cpp"
#include "lab_7_4.cpp"
#include "lab_7_5.cpp"
#include "lab_7_6.cpp"

using namespace std;

int user_input_lab_7 = 1;

void user_fall_lab_7() {
    while (user_input_lab_7 < 0 || user_input_lab_7 > 6) {
        cout << endl << "!! ������� ������ �����, ������ ������ !!" << endl;
        cout << "������� ����� ������ ������ ��� ������� 0 ��� ���������� ���������: ";
        cin >> user_input_lab_7;
    }
}

void lab_7() {
    system("cls");
    cout << "������������ ������ �7\n������� ����� ������, ����� ��������� �" << endl;
    cout << endl << "1. ���� �������� ���� A � �������� (0 < A < 360). ���������� �������� ����� �� ���� � ��������, ��������, ��� 180 �������� = pi ��������\n2. ���� �������� ���� A � �������� (0 < A < 2pi). ���������� �������� ����� �� ���� � ��������, ��������, ��� 180 �������� = pi ��������" << endl;
    cout << "3. ��������, ��� X �� ������ ����� A ������. ����������, ������� ����� 1 �� � Y �� ���� �� ������\n4. �������� ������� ���������� V1 ��/�, ������� � V2 ��/�, ���������� ����� ���� S ��. ���������� ���������� ����� ���� ����� T �����, ���� ���������� ��������� ���� �� �����" << endl;
    cout << "5. ������ �������� ��������� A�x + B = 0, �������� ������ �������������� A � B (����������� A �� ����� 0)\n6. ����� ������� ������� �������� ��������� ����:\nA1�x + B1�y = C1,\nA2�x + B2�y = C2" << endl;
    while (user_input_lab_7 != 0) {
        cout << endl << "������� ����� ������ ������ ��� ������� 0 ��� �������� ���. ������: ";
        cin >> user_input_lab_7;
        user_fall_lab_7();
        switch (user_input_lab_7) {
        case 1:
            lab_7_1();
            break;
        case 2:
            lab_7_2();
            break;
        case 3:
            lab_7_3();
            break;
        case 4:
            lab_7_4();
            break;
        case 5:
            lab_7_5();
            break;
        case 6:
            lab_7_6();
            break;
        }
    }
    system("cls");
}