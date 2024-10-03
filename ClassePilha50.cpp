#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LimpaTela system("clear"); //Tive que tirar o CLS pq tava dando erro no meu mac Tiagão, mas pelo que pesquisei nao altera em nada a funcionalidade

class ClassePilha
{
public:
	//Construtor da classe
	ClassePilha(int tp);
	//Verifica se a pilha est� vazia
	bool PilhaVazia();
	//Faz a verificacao se a Pilha esta cheia    
	bool PilhaCheia();
	//Insere Valor na Pilha
	void Push(char valor);
	//Remove valor da Pilha
	int Pop();
	//MInverte a frase
	void InverterFrase(char frase[]);
private:
	char pilha[50];
	int topo;
};

ClassePilha::ClassePilha(int tp)
{
	topo = tp;
}

bool ClassePilha::PilhaVazia()
{
	if(topo == -1)
		return true;
	else
		return false;
}

bool ClassePilha::PilhaCheia()
{
	//Aqui � um c�digo que vai ser utilizado varias vezes,
    //Aqui verifica de o topo atingiu o final do tamanho da pilha
    if (topo == 49)
        return true;
    else
        return false;
}

void ClassePilha::Push(char valor)
{
	//Inserir o valor no topo.
    //Verifica se a pilha n�o est� cheia, aumenta o topo e insere o valor.
    if (PilhaCheia()){
        printf("Pilha Cheia!");
    }
    else{
        topo++;
        pilha[topo] = valor;
    }
}

int ClassePilha::Pop()
{
	//Retira o valor do Topo e retorna
    //Deve verificar se a Pilha n�o est� vazia, guarda o valor, diminui o topo e retorna o valor
    if (PilhaVazia()){
        printf("Pilha Vazia!");
        return '\0';
    }
    else{
        char valor = pilha[topo];
        topo--;
        return valor;
    }
}


void ClassePilha::InverterFrase(char *frase) {
    int len = strlen(frase);
    for (int i = 0; i < len; i++) {
        Push(frase[i]);
    }
    for (int i = 0; i < len; i++){
        frase[i] = Pop();
    }
}

int main()
{
    char frase[100];
    char palavra[50];
    int i, j;

    ClassePilha PilhaObj(-1);

    printf("Digite uma frase:\n");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = 0;

    printf("Frase Criptografada:\n");

    i = 0;
    while(frase[i] != '\0')
    {
        j = 0;

        while(frase[i] != ' ' &&frase[i] != '\0')
        {
            palavra[j++] = frase[i++];
        }
        palavra[j] = '\0';

        PilhaObj.InverterFrase(palavra);

        printf("%s", palavra);

        if (frase[i] == ' ')
        {
            printf(" ");
            i++;
        }
    }
    printf("\n");
    return 0;
}
