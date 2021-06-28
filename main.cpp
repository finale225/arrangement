#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c; // 테스트 케이스 개수 입력
    for (int i=0; i<c; i++) {
        int n;
        double sum = 0; // 학생 점수의 합을 나타내는 변수
        cin >> n; // 각 테스트 케이스 별 학생 수
        int studArr[n] = {0}; // 테스트 케이스 별 학생 수를 크기로 하는 배열 생성 및 초기화
        for (int j=0; j<n; j++) {
            cin >> studArr[j]; // 학생들의 점수를 입력
            sum += studArr[j]; // 바로 학생들의 점수의 합을 구한다.
        }
        double avg = sum / n; // 점수의 평균
        double count = 0; // 평균을 넘는 학생 수를 세는 변수
        for (int k=0; k<n; k++) {
            if (studArr[k] > avg) count++; // 학생 점수가 평균을 넘으면 count 변수 1씩 증가
        }
        cout << fixed; // 소수점 고정
        cout.precision(3); // 소수점 3자리 표현 (반올림 된다)
        cout << count*100 / n << '%' << '\n'; // 평균을 넘는 학생 수를 총 학생 수 즉, 배열의 크기로 나눈 것에 100을 곱하여 % 단위로 만든다.
    }
}