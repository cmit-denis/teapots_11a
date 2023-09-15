#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int jmax = 1;
    int imin = 0;
    for(int j = 2; j < n; j++){
        if(a[j - 1] < a[imin]){
            imin = j - 1;
        }
        if(a[j] > a[jmax]){
            jmax = j;
        }
    }
    if(static_cast<double>(a[jmax]) / a[imin] <= 1){
        cout << "0 0";
        cout << static_cast<double>(a[jmax]) / a[imin];
        return 0;
    }
    cout << imin + 1 << " " << jmax + 1;
    cout << static_cast<double>(a[jmax]) / a[imin];
    return 0;
}