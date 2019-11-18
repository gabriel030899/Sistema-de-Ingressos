#include <stdio.h>
#include <stdlib.h>

//Funcao inicial do programa
void main(){
    int op;
    printf(" - Bem vindo! - \n\nSelecione o que deseja: \n\n1. Comprar ingressos\n2. Quit\n\nDigite: ");
    scanf("%d", &op);
    if(op == 1){
        return data();
    }
    else{
        exit(2);
    }
    return 0;
}
// Variaveis Globais de compras para usar na variavel totalIngressos.
int ingInteiro;
int ingMeia;
int ingTer;
char nome[15];
char email[50];
// Variavel global para saber o total de ingressos comprados.
int totalIngressos;
int ingRestante = 10;
int ingresso;
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
            printf(" - Domingo - 24/11/2019 - %d Lugares Restantes", ingRestante);
            diaSemana=24;
            compras();
            break;
        case 2:
            system("cls");
            printf(" - Segunda-Feira - 25/11/2019 - %d Lugares Restantes", ingRestante);
            diaSemana=25;
            compras();
            break;
        case 3:
            system("cls");
            printf(" - Terca-Feira - 26/11/2019 - %d Lugares Restantes", ingRestante);
            diaSemana=26;
            descontoTer = 1;
            compras();
            break;
        case 4:
            system("cls");
            printf(" - Quarta-Feira - 27/11/2019 - %d Lugares Restantes", ingRestante);
            diaSemana=27;
            compras();
            break;
        case 5:
            system("cls");
            printf(" - Quinta-Feira - 28/11/2019 - %d Lugares Restantes", ingRestante);
            diaSemana=28;
            compras();
            break;
        case 6:
            system("cls");
            printf(" - Sexta-Feira - 29/11/2019 - %d Lugares Restantes", ingRestante);
            diaSemana=29;
            compras();
            break;
        case 7:
            system("cls");
            printf(" - Sabado - 30/11/2019 - %d Lugares Restantes", ingRestante);
            diaSemana=30;
            compras();
            break;
        default:
            data();
    }
}
//Funcao de compra de ingresso
int compras(){
    printf("\n\n - Preencha o cadastro para efetuar a compra: \n\nPrimeiro Nome: ");
    scanf("%s", nome);
    printf("\nE-mail que sera enviado o ingresso: ");
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
        ingInteiro = ingInteiro+1;
    }
    else if(ingresso == 2){
        ingMeia = ingMeia+1;
    }
    else if(ingresso == 3){
        ingTer = ingTer+1;
    }
    else{
        printf("Ingresso invalido");
        return compras();
    }
    // Condicao para contar o total de ingressos quando eh Terca-feira e quando nao eh.
    if (descontoTer == 1){
        totalIngressos = ingInteiro+ingMeia+ingTer;
    }
    else{
        totalIngressos = +ingInteiro+ingMeia;
    }

    ingRestante=10-totalIngressos;

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
        printf(" %d Lugares Restantes\n\nEste ingresso foi enviado para o E-mail: %s\n\nObrigado pela compra, tenha um otimo espetaculo!\n\n*************************\n\nNome: %s\nDia: %d/%d/%d\nCadeira: %d\nIngresso: Inteiro\n\n*************************",ingRestante, email, nome, diaSemana, mes, ano, inputLugar);
        if(totalIngressos >= 10){
            caixa();
            printf("\n\n\n\n\n\nNao ha mais lugares disponiveis!\n\n\n\n\n\n");
            return 0;
            }
            else{}
        printf("\n\nPara continuar comprando ingressos, digite (99), para acessar o caixa, digite (0): ");
        scanf("%d", &retornar);
        if(retornar == 99){
            system("cls");
            printf(" Data: %d/%d/%d\n\n - %d Lugares restantes", diaSemana, mes, ano, ingRestante);
            if(totalIngressos >= 10){
            caixa();
            printf("\n\n\n\n\n\nNao ha mais lugares disponiveis!\n\n\n\n\n\n");
            return 0;
            }
            else{
                 compras();
            }
        }
        else if(retornar == 0){
             caixa();
        }
        else{}
        break;
    case 2:
        printf(" %d Lugares Restantes\n\nEste ingresso foi enviado para o E-mail: %s\n\nObrigado pela compra, tenha um otimo espetaculo!\n\n*************************\n\nNome: %s\nDia: %d/%d/%d\nCadeira: %d\nIngresso: Meia-entrada\n\n*************************",ingRestante, email, nome, diaSemana, mes, ano, inputLugar);
        printf("\n\nPara continuar comprando ingressos, digite (99), para acessar o caixa, digite (0): ");
        scanf("%d", &retornar);
        if(retornar == 99){
            system("cls");
            printf(" Data: %d/%d/%d\n\n - %d Lugares restantes", diaSemana, mes, ano, ingRestante);
            if(totalIngressos >= 10){
            caixa();
            printf("\n\n\n\n\n\nNao ha mais lugares disponiveis!\n\n\n\n\n\n");
            return 0;
            }
            else{
                 compras();
            }
        }
        else if(retornar == 0){
             caixa();
        }
        else{}
        break;
    case 3:
        printf(" %d Lugares restantes\n\nEste ingresso foi enviado para o E-mail: %s\n\nObrigado pela compra, tenha um otimo espetaculo!\n\n*************************\n\nNome: %s\nDia: %d/%d/%d\nCadeira: %d\nIngresso: Gratuito\n\n*************************",ingRestante, email, nome, diaSemana, mes, ano, inputLugar);
        printf("\n\nPara continuar comprando ingressos, digite (99), para acessar o caixa, digite (0): ");
        scanf("%d", &retornar);
        if(retornar == 99){
            system("cls");
            printf(" Data: %d/%d/%d\n\n - %d Lugares restantes", diaSemana, mes, ano, ingRestante);
            if(totalIngressos >= 10){
            caixa();
            printf("\n\n\n\n\n\nNao ha mais lugares disponiveis!\n\n\n\n\n\n");
            return 0;
            }
            else{
                 compras();
            }
        }
        else if(retornar == 0){
             caixa();
        }
        else{}
        break;
    default:
        printf("Invalido");
        return compras();
    }
}
//Funcao do caixa
int caixa(){
    int opCaixa;
    system("cls");
    printf("Data: %d/%d/%d\n\n", diaSemana, mes, ano);
    printf("********************************\n\n - Fechamento de caixa - \n\nTotal de ingressos vendidos: %d\n\n - Total de cada tipo de ingresso - \n\nInteiro: %d\n\nMeia-entrada: %d\n\nGratuito: %d\n\n********************************\n\nPara continuar comprando digite (0), para encerrar digite (1): ", totalIngressos, ingInteiro, ingMeia, ingTer);
    scanf("%d", &opCaixa);
    if(opCaixa == 0){
        system("cls");
        printf(" Data: %d/%d/%d\n\n - %d Lugares restantes", diaSemana, mes, ano, ingRestante);
        return compras();
    }
    else if(opCaixa == 1){
        exit(2);
    }
    else{
        printf("Invalido");
        return caixa();
    }
}

// CRIAR MENSAGEM AO ACABAR OS ASSENTOS E FUNÇÃO CAIXA


