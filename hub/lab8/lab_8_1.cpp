#include <cmath>
using namespace std;

void lab_8_1() {
	double bytes;
	cout << "��� ����� � ������: ";
	cin >> bytes;
	cout << "��� ����� � ����������: " << ceil(bytes / 1024) << endl;
}