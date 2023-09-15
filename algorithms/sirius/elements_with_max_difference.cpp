#include <iostream>

using namespace std;

int main(){
    int n;
    int a[n];

    /*
    Выбрать такую пару элементов a[i] и a[j], что
    i < j
    a[j] - a[i] -> max
    */

    int imin = 0;
    int ibest = 0;
    int jbest = 1;
    for (int j = 2; j < n; ++j){
        if (a[j - 1] < a[imin])
            imin =  j - 1;
        if (a[j] - a[imin] > a[jbest] - a[ibest]){
            jbest = j;
            ibest = imin;
        }
    }
    cout << ibest << " " << jbest << endl;
    return 0;
}