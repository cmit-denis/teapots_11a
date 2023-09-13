#include <iostream>

using namespace std;

int main(){
    char a;
    cin >> a;
    switch (a) // оператор выбора
    {
    case 'm': // здесь мы пишем сравниваемую константу
        cout << "man";
        break;
    case 'w':
        cout << "woman";
        break;
       
    default: // данные инструкции выполняются, если не прошёл ни один case
        cout << "ERROR";
        break;
    }
    cin >> a;
    return 0;
}