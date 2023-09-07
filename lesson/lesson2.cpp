#include <iostream>
#include <string> //библиотека для работы сос строками

using namespace std;

int main(){
    int a, b; //объявляем целочисленные переменные a и b
    cout << "Введите слагаемые через пробел\n"; // \n - начало новой строки \b - backspase \t - tab \a -звуковой сигнал
    cin >> a >> b; //принимаем переменные с клавиатуры
    cout << a + b << ' '; //выводим значения на экран

    //Целочислеенное деление
    int c;
    float d;
    int v;
    c = a / b;
    v = a % b;
    cout << c << ' ' << v;
}