

#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    double AV1, AV2, AV3;
    double soma, media;

    cout << "Insira a Nota da AV1: ";
    cin >> AV1;

    cout << "Insira a Nota da AV2: ";
    cin >> AV2;

    cout << "Insira a Nota da AV3: ";
    cin >> AV3;

    soma = AV1 + AV2 + AV3;
    media = soma / 3;

    cout << "A média das notas AV1, AV2 e AV3 é: " << media << endl;

    system("pause"); 

    return 0;
}

