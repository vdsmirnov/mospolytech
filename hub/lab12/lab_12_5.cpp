using namespace std;

void lab_12_5() {
    int user_input = 1;
    while (user_input != 0) {
        system("cls");

        cout << "������������ ������ �12. ������ �5" << endl;
        cout << "� ��������� ��������� ������ 60-������ ����, ��������� �� 12- ������ ���������, ������������ ���������� �����: �������, �������, ������, ����� � ������. � ������ �������� ���� ����� �������� ��������: �����, ������, �����, �����, �������, ����, ������, ����, ��������, ������, ������ � ������. �� ������ ���� ���������� ��� ��������, ���� 1984 ��� � ������ �����: ���� ������� ������" << endl << endl;
        int year;
        cout << "������� ���: ";
        cin >> year;

        cout << "��� ";

        switch ((year) % 10) {
        case 0:
        case 1:
            cout << "���";
            break;
        case 2:
        case 3:
            cout << "����";
            break;
        case 4:
        case 5:
            cout << "����";
            break;
        case 6:
        case 7:
            cout << "�����";
            break;
        case 8:
        case 9:
            cout << "���";
            break;
        }

        switch ((year + 1) % 5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 9:
        case 10:
        case 11:
            cout << "�� ";
            break;
        case 6:
        case 7:
        case 8:
            cout << "��� ";
            break;
        }

        switch ((year + 8) % 12) {
        case 0:
            cout << "�����";
            break;
        case 1:
            cout << "������";
            break;
        case 2:
            cout << "�����";
            break;
        case 3:
            cout << "�����";
            break;
        case 4:
            cout << "�������";
            break;
        case 5:
            cout << "����";
            break;
        case 6:
            cout << "������";
            break;
        case 7:
            cout << "����";
            break;
        case 8:
            cout << "��������";
            break;
        case 9:
            cout << "������";
            break;
        case 10:
            cout << "������";
            break;
        case 11:
            cout << "������";
            break;
        }

        cout << endl << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
        cin >> user_input;
    }
}