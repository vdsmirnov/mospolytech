using namespace std;

void lab_12_2() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �12. ������ �2" << endl;
		cout << "����� ����� ������������ � ������� ������������ (�N� - �����, �W� - �����, �S� - ��, �E� - ������) � ��������� ��� �������� �������: 0 - ���������� ��������, 1 - ������� ������, -1 - ������� �������. ��� ������ C - �������� ����������� ������ � ����� ����� N - ��������� ��� �������. ������� ����������� ������ ����� ���������� ���������� �������" << endl << endl;
        int n;
        char c;

        cout << "�����������: ";
        cin >> c;
        cout << "��������: ";
        cin >> n;

        switch (c) {
        case 'N':
            switch (n) {
            case 1:
                cout << "�����";
                break;
            case 0:
                cout << "�����";
                break;
            case -1:
                cout << "������";
                break;
            }
            break;
        case 'E':
            switch (n) {
            case 1:
                cout << "�����";
                break;
            case 0:
                cout << "������";
                break;
            case -1:
                cout << "��";
                break;
            }
        case 'S':
            switch (n) {
            case 1:
                cout << "������";
                break;
            case 0:
                cout << "��";
                break;
            case -1:
                cout << "�����";
                break;
            }
            break;
        case 'W':
            switch (n) {
            case 1:
                cout << "��";
                break;
            case 0:
                cout << "�����";
                break;
            case -1:
                cout << "�����";
                break;
            }
        }

		cout << endl << "������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}