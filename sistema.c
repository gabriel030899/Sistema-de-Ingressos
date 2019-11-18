#include <stdio.h>
#include <stdlib.h>

//Funcao inicial do programa
void main(){
    int op;
    printf(" - Bem vindo! - \n\nSelecione o que deseja: \n1. Comprar ingressos\n2. Quit\n\nDigite: ");
    scanf("%d", &op);
    if(op == 1){
        return data();
    }
    else{
        exit(2);
    }
    return 0;
}
//Variavel Global para verificar se eh Terca-feira ou nao para aplicar o desconto de 100% de criancas carentes da rede publica de ensino.
int descontoTer=0;
//Funcao da escolha da data do usuario
int data(){
    int dia;
    system("cls");

    printf("Dias da semana: \n\n1. Domingo\n2. Segunda-feira\n3. Terca-feira\n4. Quarta-feira\n5. Quinta-feira\n6. Sexta-feira\n7. Sabado\n\nEscolha o dia que deseja: ");
    scanf("%d", &dia);
    switch(dia){
        case 1:
            system("cls");
            printf(" - Domingo - ");
            return compras();
            break;
    }
}
// Variaveis Globais de compras para usar na variavel totalIngressos.
int ingInteiro;
int ingMeia;
int ingTer;
char nome[15];
char email[50];
// Variavel global para saber o total de ingressos comprados.
int totalIngressos;
//Funcao de compra de ingresso
int compras(){

    printf("\n\n - Preencha o cadastro para efetuar a compra: \n\nPrimeiro Nome: ");
    scanf("%s", nome);
    printf("\nE-mail que sera enviado(s) o(s) ingresso(s): ");
    scanf("%s", email);

    printf("\n\n - Tipos de ingressos:\n(Os documentos serao solicitados na entrada para validacao dos ingressos.) \n\nInteiro: ");
    scanf("%d", &ingInteiro);
    printf("\n(Valido para estudantes, criancas de 02 a 12 anos, adultos a partir de 60 anos e professores da rede publica de ensino.)\nMeia-entrada: ");
    scanf("%d", &ingMeia);
    if(descontoTer == 1){
        printf("\n\n(Somente valido para criancas carentes da rede publica de ensino.)\nGratuito: ");
        scanf("%d", &ingTer);
    }
// Condicao para contar o total de ingressos quando eh Terca-feira e quando nao eh.
if (descontoTer == 1){
    totalIngressos = totalIngressos+ingInteiro+ingMeia+ingTer;
}
else{
    totalIngressos = totalIngressos+ingInteiro+ingMeia;
}
    return reservarLugares();
}
//Array com as posicoes das cadeiras
char c[10]={1,2,3,4,5,6,7,8,9,10};
//Funcao para aparecer os lugares disponiveis atualizados
void mostrarLugares(){
    printf("\n\n(%d)  (%d)  (%d)  (%d)  (%d)\n\n(%d)  (%d)  (%d)  (%d)  (%d)\n\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9]);
}
//Variavel global para guardar o lugar que o usuario digitou
    int inputLugar;
//Funcao para reservar lugar
void reservarLugares(){
    int i;
    system("cls");
    printf(" - Lugares DIsponiveis - ");
    mostrarLugares();
    printf("Digite o lugar que deseja reservar(digite 99 se quiser sair): ");
    scanf("%i", &i);
    c[i-1]=0;
    system("cls");
    if(i==99){
        return ticket();
    }
    else if(i != 99){
        inputLugar = i;
    }
    else{}
    return reservarLugares();
}
//Funcao para aparecer o ingresso impresso
void ticket(){
    printf("\nEste ingresso foi enviado para o E-mail: %s\n\nObrigado pela compra, tenha um otimo espetaculo!\n\n*************************\n\nNome: %s\nData: \nCadeira(s): %d\n\n*************************", email, nome, inputLugar);
}




// CONTINUAR OS DIAS DA SEMANA E ALTERAR PARA QUE O USUARIO COMPRE APENAS 1 INGRESSO DE CADA VEZ.




