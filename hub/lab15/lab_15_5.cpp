using namespace std;

double Fact2(int N) {
    int j;
    double k;
    k = 1;
    if (N % 2 == 0)
    {
        for (j = 2; j <= N; j += 2) k = k * j;
    }
    if (N % 2 != 0)
    {
        for (j = 1; j <= N; j += 2) k = k * j;
    }
    return k;
}

void lab_15_5() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �15. ������ �5" << endl;
		cout << "������� ������� Fact2(N) ������������� ����, ����������� ������� ���������: \nN!!= 1x3x5x. ..xN, ���� N � ��������;\nN!!= 2x4x6�. ..xN, ���� N � ������(N > 0 � �������� ������ ����; ������������ ������������ �������� ������������ ��� ����, ����� �������� �������������� ������������ ��� ������� ��������� N)" << endl << endl;
        int n;
        cout << "������� N (N > 0): ";
        cin >> n;
        double result = Fact2(n);
        cout << "��������� = " << result;

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}