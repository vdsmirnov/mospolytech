using namespace std;

void lab_10_7() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �10. ������ �7" << endl;
		cout << "���� ����� ����� a, b, c. ��������� ���������� ������������: ����������� ����������� �� ��������� a, b, c�" << endl << endl;
		cout << "������� ��������������� a, b, c:" << endl;
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a && (a > 0 && b > 0 && c > 0)) {
			cout << "����� ����������� ����������" << endl << endl;
		}
		else {
			cout << "������ ������������ �� ����� ����" << endl << endl;
		}

		cout << "������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}