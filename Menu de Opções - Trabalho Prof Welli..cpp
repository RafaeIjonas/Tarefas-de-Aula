#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

// Função para calcular a área de um terreno
void calcularAreaTerreno() {
    double comprimento, largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite a largura do terreno: ";
    cin >> largura;

    double area = comprimento * largura;
    cout << "A área do terreno é: " << area << " metros quadrados." << endl;
}

// Função para calcular a média de AV1, AV2 e AV3
void calcularMediaAV() {
    double av1, av2, av3;
    cout << "Digite a nota da AV1: ";
    cin >> av1;
    cout << "Digite a nota da AV2: ";
    cin >> av2;
    cout << "Digite a nota da AV3: ";
    cin >> av3;

    double media = (av1 + av2 + av3) / 3;
    cout << "A média das notas é: " << fixed << setprecision(2) << media << endl;
}

// Função para determinar se um número é PAR ou ÍMPAR
void verificarParImpar() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " é um número PAR." << endl;
    } else {
        cout << numero << " é um número ÍMPAR." << endl;
    }
}

// Função para calcular o salário líquido (considerando o INSS)
void calcularSalarioLiquido() {
    double salarioBruto;
    cout << "Digite o salário bruto: ";
    cin >> salarioBruto;

    // Cálculo do desconto do INSS (exemplo: 11%)
    double inss = salarioBruto * 0.11;
    double salarioLiquido = salarioBruto - inss;

    cout << "O salário líquido é: " << fixed << setprecision(2) << salarioLiquido << " (desconto de INSS: " << inss << ")" << endl;
}

// Função para realizar compras de produtos de informática
void realizarCompras() {
    // Compras de produtos de informática
 
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
        cout << "Produtos disponíveis: Mouse, Teclado, Headset, Webcam" << endl;
        cout << "Escolha o produto: ";
        cin >> escolha;

        // Determinando o preço do produto escolhido
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
            cout << "Produto inválido." << endl;
                  }

        cout << "Quantidade: ";
        cin >> quantidade;

        // Calculando o valor total da compra
        float valorTotal = quantidade * precoProduto;
        cout << "Valor total da compra: " << valorTotal << " reais" << endl;
    }


}

// Função para converter graus Celsius em Fahrenheit
void converterCelsiusParaFahrenheit() {
    double celsius;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << celsius << " graus Celsius é igual a " << fahrenheit << " graus Fahrenheit." << endl;
}

// Função para ações de acordo com o semáforo
void acoesSemafaro() {
     char CS;
    double DC;

    std::cout << "Digite a cor do semáforo (V, A, D): ";
    std::cin >> CS;

    std::cout << "Digite a distância do cruzamento: ";
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
            std::cout << "Cor do semáforo inválida. Digite V, A ou D.";
            break;
    }
system("pause");
   
}


// Função para imprimir números pares de 0 a 100 e a soma desses números usando o comando FOR
void imprimirNumerosPares() {
    int soma = 0;
    for (int i = 0; i <= 100; i += 2) {
        cout << i << " ";
        soma += i;
    }
    cout << "\nA soma dos números pares é: " << soma << endl;
}

// Função para imprimir a tabuada de um multiplicador N informado pelo usuário
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
        cout << "\n***** Menu de Opções *****\n";
        cout << "1. Calcular a área de um terreno\n";
        cout << "2. Calcular a média de AV1, AV2 e AV3\n";
        cout << "3. Determinar se um número é PAR ou ÍMPAR\n";
        cout << "4. Cálculo Salário Líquido (cálculo do INSS)\n";
        cout << "5. Compras de produtos de informática\n";
        cout << "6. Conversor graus Celsius em Fahrenheit\n";
        cout << "7. Ações de acordo com o semáforo\n";
        cout << "8. Imprimir números pares de 0 a 100 e a soma desses números (FOR)\n";
        cout << "9. Imprimir a tabuada de multiplicador N\n";
        cout << "0. Sair do programa\n";
        cout << "Escolha uma opção: ";
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
                cout << "Saindo do programa. Até mais!\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }

    } while (opcao != 0);

    return 0;
}



