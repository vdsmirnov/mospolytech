#include <cmath>

using namespace std;

void lab_11_3() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �11. ������ �3" << endl;
		cout << "�� ��������� ����������� ��� �����: A, B, C. ����������, ����� �� ���� ��������� ����� (B ��� C) ����������� ����� � A, � ������� ��� ����� � �� ���������� �� ����� A" << endl << endl;
		double x_a, y_a, x_b, y_b, x_c, y_c;
		cout << "������� ���������� ����� �: " << endl;
		cin >> x_a >> y_a;
		cout << "������� ���������� ����� B: " << endl;
		cin >> x_b >> y_b;
		cout << "������� ���������� ����� C: " << endl;
		cin >> x_c >> y_c;
		double db, dc;
		db = sqrt(pow((x_a - x_b), 2) + pow((y_a - y_b), 2));
		dc = sqrt(pow((x_a - x_c), 2) + pow((y_a - y_c), 2));
		if (db > dc) {
			cout << "����� C ����� � ����� �. ���������� ����� �������: " << dc << endl;
		}
		else {
			cout << "����� B ����� � ����� �. ���������� ����� �������: " << db << endl;
		}

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}