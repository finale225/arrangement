#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, b, c, result, divN;
    int n[10] = {0, }; // [0]은 0의 개수, [1]은 1의 개수, ... , [9]는 9의 개수
    cin >> a >> b >> c; // 세 가지 수 입력받기
    result = a*b*c; // result는 세 가지 수의 곱
    if (result >= 100000000) divN = 1000000000;
    else if (result >= 10000000) divN = 100000000;
    else divN = 10000000;
    while (true) {
        divN /= 10;
        int d = result / divN;
        for (int i=0; i<10; i++) {
            if (i==d) n[i]++;
        }
        result %= divN;
        if (divN == 1) break;
    }
    for (int i=0; i<10; i++) cout << n[i] << '\n';
}