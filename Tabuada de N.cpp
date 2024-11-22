#include <iostream>

int main() {
    int N;

    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    for(int i = 1; i <= 10; i++) {
        std::cout << N << " x " << i << " = " << N * i << std::endl;
    }
    system("pause");

    return 0;
   
}
