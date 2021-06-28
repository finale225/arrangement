#include <iostream>
#define stdN 42 // 입력받은 숫자들을 42로 나눈 나머지의 개수(중복 제외) 구하기
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n[10] = {0}, arr[stdN] = {0}, count = 0; // 배열 n은 사용자에게 입력받은 숫자를 저장하는 배열. 배열 arr은 나머지의 개수를 저장하는 배열. 나머지 1이 10개라면 arr[1] == 10.
    for (int i=0; i<10; i++) {
        cin >> n[i]; // 사용자로부터 숫자 입력받기
        arr[n[i] %= stdN]++; // 사용자로부터 입력받은 숫자를 stdN으로 나눈 나머지를 인덱스로 하여 나머지 개수를 저장하는 배열인 arr에 저장
    }
    for (int i=0; i<stdN; i++) {
        if (arr[i] != 0) count++; // 반복을 통하여 배열 arr의 인덱스 값을 집어 넣어 배열의 값을 확인한다. 0이라면 인덱스에 해당하는 배열의 값이 없다는 것 즉, 42로 나누었을 때 나머지 값이 없다는 것이다.
    } // 0보다 크다면 나머지가 존재하는 것이므로 count를 증가시켜준다. 중복된 나머지 값 계산을 피하기 위해서이다.
    cout << count;
}
