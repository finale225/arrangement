#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, max = 0;
    double sum = 0;
    cin >> n;
    double arr[n]; // 크기가 입력받은 수인 배열을 생성
    for (int i=0; i<n; i++) {
        cin >> arr[i]; // 배열에 원래의 점수 값을 입력
        if (arr[i] > max) max = arr[i]; // 최대값 산출
    }
    for (int i=0; i<n; i++) {
        arr[i] = arr[i]*100 / max; // 조작된 점수로 배열을 다시 초기화
        sum += arr[i]; // 조작된 점수의 합으로 sum 초기화
    }
    cout.precision(8); // 8자리의 숫자로 표현.
    cout << sum / n; // 조작된 점수의 합 평균
}
