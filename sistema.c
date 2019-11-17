#include <stdio.h>

void main(){
    // Variaveis
    int ano;
    int dia;
    int mes;
    int show;
    int descontoTer = 0;
    int ingressoTotal = 20;
    int ingressoDesc = ingressoTotal-(ingressoTotal/2);

    /* Mostrar que acabaram os assentos

    int acabaramcadeiras = 0;
    if(acabaramcadeiras == 1){
        printf("\n\nNao ha mais assentos disponiveis!\n\n")
    }

    */

    // Input do ano que o usuário deseja
    printf("Digite o ano que deseja (2019/2020): ");
    scanf("%d", &ano);
    // 2019
    if (ano == 2019){
        // Input do dia que o usuário deseja
        //Dezembro
        printf("\nDezembro\n\nDigite o dia que deseja, exemplo(05): ");
        scanf("%d", &dia);
        if(dia == 3 || dia == 10 || dia == 17 || dia == 24 || dia == 31){
            //dias para aplicar desconto de 100% para crianças
            descontoTer = 1;
        }
        else if (dia <= 31 && dia >= 1){
            //não aplicar desconto de 100% para crianças
        }
        else{
            printf("Data invalida");
        }
    }
    // 2020
    else if (ano == 2020){
        // Input do mes
        printf("\n\nDigite o numero do mes que deseja, exemplo(01 = Janeiro): ");
        scanf("%d", &mes);
        switch(mes){
            // Janeiro
            //Input do dia
            case 1:
                printf("\nJaneiro\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 7 || dia == 14|| dia == 21 || dia == 28){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 31){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Fevereiro
            //Input do dia
            case 2:
                printf("\nFevereiro\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 4 || dia == 11 || dia == 18 || dia == 25){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >=1 && dia <=29){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Março
            //Input do dia
            case 3:
                printf("\nMarco\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 3 || dia == 10 || dia == 17 || dia == 24 || dia == 31){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 31){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Abril
            //Input do dia
            case 4:
                printf("\nAbril\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 7 || dia ==14 || dia == 21 || dia == 28){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 30){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Maio
            //Input do dia
            case 5:
                printf("\nMaio\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 5 || dia == 12 || dia == 19 || dia == 26){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 31){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Junho
            //Input do dia
            case 6:
                printf("\nJunho\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 2 || dia == 9 || dia == 16 || dia == 23 || dia == 30){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 30){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Julho
            //Input do dia
            case 7:
                printf("\nJulho\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 7 || dia == 14 || dia == 21 || dia == 28){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 31){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Agosto
            //Input do dia
            case 8:
                printf("\nAgosto\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 4 || dia == 11 || dia == 18 || dia == 25){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 31){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Setembro
            //Input do dia
            case 9:
                printf("\nSetembro\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 1 || dia == 8 || dia == 15 || dia == 22 || dia == 29){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <=30){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Outubro
            //Input do dia
            case 10:
                printf("\nOutubro\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 6 || dia == 13 || dia == 20 || dia == 20 || dia == 27){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 31){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Novembro
            //Input do dia
            case 11:
                printf("\nNovembro\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 3 || dia == 10 || dia == 17 || dia == 24){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if(dia >= 1 && dia <= 30){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            // Dezembro
            //Input do dia
            case 12:
                printf("\nDezembro\n\nDigite o dia que deseja, exemplo(05): ");
                scanf("%d", &dia);
                if (dia == 1 || dia == 8 || dia == 15 || dia == 22 || dia == 29){
            //dias para aplicar desconto de 100% para crianças
                descontoTer = 1;
                }
                else if (dia >= 1 && dia <=31){
            //não aplicar desconto de 100% para crianças
                }
                else{
                    printf("Data invalida");
                }
                break;
            }
    }
    else{
        printf("Ano invalido");
    }
    // Input do espetaculo
    printf("\n\nEspetaculos disponiveis: \n\n1. A Branca de Neve - as 16:00h\n2. Peter Pan - as 18:00h\n3. O Rei Leao - as 20:00h\n\nEscolha o espetaculo que deseja digitando seu numero: ");
    scanf("%d", &show);
    switch(show){
        case 1:
            printf("\nA Branca de Neve");
            break;
        case 2:
            printf("\nPeter Pan");
            break;
        case 3:
            printf("\nO Rei Leao");
            break;
        default:
            printf("\nEspetaculo invalido");
    }

/*
    if (descontoTer == 1){
        printf("\n\nTem desconto\n\n");
    }
    else{
        printf("\n\nNao tem desconto\n\n");
    }
*/
// CRIAR O PAGAMENTO, ESCOLHA DE ASSENTOS E CAIXA

}
