#include <string>

using namespace std;

void lab_10_3() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �10. ������ �3" << endl;
		cout << "���� ����� ������������� �����. ��������� ���������� ������������: ������� ����� �������� ������ ����������" << endl << endl;
		cout << "������� �����:" << endl;
		string num;
		cin >> num;
		if (size(num)==2 && stoi(num)%2==0) {
			cout << "��� ����� ������ �����������" << endl << endl;
		}
		else {
			cout << "��� ����� �� �������� ��� ������� ������" << endl << endl;
		}

		cout << "������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}