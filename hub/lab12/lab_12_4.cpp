using namespace std;

void lab_12_4() {
    int user_input = 1;
    while (user_input != 0) {
        system("cls");

        cout << "������������ ������ �12. ������ �4" << endl;
        cout << "���� ����� ����� � ��������� 100�999. ������� ������-�������� ������� �����, ��������: 256 � ������� ��������� ������, 814 � ���������� �������������" << endl << endl;
        int x, y, d, a, z;
        cout << "������� �����: ";
        cin >> x;
        if ((x < 100) || (x > 999)) cout << "����� ������� �� ����� ���������";
        else {
            y = x / 100; //������� �����
            d = x % 10; //������� �������
            a = (x / 10) % 10; // ������� �������
            z = x % 100; //��� ��������� �����
            switch (y)
            {
            case 1: cout << "��� "; break;
            case 2: cout << "������ "; break;
            case 3: cout << "������ "; break;
            case 4: cout << "��������� "; break;
            case 5: cout << "������� "; break;
            case 6: cout << "�������� "; break;
            case 7: cout << "������� "; break;
            case 8: cout << "��������� "; break;
            case 9: cout << "��������� "; break;

            default:
                break;
            }
            if ((z < 11) || (z > 19)) {
                switch (a)
                {
                case 1: cout << "������ "; break;
                case 2: cout << "�������� "; break;
                case 3: cout << "�������� "; break;
                case 4: cout << "����� "; break;
                case 5: cout << "��������� "; break;
                case 6: cout << "���������� "; break;
                case 7: cout << "��������� "; break;
                case 8: cout << "����������� "; break;
                case 9: cout << "��������� "; break;
                default:
                    break;
                }
                switch (d)
                {
                case 1: cout << "���� "; break;
                case 2: cout << "��� "; break;
                case 3: cout << "��� "; break;
                case 4: cout << "������ "; break;
                case 5: cout << "���� "; break;
                case 6: cout << "����� "; break;
                case 7: cout << "���� "; break;
                case 8: cout << "������ "; break;
                case 9: cout << "������ "; break;
                default:
                    break;
                }
            }
            else {
                switch (z)
                {
                case 11: cout << "����������� "; break;
                case 12: cout << "���������� "; break;
                case 13: cout << "���������� "; break;
                case 14: cout << "������������ "; break;
                case 15: cout << "���������� "; break;
                case 16: cout << "���������� "; break;
                case 17: cout << "���������� "; break;
                case 18: cout << "������������ "; break;
                case 19: cout << "������������ "; break;
                default:
                    break;
                }
            }
        }

        cout << endl << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
        cin >> user_input;
    }
}