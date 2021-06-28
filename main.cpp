#include <iostream>
#define stdN 42
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n[10] = {0}, arr[stdN] = {0}, count = 0;
    for (int i=0; i<10; i++) {
        cin >> n[i];
        arr[n[i] %= stdN]++;
    }
    for (int i=0; i<stdN; i++) {
        if (arr[i] != 0) count++;
    }
    cout << count;
}