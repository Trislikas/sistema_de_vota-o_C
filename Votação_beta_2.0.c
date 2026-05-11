//  BIBLIOTECAS PARA ENTRADA E SAÍDA E MANUPULAÇÃO DE TEXTO 

#include <stdio.h>  
#include<string.h>

int main() {
    
// CRIAÇÃO DAS VARIÁVIS

int voto = 1; // ARMAZENA O VOTO DIGITADO PELO USUÁRIO

// AMAZERNAR OS NOMES DOS CANDIDATOS 

char nome1[30];
char nome2[30];
char nome3[30];
char nome4[30];

// CONTADORES DE VOTOS DOS CANDIDATOS, VOTOS BRANCO, VOTOS NULOS, TOTAL DE ELEITORES 

int candidato1 = 0;
int candidato2 = 0;
int candidato3 = 0;
int candidato4 = 0;
int branco = 0; 
int nulo = 0;
int eleitores = 0;

int candidato_eleito; // GUARDA O NÚMERO DO CANDIDATO ELEITO 
int maior_votos; // ARMAZENAR A MAIOR QUANDIDADE DE VOTOS 
int empate; // VERIFICAR EMPATE 
int caractere; // LIMPAR CARACTERES INVÁLIDOS 

// MENU DO SISTEMA 

printf("##Eleiçao Peor es Nada 2026##\n");
printf("\n=== MENU DE VOTACAO ===\n");
printf("\nCadastro dos candidatos\n");

// CADASTRO DOS CANDIDATOS 

printf("Digite o nome do candidato1: ");  // TODOS OS "PRINTS": SOLICITAM O NOME DOS CANDIDATOS REFERENTE AOS NÚMEROS
fgets(nome1, 30, stdin);                 // TODOS OS "FGETS" : LÊ O NOME DIGITADO PELO USUÁRIO 
nome1[strcspn(nome1, "\n")] = '\0';      // REMOVE O 'ENTER' (\n) SALVO PELO "FGETS"

printf("Digite o nome do candidato2: ");
fgets(nome2, 30, stdin);
nome2[strcspn(nome2, "\n")] = '\0'; 

printf("Digite o nome do candidato3: ");
fgets(nome3, 30, stdin);
nome3[strcspn(nome3, "\n")] = '\0'; 

printf("Digite o nome do candidato4: ");
fgets(nome4, 30, stdin);
nome4[strcspn(nome4, "\n")] = '\0'; 

// EXIPIÇÃO DAS OPÇÕES 

printf("\n");                                                                                    // SO FUCIONA COM ISSO
printf("Digite seu voto conforme as opções\n");                                                 // MOSTRA INTRUÇÕES DE VOTAÇÃO 
printf("Vender voto é crime, segundo o Art. 299 do Código Eleitoral (Lei nº 4.737/1965).\n");   //MOSTRA O AVISO ;)

printf("1 - %s\n", nome1);                                                                      //MOSTRA OS CANDIDATOS CADASTRADOS (NOME E NÚMEROS), TODOS OS "PRINTF"
printf("2 - %s\n", nome2);
printf("3 - %s\n", nome3);
printf("4 - %s\n", nome4);
printf("5 - Voto em Branco\n");                                                                 //MOSTRA A OPÇÕES DE VOTO EM BRANCO
printf("0 - Encerrar apuração\n\n");                                                            // MOSTRA A OPÇÕES DE ENCERRAR A VOTAÇÃO 

// LOOOOOP DA VOTAÇÃO 


while(voto != 0){                                           // O SISTEMA RODA ATE QUANDO O VOTO FOR DIFERENTE DE 0 

    printf("Digite o voto: ");                              // SOLICITA O VOTO DO ELEITOR 

if (scanf("%d", &voto) != 1){                              // LÊ SOMENTE NÚMERO; SE NÃO TIVER NÚMERO, ENTRA COM "PRINTF" DE VALIDAÇÃO DE ERRO.
    printf("Entrada invalida. Digite apenas numeros.\n");

while((caractere = getchar()) != '\n' && caractere != EOF){ // LIMPA CARACTERES
}

voto = -1;                                                  // DIFINE VALOR INVÁLIDO PARA CONTINUAR O LOOOOP 
continue;                                                   // RETORNA PARA O INÍCIO DO WHILE 'RECOMEÇA TUDO DE NOVO'

}


// INDENTIFICAÇÃO DOS VOTOS :| (SERA ??)

    switch (voto){              //"SWITC" PARA INDETIFICA O VOTOS DIGITADO

        case 0:                 // ENCERRA A VOTAÇAÕ, CASO O VOTO FOR 0
            break;

        case 1:                 // O "CASE" FOI UTILIZADO EM TODOS PARA IDENTIFICAÇÃO DOS VOTOS PARA O CANDIDATO, PARA AS SOMAS 
            candidato1++;      // SOMA O VOTO DO CANDIDATO 
            eleitores++;      // SOMA A QUANTIDADE DE ELEITORES
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

        
        default:            // QUALQUER OUTRO NÚMERO SERÁ CONSIDERADO VOTO NULO 
            nulo++;
            eleitores++;
            break;
    }   

    }

/* APUTAÇÃO DOS RESULTADOS (QUEM PERDEU, QUEM GANHOU) (|:), NÃO SEI COMO, MAS SERÁ QUE EU PODERIA REDUZIR ESSE "IF" PARA UM SÓ? 
OS CANDIDATOS FICAM EM VARIÁVEL SÓ */


candidato_eleito = 1;                       //INICIALMENTR CONSIDERA O CANDIDATO1 COMO LÍDER 
maior_votos = candidato1;                   // DEFINE A QUANTIDADE DE VOTOS DO CONDIDATO1 COM MAIOR VALOR INICIAL
empate = 0;                                 // INICIALMENTE CONSIDERA QUE NÃO EXISTE EMPATE 

if (candidato2 > maior_votos){            //"IF" VERIFICA SE O CANDIDATO POSSUI MAIS VOTOS, SEMPRE IDENTIFICANDO-OS  
    maior_votos = candidato2;
    candidato_eleito = 2;
    empate = 0;
} else if (candidato2 == maior_votos){      // VERIFICAR EMPATE COM O CANDIDATO 'VAI REPETIR COM OS DEMAIS CANDIDATOS'
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
    empate = 0;
} else if (candidato4 == maior_votos){
    empate = 1;
}


// EXIBIÇÃO DOS RESULTADOS (+4 ANOS OU SÓ 4 ANOS )

    printf("Resultado da Eleiçao Peor es Nada 2026\n");  // DEIXA ARRUMANDO, OU TENTA 

    if (maior_votos == 0){                                  //VERIFICA SE NEHUM CANDIDATO RECEBEU VOTOS, NÉ 
        printf("Nenhum candidato recebeu votos.\n\n");
    } else if (empate) {                                    //VERIFICA EMPATE 
        printf("Empate entre candidatos.\n\n");
    }   else {                                              // EXIBE O VENCEDOR 
        printf("Candidato eleito: ");

        switch (candidato_eleito){                          // MOSTRA O NOME DO CANDIDATO VENCEDOR (+4 ANOS)
            case 1: 

                printf("%s\n\n", nome1);
                break;
            case 2:

                printf("%s\n\n", nome2);
                break;
            case 3:

                printf("%s\n\n", nome3);
                break;
            case 4:

                printf("%s\n\n", nome4);
                break;
        }
    }

// RELATÓTIO 

                                                                // MOSTRA O TOTAL DE VOTOS DE TODOS OS CANDIDATOS 
    printf("Total de votos de %s: %d\n", nome1, candidato1);            
    printf("Total de votos de %s: %d\n", nome2, candidato2);
    printf("Total de votos de %s: %d\n", nome3, candidato3);
    printf("Total de votos de %s: %d\n", nome4, candidato4);

    printf("\nVotos em branco: %d\n", branco);                  //MOSTRA VOTOS EM BRANCO 
    printf("Votos nulos: %d\n", nulo);                          //MOSTRA VOTOS NULO 

    printf("Total de eleitores: %d\n", eleitores);              // MOSTRA TOTAL DE ELEITORES 


    return 0;                                                   // FINALIZA O PROGRAMA "se tudo estiver certo e no meu lugar kkkk!"
        
/*                      
    Estrutura mental:

IMPORTAR ferramentas
        ↓
INICIAR sistema
        ↓
CRIAR memória (variáveis)
        ↓       
CADASTRAR candidatos
        ↓
MOSTRAR menu
        ↓
RECEBER votos
        ↓
VALIDAR votos
        ↓       
CONTABILIZAR votos
        ↓
APURAR eleição
        ↓
MOSTRAR resultado
        ↓
ENCERRAR sistema


Trislikas（*＾-＾*）

*/
