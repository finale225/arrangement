/*#include <iostream>
using namespace std;

int main() {
    int n, max, min;
    cin >> n;
    int* a = new int [n];
    cin >> a[0];
    max = min = a[0];
    for (int i=1; i<n; i++) {
        cin >> a[i];
        if (a[i] >= max) max = a[i];
        else if (a[i] < min) min = a[i];
    }
    cout << min << ' ' << max;
    delete [] a;
}*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int max = -1000000;
    int min = 1000000;
    cin >> n;
    if (n<1) return 0;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    cout << min << ' ' << max;
}