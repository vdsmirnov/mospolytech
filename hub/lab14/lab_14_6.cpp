using namespace std;

void lab_14_6() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �14. ������ �6" << endl;
		cout << "���� ����� ����� N (> 1), ���������� ������ ���������: N = FK. ����� ����� ����� K - ���������� ����� ����� ��������� N" << endl << endl;

        int n;
        cout << "������� N: ";
        cin >> n;
        int f1 = 1, f2 = 1, f = 0, k = 2;
        while (f < n) {
            ++k;
            f = f2 + f1;
            f2 = f1;
            f1 = f;
        }
        cout << "k = " << k << endl;

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}