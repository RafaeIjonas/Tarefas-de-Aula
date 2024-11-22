#include <iostream>

int main() {
    int soma = 0;

    for(int i = 0; i <= 100; i++) {
        if(i % 2 == 0) {
            std::cout << i << std::endl;
            soma += i;
        }
    }

    std::cout << "A soma dos numeros pares e: " << soma << std::endl;

system("pause");
    return 0;
}
