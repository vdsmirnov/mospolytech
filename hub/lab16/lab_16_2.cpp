#include <vector>

using namespace std;

void lab_16_2() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �16. ������ �2" << endl;
		cout << "���� ����� ����� N (> 1), � ����� ������ ���� A � ����������� D �������������� ����������. ������������ � ������� ������ ������� N, ���������� N ������ ������ ������ ����������: A, AxD, AxD2 , AxD3 , ..." << endl << endl;

		vector <int> data_array;
		int a, d, n;
		cout << "������� ������ �������: ";
		cin >> n;
		cout << "������� ������ ���� �������������� ����������: ";
		cin >> a;
		cout << "������� ����������� ���� ����������: ";
		cin >> d;
		for (int i = 0; i < n; i++) {
			data_array.push_back(a * pow(d, i));
		}
		for (int i = 0; i < data_array.size(); i++) {
			cout << data_array[i] << " ";
		}

		cout << "\n\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}