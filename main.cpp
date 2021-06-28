#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    for (int i=0; i<c; i++) {
        int n;
        double sum = 0;
        cin >> n;
        int studArr[n] = {0};
        for (int j=0; j<n; j++) {
            cin >> studArr[j];
            sum += studArr[j];
        }
        double avg = sum / n;
        double count = 0;
        for (int k=0; k<n; k++) {
            if (studArr[k] > avg) count++;
        }
        cout << fixed;
        cout.precision(3);
        cout << count*100 / n << '%' << '\n';
    }
}