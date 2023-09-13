#include <iostream>

using namespace std;

int main(){
    int deniska[5] = {12, 23, 343, 475845, 0};
    int i = 0;
    while(i < 5){
        cout << i << ' ' << deniska[i] << endl;
        i = i + 1;
    }
    return 0;
}