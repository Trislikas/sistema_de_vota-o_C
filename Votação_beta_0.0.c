#include <stdio.h>   

int main() {
    
// Criação das variáveis. vc 

int voto;

int candidato1 = 0;
int candidato2 = 0;
int candidato3 = 0;
int candidato4 = 0;
int branco = 0;
int nulo = 0;
int eleitores = 0;
int candidato_eleito; 

// Mensagem, onde vai listar os candidatos, a numeração e o voto branco.

printf("Eleiçao Peor es Nada 2024\n");
printf("Digite seu voto conforme as opções\n");
printf("Vender voto é crime, segundo o Art. 299 do Código Eleitoral (Lei nº 4.737/1965).\n");
printf("1 - Candidato 1\n");
printf("2 - Candidato 2\n");
printf("3 - Candidato 3\n");
printf("4 - Candidato 4\n");
printf("5 - Voto em Branco\n"); 
printf("0 - Encerrar apuração\n\n");


// Leitura e processamento dos votos.

printf("Digite o voto: ");
scanf("%d", &voto);

// sistema de loop dos votos 

while (voto != 0) {

    // validação do voto 

    switch (voto){

        case 1:
            candidato1++;
            eleitores++;
            break;
               
        case 2:
            candidato2++;
            eleitores++;
            break;

        case 3:
            candidato3++;
            eleitores++;
            break;
        
        case 4:
            candidato4++;
            eleitores++;
            break;

        case 5:
            branco++;
            eleitores++;
            break;

        // Voto nulo, outos Valor que nao ser considerado.
        default:
            nulo++;
            eleitores++;
            break;
    }   

// Novo voto loop

printf("Digite o valor: ");
scanf("%d", &voto);

            }
// verificação  dos candidato eleito 

candidato_eleito = 1;

if (candidato2 > candidato1 &&
    candidato2 > candidato3 &&
    candidato2 > candidato4){

       candidato_eleito = 2;
    }

if (candidato3 > candidato1 &&
    candidato3 > candidato2 &&
    candidato3 > candidato4){

        candidato_eleito = 3;

    }
if (candidato4 > candidato1 &&
    candidato4 > candidato2 &&
    candidato4 > candidato3){
        
        candidato_eleito = 4;
    }

// Exibição das Apuração dos votos 

    printf("Resultado da Eleiçao Peor es Nada 2026\n");

    printf("Candidato eleito: %d\n\n", candidato_eleito);

    printf("Total de votos do candidato 1 : %d\n", candidato1);
    printf("Total de votos do candidato 2 : %d\n", candidato2);
    printf("Total de votos do candidato 3 : %d\n", candidato3);
    printf("Total de votos do candidato 4 : %d\n", candidato4);

    printf("\nVotos em branco: %d\n", branco);
    printf("Votos nulos: %d\n", nulo);

    printf("Total de eleitores: %d\n", eleitores);


    return 0;

            }

            