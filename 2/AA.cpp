#include <iostream>

int main() {
    int a, b, i, sum = 0;
    std::cin >> a >> b;
    
    for (i = a; i < b; i++) {
        std::cout << i << " + ";
        sum += i;
    }
    sum += b;

    std::cout << b << " = " << sum;

}