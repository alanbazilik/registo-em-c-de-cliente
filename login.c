#include<stdio.h>
#include<locale.h>
#include<string.h>

int opcao = 0;
typedef struct Cliente
{
    int codigo;
    char nome[200];
    int rg;
    int cpf;
    int telefone;
} Cliente;
Cliente cliente_especial;


void TelaLogin(){

    char login[15] = "teste";
    char login1[15];
    char senha[15] = "teste";
    char senha1[15];
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    while(!login_efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");
    }

}
void inicializa(){
    cliente_especial.codigo = 0;
    strcpy(cliente_especial.nome, "\0");
    cliente_especial.rg = 0;
    cliente_especial.cpf = 0;
    cliente_especial.telefone = 0;
}
void MostrarMenu(){

    printf("*************************************\n\n");
    printf("******SEJA BEM VINDO AO IMOBNIP******\n\n");
    printf("*************************************\n\n");

    printf("1) - CADASTRO DE CLIENTES\n");
    printf("2) - CADASTRO DE imprimir\n");
    printf("3) - SAIR DO SISTEMA\n\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao);

    getchar();

}
void cadastrar(){
printf(" Digite o código do cliente especial: ");
    scanf("%d%*c", &cliente_especial.codigo);
printf(" Digite o nome do cliente especial: ");
    scanf("%s%*c", &cliente_especial.nome);
    printf(" Digite o RG do cliente especial: ");
    scanf("%d%*c", &cliente_especial.rg);
    printf(" Digite o cpf do cliente especial: ");
    scanf("%d%*c", &cliente_especial.cpf);
 printf(" Digite o telefone do cliente especial: ");
    scanf("%d%*c", &cliente_especial.telefone);
      MostrarMenu();

}
   void imprimir(){
    printf(" \n %d ", cliente_especial.codigo);
    printf(" \n %s ", cliente_especial.nome);
    printf(" \n %d ", cliente_especial.rg);
    printf(" \n %d ", cliente_especial.cpf);
    printf(" \n %d ", cliente_especial.telefone);

}

int main(){

    setlocale(LC_ALL, "");

    TelaLogin();
    inicializa();
    MostrarMenu();

        switch (opcao)

        {

            case 1 : // Gravar Clientes

                cadastrar();

            break;

            case 2 : // Gravar Corretores

                imprimir();

            break;

            default :

                printf("Opção Invalida!");

            break;
        }

        getchar();



    return 0;
}
