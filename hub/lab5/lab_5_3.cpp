using namespace std;

void lab_5_3() {
    int A, B, C;
    cout << "___A____C____B___" << endl << endl;
    cout << "������� ���������� ����� �� ������� �� �������� ������" << endl;
    cin >> A >> C >> B;
    cout << endl << "___A____C____B___" << endl;
    cout << "   " << A << "    " << C << "    " << B << "   " << endl;
    cout << endl << "����� ������� AC = " << C - A << endl;
    cout << "����� ������� BC = " << B - C << endl;
    cout << "����� ���� �������� AC � BC = " << (C - A) + (B - C) << endl;
}