using namespace std;

void day_f(int y) {
	switch (y)
	{
	case 1:
		cout << "������ ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "�������� ";
		break;
	case 5:
		cout << "����� ";
		break;
	case 6:
		cout << "������ ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "������� ";
		break;
	case 9:
		cout << "������� ";
		break;
	case 10:
		cout << "������� ";
		break;
	case 11:
		cout << "������������ ";
		break;
	case 12:
		cout << "����������� ";
		break;
	case 13:
		cout << "����������� ";
		break;
	case 14:
		cout << "������������� ";
		break;
	case 15:
		cout << "����������� ";
		break;
	case 16:
		cout << "������������ ";
		break;
	case 17:
		cout << "����������� ";
		break;
	case 18:
		cout << "������������� ";
		break;
	case 19:
		cout << "������������� ";
		break;
	case 20:
		cout << "���������";
		break;
	case 21:
		cout << "�������� ������ ";
		break;
	case 22:
		cout << "�������� ������ ";
		break;
	case 23:
		cout << "�������� ������ ";
		break;
	case 24:
		cout << "�������� �������� ";
		break;
	case 25:
		cout << "�������� ����� ";
		break;
	case 26:
		cout << "�������� ������ ";
		break;
	case 27:
		cout << "�������� ������� ";
		break;
	case 28:
		cout << "�������� ������� ";
		break;
	case 29:
		cout << "�������� ������� ";
		break;
	case 30:
		cout << "��������� ";
		break;
	case 31:
		cout << "�������� ������ ";
		break;
	}
}

void month_f(int x) {
	switch (x)
	{
	case 1:
		cout << "������" << endl;
		break;
	case 2:
		cout << "�������" << endl;
		break;
	case 3:
		cout << "�����" << endl;
		break;
	case 4:
		cout << "������" << endl;
		break;
	case 5:
		cout << "���" << endl;
		break;
	case 6:
		cout << "����" << endl;
		break;
	case 7:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�������" << endl;
		break;
	case 9:
		cout << "��������" << endl;
		break;
	case 10:
		cout << "�������" << endl;
		break;
	case 11:
		cout << "������" << endl;
		break;
	case 12:
		cout << "�������" << endl;
		break;
	}
}

void lab_12_1() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �12. ������ �1" << endl;
		cout << "��� ����� ��� � ����� ����� �� 1 �� 31 � ������ � ����� ����� � ��������� 1�12 (1 � ������, 2 � ������� � �. �.). ������� ���� � ���� ������ (��������, ������ �������)" << endl << endl;
		int day, month;
		cout << "������� �� ������� �������� ��� � ������:" << endl;
		cin >> day >> month;
		day_f(day); month_f(month);

		cout << endl << "������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}