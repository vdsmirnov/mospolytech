using namespace std;

void lab_13_5() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �13. ������ �5" << endl;
		cout << "���� ������������ ����� A � ����� ����� N (> 0). ��������� ���� ����, ����� �������� ��������� \n1 - A + A2 - A3 + . ..+= AN . \n�������� �������� �� ������������\n" << endl << endl;

		double sum = 0, a;
		int n;
		cout << "������� �� ������� ����� � � N:" << endl;
		cin >> a >> n;
		for (int i = 0; i <= n; i++) {
			sum = sum + pow(-a, i);
		}
		cout << "�����: " << sum << endl;

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}