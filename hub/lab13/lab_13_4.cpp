using namespace std;

void lab_13_4() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �13. ������ �4" << endl;
		cout << "���� ������������ ����� A � ����� ����� N (> 0). ��������� ���� ����, ����� ����� 1 + A + A^2 + A^3 + . . . + A^N" << endl << endl;

		double sum = 0, a;
		int n;
		cout << "������� �� ������� ����� � � N:" << endl;
		cin >> a >> n;
		for (int i = 0; i <= n; i++) {
			sum = sum + pow(a, i);
		}
		cout << "�����: " << sum << endl;

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}