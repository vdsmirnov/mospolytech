using namespace std;

void lab_12_3() {
    int user_input = 1;
    while (user_input != 0) {
        system("cls");

        cout << "������������ ������ �12. ������ �3" << endl;
        int num;
        cout << "���� ����� ����� � ��������� 10�40, ������������ ���������� ������� ������� �� ��������� ����. ������� ������-�������� ���������� ���������� �������, ��������� ���������� ������������ ����� �� ������� �������� �������, ��������: 18 � ������������� ������� �������" << endl << endl;
        cout << "������� ����� � ��������� 10�40: ";
        cin >> num;
        switch (num)
        {
        case 10: cout << "������"; break;
        case 11: cout << "�����������"; break;
        case 12: cout << "����������"; break;
        case 13: cout << "����������"; break;
        case 14: cout << "������������"; break;
        case 15: cout << "����������"; break;
        case 16: cout << "����������"; break;
        case 17: cout << "����������"; break;
        case 18: cout << "������������"; break;
        case 19: cout << "������������"; break;
        case 20: cout << "��������"; break;
        case 21: cout << "�������� ����"; break;
        case 22: cout << "�������� ���"; break;
        case 23: cout << "�������� ���"; break;
        case 24: cout << "�������� ������"; break;
        case 25: cout << "�������� ����"; break;
        case 26: cout << "�������� �����"; break;
        case 27: cout << "�������� ����"; break;
        case 28: cout << "�������� ������"; break;
        case 29: cout << "�������� ������"; break;
        case 30: cout << "��������"; break;
        case 31: cout << "�������� ����"; break;
        case 32: cout << "�������� ���"; break;
        case 33: cout << "�������� ���"; break;
        case 34: cout << "�������� ������"; break;
        case 35: cout << "�������� ����"; break;
        case 36: cout << "�������� �����"; break;
        case 37: cout << "�������� ����"; break;
        case 38: cout << "�������� �����"; break;
        case 39: cout << "�������� ������"; break;
        case 40: cout << "�����"; break;
        }
        if ((num > 40) || (num < 10)) cout << "����� ������� �� ����� ���������";
        if (((num >= 10) && (num <= 20)) || ((num >= 25) && (num <= 30)) || ((num >= 35) && (num <= 40)))
            cout << " ������� �������";
        if ((num == 31) || (num == 21))
            cout << " ������� �������";
        if ((num == 22) || (num == 23) || (num == 24) || (num == 32) || (num == 33) || (num == 34))
            cout << " ������� �������";

        cout << endl << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
        cin >> user_input;
    }
}