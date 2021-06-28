#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, b, c, result;
    int n[10] = {0};
    cin >> a >> b >> c;
    result = a*b*c;
    while (result != 0) {
        n[result%10]++;
        result /= 10;
    }
    for (int i=0; i<10; i++) cout << n[i] << '\n';
}