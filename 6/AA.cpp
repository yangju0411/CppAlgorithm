// 문자열에서 숫자만 추출하기
#include <stdio.h>

int main() {
    char str[50];
    int i, j, num = 0, cnt = 0;

    scanf("%s", &str);


    for (i = 0; str[i] != 0; i++) {
        if (str[i] >= 48 && str[i] <= 57) { //아스키 코드에서 0~9까지의 범위
            num = num * 10 + (str[i] - 48); // 이전 넘버에 10을 곱해서 밀어주고 더해주는 식으로 자릿수를 맞춤
        }
    }

    for (j = 1; j <= num / 2; j++) {
        if (num % j == 0) cnt++; // 진약수 구하는 코드 응용
    }
    cnt++; // 위의 진약수의 수에 1을 더해 약수의 수 구해줌

    printf("%d\n%d", num, cnt);
    return 0;
}