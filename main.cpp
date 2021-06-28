#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, b, c, result;
    int n[10] = {0}; // 배열 n은 각 숫자의 개수를 나타낸다. 즉 n[0]은 0의 개수, n[1]은 1의 개수, ... n[9]는 9의 개수이다.
    cin >> a >> b >> c; // 곱셈을 할 세 숫자를 입력받는다.
    result = a*b*c; // 세 수의 곱
    while (result != 0) { // 반복을 진행하면서 result를 10으로 나눈 몫으로 초기화해준다. 따라서 result가 0이 나오면 반복이 종료되어야 한다.
        n[result%10]++; // result를 10으로 나눈 나머지는 가장 낮은 자리의 수의 값이며 그 수를 인덱스로 하여 개수를 증가시켜준다.
        result /= 10; // result를 10으로 나눈 몫으로 초기화하여 바로 위에서 구한 낮은 자리의 수보다 한 자리 더 큰 수를 계산할 수 있도록 한다.
    }
    for (int i=0; i<10; i++) cout << n[i] << '\n'; // 세 수의 곱셈 결과의 0의 개수, 1의 개수, ... , 9의 개수를 출력한다.
}
