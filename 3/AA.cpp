// 03. 진약수의 합
#include <iostream>

int main() {
    int n = 0;
    int i = 1, sum = 1; //진약수에는 무조건 1을 포함하므로 1로 초기화

    std::cin >> n;
    std::cout << i; //1을 먼저 출력
    for (i = 2; i <= n / 2; i++) {
        // 진약수를 구하는 것이므로 2로 나눠 한도를 제약하는 것이 반복이 줄어듦
        if (n % i == 0) {
            std::cout << " + " << i;
            sum += i;
        }
    }
    std::cout << " = " << sum;
}