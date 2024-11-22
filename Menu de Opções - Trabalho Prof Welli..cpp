#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

// Fun��o para calcular a �rea de um terreno
void calcularAreaTerreno() {
    double comprimento, largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite a largura do terreno: ";
    cin >> largura;

    double area = comprimento * largura;
    cout << "A �rea do terreno �: " << area << " metros quadrados." << endl;
}

// Fun��o para calcular a m�dia de AV1, AV2 e AV3
void calcularMediaAV() {
    double av1, av2, av3;
    cout << "Digite a nota da AV1: ";
    cin >> av1;
    cout << "Digite a nota da AV2: ";
    cin >> av2;
    cout << "Digite a nota da AV3: ";
    cin >> av3;

    double media = (av1 + av2 + av3) / 3;
    cout << "A m�dia das notas �: " << fixed << setprecision(2) << media << endl;
}

// Fun��o para determinar se um n�mero � PAR ou �MPAR
void verificarParImpar() {
    int numero;
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " � um n�mero PAR." << endl;
    } else {
        cout << numero << " � um n�mero �MPAR." << endl;
    }
}

// Fun��o para calcular o sal�rio l�quido (considerando o INSS)
void calcularSalarioLiquido() {
    double salarioBruto;
    cout << "Digite o sal�rio bruto: ";
    cin >> salarioBruto;

    // C�lculo do desconto do INSS (exemplo: 11%)
    double inss = salarioBruto * 0.11;
    double salarioLiquido = salarioBruto - inss;

    cout << "O sal�rio l�quido �: " << fixed << setprecision(2) << salarioLiquido << " (desconto de INSS: " << inss << ")" << endl;
}

// Fun��o para realizar compras de produtos de inform�tica
void realizarCompras() {
    // Compras de produtos de inform�tica
 
using namespace std;

   string escolha;
    int quantidade;
    float precoMouse = 150;
    float precoTeclado = 250;
    float precoHeadset = 500;
    float precoWebcam = 200;

    cout << "Deseja comprar algum produto? (S/N): ";
    cin >> escolha;

    // Realizando a compra, se desejado
    if (escolha == "S" || escolha == "s") {
        cout << "Produtos dispon�veis: Mouse, Teclado, Headset, Webcam" << endl;
        cout << "Escolha o produto: ";
        cin >> escolha;

        // Determinando o pre�o do produto escolhido
        float precoProduto = 0;
        if (escolha == "Mouse" || escolha == "mouse") {
            precoProduto = precoMouse;
        } else if (escolha == "Teclado" || escolha == "teclado") {
            precoProduto = precoTeclado;
        } else if (escolha == "Headset" || escolha == "headset") {
            precoProduto = precoHeadset;
        } else if (escolha == "Webcam" || escolha == "webcam") {
            precoProduto = precoWebcam;
        } else {
            cout << "Produto inv�lido." << endl;
                  }

        cout << "Quantidade: ";
        cin >> quantidade;

        // Calculando o valor total da compra
        float valorTotal = quantidade * precoProduto;
        cout << "Valor total da compra: " << valorTotal << " reais" << endl;
    }


}

// Fun��o para converter graus Celsius em Fahrenheit
void converterCelsiusParaFahrenheit() {
    double celsius;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << celsius << " graus Celsius � igual a " << fahrenheit << " graus Fahrenheit." << endl;
}

// Fun��o para a��es de acordo com o sem�foro
void acoesSemafaro() {
     char CS;
    double DC;

    std::cout << "Digite a cor do sem�foro (V, A, D): ";
    std::cin >> CS;

    std::cout << "Digite a dist�ncia do cruzamento: ";
    std::cin >> DC;

    switch (CS) {
        case 'V':
            std::cout << "Sinal vermelho: Pare!";
            break;
        case 'A':
            if (DC < 5) {
                std::cout << "Sinal amarelo: Passe com cuidado!";
            } else {
                std::cout << "Sinal amarelo: Pare com cuidado!";
            }
            break;
        case 'D':
            std::cout << "Sinal verde: Pode passar!";
            break;
        default:
            std::cout << "Cor do sem�foro inv�lida. Digite V, A ou D.";
            break;
    }
system("pause");
   
}


// Fun��o para imprimir n�meros pares de 0 a 100 e a soma desses n�meros usando o comando FOR
void imprimirNumerosPares() {
    int soma = 0;
    for (int i = 0; i <= 100; i += 2) {
        cout << i << " ";
        soma += i;
    }
    cout << "\nA soma dos n�meros pares �: " << soma << endl;
}

// Fun��o para imprimir a tabuada de um multiplicador N informado pelo usu�rio
void imprimirTabuada() {
    int multiplicador;
    cout << "Digite um multiplicador para a tabuada: ";
    cin >> multiplicador;

    for (int i = 1; i <= 10; ++i) {
        cout << multiplicador << " x " << i << " = " << multiplicador * i << endl;
    }
}

int main() {
setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
        cout << "\n***** Menu de Op��es *****\n";
        cout << "1. Calcular a �rea de um terreno\n";
        cout << "2. Calcular a m�dia de AV1, AV2 e AV3\n";
        cout << "3. Determinar se um n�mero � PAR ou �MPAR\n";
        cout << "4. C�lculo Sal�rio L�quido (c�lculo do INSS)\n";
        cout << "5. Compras de produtos de inform�tica\n";
        cout << "6. Conversor graus Celsius em Fahrenheit\n";
        cout << "7. A��es de acordo com o sem�foro\n";
        cout << "8. Imprimir n�meros pares de 0 a 100 e a soma desses n�meros (FOR)\n";
        cout << "9. Imprimir a tabuada de multiplicador N\n";
        cout << "0. Sair do programa\n";
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                calcularAreaTerreno();
                break;
            case 2:
                calcularMediaAV();
                break;
            case 3:
                verificarParImpar();
                break;
            case 4:
                calcularSalarioLiquido();
                break;
            case 5:
                realizarCompras();
                break;
            case 6:
                converterCelsiusParaFahrenheit();
                break;
            case 7:
                acoesSemafaro();
               break;
            case 8:
                imprimirNumerosPares();
                break;
            case 9:
                imprimirTabuada();
                break;
            case 0:
                cout << "Saindo do programa. At� mais!\n";
                break;
            default:
                cout << "Op��o inv�lida. Tente novamente.\n";
        }

    } while (opcao != 0);

    return 0;
}



