#include <vector>

using namespace std;

void lab_16_1() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �16. ������ �1" << endl;
		cout << "���� ����� ����� N (> 0). ������������ � ������� ������������� ������ ������� N, ���������� N ������ ������������� �������� �����: 1, 3, 5, ..." << endl << endl;
		
		vector <int> data_array;
		int n, temp=1;
		cout << "������� ������ ������� N: ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			data_array.push_back(temp);
			temp += 2;
		}
		for (int i = 0; i < data_array.size(); i++) {
			cout << data_array[i] << " ";
		}

		cout << "\n\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}