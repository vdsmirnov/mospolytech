using namespace std;

void lab_13_1() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �13. ������ �1" << endl;
		cout << "���� ������������ ����� � ���� 1 �� ������. ������� ��������� 0.1, 0.2, . . . , 1 �� ������" << endl << endl;

		double price;
		cout << "������� ���� ������: ";
		cin >> price;
		for (double i = 0.1; i <= 1; i += 0.1) {
			cout << "��������� " << i << "�� ������ = " << price * i << " ������." << endl;
		}

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}