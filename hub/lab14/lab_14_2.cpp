using namespace std;

void lab_14_2() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �14. ������ �2" << endl;
		cout << "���� ������������� ����� A � B (A > B). �� ������� ����� A ��������� ����������� ��������� ���������� �������� ����� B (��� ���������). �� ��������� �������� ��������� � �������, ����� ����� ��������� ����� ������� A" << endl << endl;

		unsigned int a, b, count_b, temp;
		int sum;
		cout << "������� �� ������� � � �:" << endl;
		cin >> a >> b;
		temp = a;
		for (count_b = 0; temp >= b; count_b++) {
			temp -= b;
		}
		while (count_b > 0) {
			a = a - b;
			count_b--;
		}
		cout << "������� ������� �: " << a;

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}