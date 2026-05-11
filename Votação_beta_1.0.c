#include <stdio.h>   

int main() {
    
// Criação das variáveis.

int voto;

int candidato1 = 0;
int candidato2 = 0;
int candidato3 = 0;
int candidato4 = 0;
int branco = 0;
int nulo = 0;
int eleitores = 0;
int candidato_eleito;
int maior_votos;
int empate;
int caractere;

// Mensagem, onde vai listar os candidatos, a numeração e o voto branco.

printf("Eleiçao Peor es Nada 2026\n");
printf("Digite seu voto conforme as opções\n");
printf("Vender voto é crime, segundo o Art. 299 do Código Eleitoral (Lei nº 4.737/1965).\n");
printf("1 - Candidato 1\n");
printf("2 - Candidato 2\n");
printf("3 - Candidato 3\n");
printf("4 - Candidato 4\n");
printf("5 - Voto em Branco\n"); 
printf("0 - Encerrar apuração\n\n");


// Leitura e processamento dos votos.

// sistema de loop dos votos. 

    while(1){ 

        printf("Digite o voto: ");

    if (scanf("%d", &voto) != 1){
        printf("Entrada invalida. Digite apenas numeros.\n");

        while((caractere = getchar()) != '\n' && caractere != EOF){
        }

        continue;

    }

if (voto == 0){
    break;

}

    // validação de voto 

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

        // Voto nulo, outro valor que não deve ser considerado.
        default:
            nulo++;
            eleitores++;
            break;
    }   

    }

// Verificação do candidato eleito. 

candidato_eleito = 1;
maior_votos = candidato1;
empate = 0;

if (candidato2 > maior_votos){
    maior_votos = candidato2;
    candidato_eleito = 2;
    empate = 0;
} else if (candidato2 == maior_votos){
    empate = 1;
}

if (candidato3 > maior_votos){
    maior_votos = candidato3;
    candidato_eleito = 3;
    empate = 0;
} else if (candidato3 == maior_votos){
    empate = 1;
}

if (candidato4 > maior_votos){
    maior_votos = candidato4;
    candidato_eleito = 4;
    empate = 1;
} else if (candidato4 == maior_votos){
    empate = 1;
}


// Exibição da apuração dos votos. 

    printf("Resultado da Eleiçao Peor es Nada 2026\n");

    if (maior_votos == 0){
        printf("Nenhum candidato recebeu votos.\n\n");
    } else if (empate) {
        printf("Empate entre candidatos.\n\n");
    }   else {
        printf("Candidato eleito: %d\n\n", candidato_eleito);
    }
    

    printf("Total de votos do candidato 1 : %d\n", candidato1);
    printf("Total de votos do candidato 2 : %d\n", candidato2);
    printf("Total de votos do candidato 3 : %d\n", candidato3);
    printf("Total de votos do candidato 4 : %d\n", candidato4);

    printf("\nVotos em branco: %d\n", branco);
    printf("Votos nulos: %d\n", nulo);

    printf("Total de eleitores: %d\n", eleitores);


    return 0;
}

        
/*
Descrição Textual do Fluxograma
INÍCIO
↓
Criar variáveis
↓
Mostrar menu da eleição
↓
Entrar no loop de votação
    ↓
    Pedir voto
    ↓
    Entrada válida?
       ├── NÃO → mostrar erro → voltar
       └── SIM
              ↓
         voto é 0?
              ├── SIM → encerrar votação
              └── NÃO
                     ↓
                identificar voto
                     ↓
                contabilizar
                     ↓
                voltar ao início do loop
                    ↓
                Verificar vencedor
                    ↓
                Verificar empate
                    ↓
                Mostrar resultados
                    ↓
                FIM*/