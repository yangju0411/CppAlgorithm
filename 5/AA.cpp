// 나이 계산

#include <stdio.h>

int main() {
    //freopen("C:/Users/pdgzms/Documents/Inflearn/CppAlgorithm/5/in1.txt", "rt", stdin);
    char num[14];
    int year, age;
    scanf("%s", &num); 

    // 뒷 자리 첫 번호가 1이나 2면 1900년대생 2000년대생은 그 이후이다.
    if (num[7] == '1' || num[7] == '2') {
        year = 1900 + (num[0] - 48) * 10 + (num[1] - 48); // 문자열을 정수로 맞춰주기 위해 -48
    }
    else {
        year = 2000 + (num[0] - 48) * 10 + (num[1] - 48);
    }

    printf("%d", (2019 - year + 1));

    switch(num[7]-48) {
        case 1:
            printf(" M");
            break;
        case 2:
            printf(" W");
            break;
        case 3:
            printf(" M");
            break;
        case 4:
            printf(" W");
            break;
    }

    return 0;
}