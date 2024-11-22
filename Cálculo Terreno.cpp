
#include <locale.h>
#include <iostream>
using namespace std;

// Função para calcular a área do terreno
double calcularArea(double largura, double comprimento) {
    return largura * comprimento;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    double largura, comprimento, area;

    cout << "Digite a largura do terreno (metros): ";
    cin >> largura;

    cout << "Digite o comprimento do terreno (metros): ";
    cin >> comprimento;

    area = calcularArea(largura, comprimento);

    cout << "A área do terreno é: " << area << " metros quadrados" << endl;
    system("pause");
    return 0;
   
}
