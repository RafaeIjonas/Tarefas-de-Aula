
#include <locale.h>
#include <iostream>
using namespace std;

// Fun��o para calcular a �rea do terreno
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

    cout << "A �rea do terreno �: " << area << " metros quadrados" << endl;
    system("pause");
    return 0;
   
}
