#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int s;
    cin >> s;
    cin.ignore(); // cin의 버퍼에 남아 있는 값이 getline에 입력되므로 cin.ignore() 함수 사용
    for (int i=0; i<s; i++) {
        int score = 0, mulN = 1; // score는 점수를 나타내는 변수이고 mulN은 정답(O)을 점수로 환산하기 위한 변수
        string result; // 정답, 오답을 나타내는 문자열
        getline(cin, result); 
        for (int j=0; j<result.size(); j++) { // 문자열 크기만큼 반복
            if (result[j] == 'O') { // 만약 정답이라면
                score += mulN; // 점수에 mulN을 더 해준다.
                mulN++; // 연속된 O 즉, OO이면 점수는 1+2=3 , OOO이면 점수는 1+2+3이므로 반복을 통해 O가 연속되면 1점이 아닌 가산된 점수를 더 하도록 mulN의 값을 1씩 증가시켜줌
            }
            else if (result[j] == 'X') { // 만약 오답이라면
                mulN = 1; // mulN의 값을 1로 초기화시켜준다.
                continue; // 다시 반복
            }
            else return 0; // 정답이나 오답이 아닌 다른 문자를 읽으면 오류 방지를 위해 리턴
        }
        cout << score << '\n';
    }
}
