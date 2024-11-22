#include <iostream>

int main() {
    double num1, num2, num3, sum, average;

    std::cout << "Enter the marks of AV1: ";
    std::cin >> num1;

    std::cout << "Enter the marks of AV2: ";
    std::cin >> num2;

    std::cout << "Enter the marks of AV3: ";
    std::cin >> num3;

    sum = num1 + num2 + num3;
    average = sum / 3;

    std::cout << "\nThe average marks of AV1, AV2, and AV3 is: " << average << std::endl;
 system("pause");
    return 0;
}
