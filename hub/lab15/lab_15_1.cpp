using namespace std;

double PowerA3(double a) {
	return a * a * a;
}

void lab_15_1() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �15. ������ �1" << endl;
		cout << "������� ������� PowerA3(A, B), ����������� ������ ������� ����� A � ������������ �� � ���������� B (A � �������, B � �������� ��������; ��� ��������� �������� �������������). � ������� ���� ������� ����� ������ ������� ���� ������ �����." << endl << endl;

		double userinp;
		for (int i = 0; i < 5; i++) {
			cout << "������� ����� �: ";
			cin >> userinp;
			double b = PowerA3(userinp);
			cout << "������ ������� ����� �����: " << b << endl;
		}

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}