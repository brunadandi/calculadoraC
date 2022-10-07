#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    double num1, num2;
    char op;
    wprintf(L"\n Universidade La Salle | Tecnólogo em Análise e Desenvolvimento de Sistemas");
    wprintf(L"\n Aluna: Bruna Raísa Dandi Cardoso | Matrícula: 202220887 \n");
    while (1) {  // Função para retornar a calculadora até que o usuário deseje encerrar o programa
        wprintf(L"\n Escolha um operador (aceita-se adição +, subtração -, divisão /, multiplicação *, raiz quadrada r e potenciação ^). \n Se você deseja encerrar o programa, selecione x:\n");
        scanf(" %c", &op);

        if (op == 'x') // Comando para terminar o programa pela falsidade do parâmetro do While
            exit(0);

        wprintf(L" Insira um número:\n "); // Peço o primeiro operando para o usuário
        scanf("%lf", &num1);
        if (op != 'r') { // Como raiz quadrada aceita apenas um operando, uso o If para limitar o segundo operando
            wprintf(L"Insira um número:\n");
            scanf("%lf", &num2);
        }

        switch (op) {
            case '+': // Para o operador +, defino a função de adição
                wprintf(L" O resultado é: %.2lf \n", num1 + num2);
                break;
            case '-': // Para o operador -, defino a função de subtração
                wprintf(L" O resultado é: %.2lf \n", num1 - num2);
                break;
            case '*': // Para o operador *, defino a função de multiplicação
                wprintf(L" O resultado é:  %.2lf \n", num1 * num2);
                break;
            case '/': // Para o operador /, defino a função de divisão
                if (num2 != 0) { // Função para limitar o usuário de escolher 0 como divisor
                    wprintf(L" O resultado é: %.2lf \n", num1 / num2);
                } else {
                    wprintf(L"\n OPS!!! Não é possível inserir um divisor igual a 0 \n");
                }
                break;
            case '^': // Para o operador ^, defino a função de potenciação
                wprintf(L" O resultado do operando %.2lf na potência de %.2lf é: %.2lf\n", num1, num2, pow(num1, num2));
                break;
            case 'r': // Para o operador  r, defino a função de raiz quadrada
                wprintf(L" A raiz quadrada de %.2lf é: %.2lf \n", num1, sqrt(num1));
                break;
            default:
                wprintf(L"\n OPS!!!!Operador inválido!!!!\n");

        }
    }
}
