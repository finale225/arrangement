#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a[9], count = 0;
    cin >> a[0];
    int max = a[0];
    for (int i=1; i<9; i++) {
        cin >> a[i];
        if (a[i] > max) max = a[i];
    }
    for (int i=0; i<9; i++) {
        count++;
        if (a[i] == max) break;
    }
    cout << max << '\n' << count;
}