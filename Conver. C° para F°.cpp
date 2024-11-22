#include <iostream>
#include <locale.h>
using namespace std;

// Function to convert Celsius to Fahrenheit
double convertCelsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    double celsius;

    cout << "Digite um valor em graus Celsius: ";
    cin >> celsius;

    double fahrenheit = convertCelsiusToFahrenheit(celsius);

    cout << celsius << " graus Celsius eh igual a " << fahrenheit << " graus Fahrenheit." << endl;

    system("pause");
    return 0;

}
