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
// Variaveis Globais com informacoes das datas
int diaSemana;
int mes = 11;
int ano = 2019;
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
            diaSemana=24;
            return compras();
            break;
        case 2:
            system("cls");
            printf(" - Segunda-Feira - ");
            diaSemana=25;
            return compras();
            break;
        case 3:
            system("cls");
            printf(" - Terca-Feira - ");
            diaSemana=26;
            descontoTer = 1;
            return compras();
            break;
        case 4:
            system("cls");
            printf(" - Quarta-Feira - ");
            diaSemana=27;
            return compras();
            break;
        case 5:
            system("cls");
            printf(" - Quinta-Feira - ");
            diaSemana=28;
            return compras();
            break;
        case 6:
            system("cls");
            printf(" - Sexta-Feira - ");
            diaSemana=29;
            return compras();
            break;
        case 7:
            system("cls");
            printf(" - Sabado - ");
            diaSemana=30;
            return compras();
            break;
        default:
            return data();
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
int ingresso;
//Funcao de compra de ingresso
int compras(){

    printf("\n\n - Preencha o cadastro para efetuar a compra: \n\nPrimeiro Nome: ");
    scanf("%s", nome);
    printf("\nE-mail que sera enviado(s) o(s) ingresso(s): ");
    scanf("%s", email);

    if(descontoTer == 1){
        printf("\n\n - Tipos de ingressos:\n(Os documentos serao solicitados na entrada para validacao dos ingressos.) \n\n1. Inteiro\n2. Meia-entrada\n(Valido para estudantes, criancas de 02 a 12 anos, adultos a partir de 60 anos e professores da rede publica de ensino.)\n3. Gratuito\n(Somente valido para criancas carentes da rede publica de ensino.)\n\nEscolha seu ingresso: ");
        scanf("%d", &ingresso);
    }
    else{
        printf("\n\n - Tipos de ingressos:\n(Os documentos serao solicitados na entrada para validacao dos ingressos.) \n\n1. Inteiro\n2. Meia-entrada\n(Valido para estudantes, criancas de 02 a 12 anos, adultos a partir de 60 anos e professores da rede publica de ensino.)\n\nEscolha seu ingresso: ");
        scanf("%d", &ingresso);

    }
    if (ingresso == 1){
        ingInteiro = ingInteiro++;
    }
    else if(ingresso == 2){
        ingMeia = ingMeia++;
    }
    else if(ingresso == 3){
        ingTer = ingTer++;
    }
    else{
        printf("Ingresso invalido");
        return compras();
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
    printf(" - Lugares Disponiveis - ");
    mostrarLugares();
    printf("Digite o lugar que deseja reservar: ");
    scanf("%i", &i);
    c[i-1]=0;
    system("cls");
    if(i != 0){
        inputLugar = i;
    }
    else{}
    return ticket();
}
//Variavel para verificar se o usuario quer encerrar o programa ou comprar mais ingressos
int retornar;
//Funcao para aparecer o ingresso impresso
void ticket(){
    switch(ingresso){
    case 1:
        printf("\nEste ingresso foi enviado para o E-mail: %s\n\nObrigado pela compra, tenha um otimo espetaculo!\n\n*************************\n\nNome: %s\nDia: %d/%d/%d\nCadeira: %d\nIngresso: Inteiro\n\n*************************", email, nome, diaSemana, mes, ano, inputLugar);
        printf("\n\nPara continuar comprando ingressos, digite (99): ");
        scanf("%d", &retornar);
        if(retornar == 99){
            return data();
        }
        else{}
        break;
    case 2:
        printf("\nEste ingresso foi enviado para o E-mail: %s\n\nObrigado pela compra, tenha um otimo espetaculo!\n\n*************************\n\nNome: %s\nDia: %d/%d/%d\nCadeira: %d\nIngresso: Meia-entrada\n\n*************************", email, nome, diaSemana, mes, ano, inputLugar);
        printf("\n\nPara continuar comprando ingressos, digite (99): ");
        scanf("%d", &retornar);
        if(retornar == 99){
            return data();
        }
        else{}
        break;
    case 3:
        printf("\nEste ingresso foi enviado para o E-mail: %s\n\nObrigado pela compra, tenha um otimo espetaculo!\n\n*************************\n\nNome: %s\nDia: %d/%d/%d\nCadeira: %d\nIngresso: Gratuito\n\n*************************", email, nome, diaSemana, mes, ano, inputLugar);
        printf("\n\nPara continuar comprando ingressos, digite (99): ");
        scanf("%d", &retornar);
        if(retornar == 99){
            return data();
        }
        else{}
        break;
    default:
        printf("Invalido");
        return compras();
    }
}



// CRIAR MENSAGEM AO ACABAR OS ASSENTOS E FUNÇÃO CAIXA


