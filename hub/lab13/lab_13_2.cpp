using namespace std;

void lab_13_2() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �13. ������ �2" << endl;
		cout << "���� ����� ����� N (> 0). ����� ������������ 1.1 x 1.2 x 1.3 x . . . (N ������������)" << endl << endl;

		int n;
		double result = 1;
		cout << "������� N: ";
		cin >> n;
		for (int i = 1; i <= n; i++) {
			result = result * (1 + 0.1 * i);
		}
		cout << "����� = " << result << endl;

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}