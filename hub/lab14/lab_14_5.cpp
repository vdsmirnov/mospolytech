using namespace std;

void lab_14_5() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �14. ������ �5" << endl;
		cout << "���� ����� ������������� ����� A � B. ����� �� ���������� ����� �������� (���), ��������� �������� �������" << endl << endl;

		unsigned a, b;
		cout << "������� �� ������� ����� A � B:" << endl;
		cin >> a >> b;
		while (a != 0 && b != 0) {
			if (a > b) a = a % b;
			else b = b % a;
		}
		cout << "���: " << a + b;

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}