using namespace std;

void lab_11_2() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �11. ������ �2" << endl;
		cout << "���� ��� �����. ����� ����� ���� ���������� �� ���" << endl << endl;
		int a, b, c;
		cout << "������� �� ������� �������� ��� �����:" << endl;
		cin >> a >> b >> c;
		if (b <= c && b <= a) {
			cout << a + c << endl;
		}
		else {
			if (a <= c && a <= b) {
				cout << b + c << endl;
			}
			else {
				cout << b + a << endl;
			}
		}

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}