#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int s;
    cin >> s;
    cin.ignore();
    for (int i=0; i<s; i++) {
        int score = 0, mulN = 1;
        string result;
        getline(cin, result);
        for (int j=0; j<result.size(); j++) {
            if (result[j] == 'O') {
                score += mulN;
                mulN++;
            }
            else if (result[j] == 'X') {
                mulN = 1;
                continue;
            }
            else return 0;
        }
        cout << score << '\n';
    }
}