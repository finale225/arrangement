#include <iostream>
#define stdN 42
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, max = 0;
    double sum = 0;
    cin >> n;
    double arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
    }
    for (int i=0; i<n; i++) {
        arr[i] = arr[i]*100 / max;
        sum += arr[i];
    }
    cout.precision(8);
    cout << sum / n;
}