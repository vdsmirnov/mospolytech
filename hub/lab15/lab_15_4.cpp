using namespace std;

int Quarter(double x, double y) {
	if (x > 0) {
		if (y > 0) {
			return 1;
		}
		else {
			return 4;
		}
	}
	else {
		if (y > 0) {
			return 2;
		}
		else {
			return 3;
		}
	}
}

void lab_15_4() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �15. ������ �4" << endl;
		cout << "������� ������� Quarter(x, y) ������ ����, ������������ ����� ������������ ��������, � ������� ��������� ����� � ���������� ������������� ������������ (x, y). � ������� ���� ������� ����� ������ ������������ ��������� ��� ���� ����� � ������� ���������� ������������" << endl << endl;
		for (int i = 0; i < 3; i++) {
			double x, y;
			cout << "������� �� ������� � � � �����:" << endl;
			cin >> x >> y;
			int result = Quarter(x, y);
			cout << "����� �������� ���� ����� = " << result << endl;
		}

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}