#include <iostream>

using namespace std;

int main(){
    int old;
    cout << "Сколько вам  лет?\n";
    cin >> old;
    if(old > 0){           // Операторы сравнения: <, >, <=, >=, ==, !=
        if(old > 18){
            cout << "YES";
        }
        if(old == 18){
            cout << "NO";
        }
    }
    return 0;
}