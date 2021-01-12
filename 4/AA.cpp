// 04. 나이차이
#include <iostream>

using namespace std;
int main() {
    //freopen("C:/Users/pdgzms/Documents/Inflearn/CppAlgorithm/4/in1.txt", "rt", stdin);
    int n, i, temp, min, max;
    cin >> n;
    cin >> min;
    max = min; // 처음 들어오는 수를 최소값과 최대값으로 초기화
    for (i = 0; i < n - 1; i++) {
        // 위에서 한 번 인풋 받았으므로 n - 1번 반복
        cin >> temp;
        if (temp < min) min = temp;
        if (temp > max) max = temp;
    }
    cout << max - min;
}