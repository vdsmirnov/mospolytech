using namespace std;

void lab_6_1() {
	int a, b;
	cout << "������� ������� ����� �, � ����� ����� �" << endl;
	cin >> a >> b;
	int temp = b;
	b = a;
	a = temp;
	cout << a << " " << b;
}