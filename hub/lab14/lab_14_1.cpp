using namespace std;

void lab_14_1() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �14. ������ �1" << endl;
		cout << "���� ����� ������������� ����� A � B (A < B). ������� ��� ����� ����� �� A �� B ������������; ��� ���� ������ ����� ������ ���������� ������� ���, ������ ��� �������� (��������, ����� 3 ��������� 3 ����)" << endl << endl;

		unsigned int a, b;
		cout << "������� �� ������� � � �:" << endl;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			for (int j = 0; j < i; j++) {
				cout << i << " ";
			}
			cout << endl;
		}

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}