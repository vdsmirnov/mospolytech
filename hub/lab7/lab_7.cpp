#include <iostream>
#include "lab_7_1.cpp"
#include "lab_7_2.cpp"
#include "lab_7_3.cpp"
#include "lab_7_4.cpp"
#include "lab_7_5.cpp"
#include "lab_7_6.cpp"

using namespace std;

int user_input_lab_7 = 1;

void user_fall_lab_7() {
    if (user_input_lab_7 != 1 && user_input_lab_7 != 2 && user_input_lab_7 != 3 && user_input_lab_7 != 4 && user_input_lab_7 != 5 && user_input_lab_7 != 6 && user_input_lab_7 != 0) {
        cout << endl << "!! Введите другое число, равное номеру задачи !!" << endl;
        cout << endl << "Введите номер нужной задачи или введите 0 для закрытия лаб. работы: ";
        cin >> user_input_lab_7;
    }
}

void lab_7() {
    cout << "Лабораторная работа №7\nВведите номер задачи, чтобы запустить её" << endl;
    cout << endl << "1. Дано значение угла A в градусах (0 < A < 360). Определить значение этого же угла в радианах, учитывая, что 180 градусов = pi радианов\n2. Дано значение угла A в радианах (0 < A < 2pi). Определить значение этого же угла в градусах, учитывая, что 180 градусов = pi радианов" << endl;
    cout << "3. Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет\n4. Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. Определить расстояние между ними через T часов, если автомобили удаляются друг от друга" << endl;
    cout << "5. Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0)\n6. Найти решение системы линейных уравнений вида:\nA1·x + B1·y = C1,\nA2·x + B2·y = C2" << endl;
    while (user_input_lab_7 != 0) {
        cout << endl << "Введите номер нужной задачи или введите 0 для закрытия лаб. работы: ";
        cin >> user_input_lab_7;
        user_fall_lab_7();
        switch (user_input_lab_7) {
        case 1:
            lab_7_1();
            break;
        case 2:
            lab_7_2();
            break;
        case 3:
            lab_7_3();
            break;
        case 4:
            lab_7_4();
            break;
        case 5:
            lab_7_5();
            break;
        case 6:
            lab_7_6();
            break;
        }
    }
    system("cls");
}