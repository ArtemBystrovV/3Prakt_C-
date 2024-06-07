// 3Prakt_C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <cmath>
using namespace std;

const double P = 3.14;  
    int Plosh(int rad) {
        return P * rad * rad;
    }

    int PloshCal(int vneshRad, int vnutRad) {
        int vneshPlosh = Plosh(vneshRad);
        int vnutPlosh = Plosh(vnutRad);
        return vneshPlosh - vnutRad;
    }
    int main() {
        int vneshRad, vnutRad;
        std::cout << "Введите внешний радиус: ";
        std::cin >> vneshRad;
        std::cout << "Введите внутренний радиус: ";
        std::cin >> vnutRad;
        int PloshKol = PloshCal(vneshRad, vnutRad);
        std::cout << "Площадь: " << PloshKol << std::endl;
        return 0;
    }