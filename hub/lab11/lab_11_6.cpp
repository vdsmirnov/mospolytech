#include <string>

using namespace std;

void lab_11_6() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �11. ������ �6" << endl;
		cout << "���� ����� �����, ������� � ��������� 1�999. ������� ��� ������-�������� ���� ������� ���������� �����, ��������� ����������� ����� � �. �." << endl << endl;
		string num;
		cout << "������� �����: ";
		cin >> num;
		if (stoi(num) % 2 == 0) {
			if (size(num) > 1) {
				if (size(num) > 2) {
					cout << "������ ���������� �����" << endl;
				}
				else {
					cout << "������ ����������� �����" << endl;
				}
			}
			else {
				cout << "������ �����" << endl;
			}
		}
		else {
			if (size(num) > 1) {
				if (size(num) > 2) {
					cout << "�������� ���������� �����" << endl;
				}
				else {
					cout << "�������� ����������� �����" << endl;
				}
			}
			else {
				cout << "�������� �����" << endl;
			}
		}

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}