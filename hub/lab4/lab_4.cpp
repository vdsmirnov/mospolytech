#include <iostream>
#include "lab_4_1.cpp"
#include "lab_4_2.cpp"
#include "lab_4_3.cpp"
#include "lab_4_4.cpp"
#include "lab_4_5.cpp"

using namespace std;

int user_input_lab_4 = 1;

void user_fall_lab_4() {
    if (user_input_lab_4 != 1 && user_input_lab_4 != 2 && user_input_lab_4 != 3 && user_input_lab_4 != 4 && user_input_lab_4 != 5 && user_input_lab_4 != 0) {
        cout << endl << "!! ������� ������ �����, ������ ������ ������ !!" << endl;
        cout << endl << "������� ����� ������ ������ ��� ������� 0 ��� �������� ���. ������: ";
        cin >> user_input_lab_4;
    }
}

void lab_4() {
	cout << "������������ ������ �4\n������� ����� ������, ����� ��������� �" << endl;
	cout << endl << "1. ���� ������� �������������� a � b. ����� ��� ������� � ��������\n2. ��� ������� ���������� d. ����� �� �����\n3. ���� ��� ����� a � b. ����� �� ������� ��������������" << endl;
	cout << "4. ���� ��� ��������� �����. ����� �����, ��������, ������������ � ������� �� ���������\n5. ���� ��� ��������� �����. ����� �����, ��������, ������������ � ������� �� �������" << endl;
    while (user_input_lab_4 != 0) {
        cout << endl << "������� ����� ������ ������ ��� ������� 0 ��� �������� ���. ������: ";
        cin >> user_input_lab_4;
        user_fall_lab_4();
        switch (user_input_lab_4) {
        case 1:
            lab_4_1();
            break;
        case 2:
            lab_4_2();
            break;
        case 3:
            lab_4_3();
            break;
        case 4:
            lab_4_4();
            break;
        case 5:
            lab_4_5();
            break;
        }
    }
}