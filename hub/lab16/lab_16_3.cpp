#include <vector>
#include <numeric>

using namespace std;

void lab_16_3() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "������������ ������ �16. ������ �3" << endl;
		cout << "���� ����� ����� N (> 2), A � B. ������������ � ������� ������������� ������ ������� N, ������ ������� �������� ����� A, ������ ����� B, � ������ ����������� ������� ����� ����� ���� ����������" << endl << endl;

		vector <int> data_array;
		int a, b, n;
		cout << "������� ������ �������: ";
		cin >> n;
		cout << "������� �� ������� ����� � � �:" << endl;
		cin >> a >> b;
		data_array.push_back(a);
		data_array.push_back(b);
		for (int i = 2; i < n; i++) {
			data_array.push_back(accumulate(data_array.begin(), data_array.end(), 0));
		}
		for (int i = 0; i < data_array.size(); i++) {
			cout << data_array[i] << " ";
		}

		cout << "\n\n������� 0 ��� ������ �� ������ ��� ����� ������ ���� ��� ����������� ���� ������: ";
		cin >> user_input;
	}
}