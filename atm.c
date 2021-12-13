#include <stdio.h>
#include <string.h>
#define N 30
#define D 5
typedef 
struct 
{
    char nome[N];
    int ibam;
    char pin[10];
    float saldo;

    struct 
    {
        char data[N];
        float quantia;
        char nome_remetente[N];
    }trans
}atm_t;

void depositar_saldo(atm_t c[],int n_conta){
    float qnt;
    printf("Qual a quantia que deseja depositar?");
    scanf("%f",&qnt);
    c[n_conta].saldo = c[n_conta].saldo + qnt;
}

int entrar_na_conta(atm_t c[],int sz){
    int i,i2;
    char pin[5],aux[10];
    int n_conta;

    printf(" Qual o número da sua conta?");
    scanf("%d",&n_conta);
    fgets(aux,10,stdin);


    for ( i2=1 ,i = 0; i < 3; i++,i2++)
    {
        printf(" Insira o pin:\n");
        fgets(pin,5,stdin);
        if (strcmp(pin,c[n_conta].pin)==0)
        {
            printf("Bem vindo %s \n",c[n_conta].nome);
            return n_conta;
        }
        
        printf(" Pin incorreto\n");
        printf(" Tem %d tentativas\n", 3-i2);
    }

    
    return -1;
}
void defenir_pin(atm_t c[], int sz,int n_conta){
    
    printf(" Escolha o pin(4 digitos)\n");
    fgets(c[n_conta].pin,5,stdin);
    
}
void criar_conta(atm_t c[], int sz){
    int i;
    char aux[10];
    printf("Vamos começar o processo de criação de conta\n");
    for ( i = 0; i < sz; i++)
    {
        if(c[i].nome[0]=='\0') break;
        
    }
    printf("O numero da sua conta é %d\n", i);
    fgets(aux,10,stdin);
    printf("Qual o seu nome?\n");
    fgets(c[i].nome,N,stdin);
    printf("Vamos definir o pin da conta\n");

    defenir_pin(c,D,i);

    printf("Pronto!! Já está\n");

}
int main(){
    atm_t contas[D];
    int action;
    int n_conta=0;
    int i;

    for ( i = 1; i < D; i++)
    {
        contas[i].pin[0] ='a';
    }
    

    do
    {
     printf("   Que deseja fazer?\n 1-Entrar na conta\n 2-Criar conta\n 9-Sair\n ");
    scanf("%d",&action);
    
    if (action == 1)
    {
        n_conta = entrar_na_conta(contas,D);
    }
    else if (action==2 )
    {
        criar_conta(contas,D);
    }
    else if(action==9)
    {
        printf("Tenha um bom dia!\n");
        return 0;
    }
       
    } while ( n_conta == 0 );

    printf(" O que deseja fazer?\n 1-Depositar dinheiro \n 2-Levantar dinheiro \n 3-Tranferir dinheiro \n 4-Consultar movimentos");


   return 0;
}

