#include <cmath>

using namespace std;

void lab_5_4() {
	int x1, x2, y1, y2;
	cout << "����� A � B ��� ��������������� ������� ��������������" << endl;
	cout << "������� ���������� ���������� ����� A" << endl;
	cin >> x1 >> y1;
	cout << "������� ���������� ���������� ����� B" << endl;
	cin >> x2 >> y2;
	int side_widht, side_length;
	side_widht = abs(y2 - y1); // ���������� ������ ��������������
	side_length = abs(x2 - x1); // ���������� ����� ��������������
	cout << "������� �������������� = " << side_length * side_widht << endl;
	cout << "�������� �������������� = " << 2 * (side_length + side_widht) << endl;
}