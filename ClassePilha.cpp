#include <stdio.h>
#include <stdlib.h>

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
	void Push(int valor);
	//Remove valor da Pilha
	int Pop();
	//Mostra pilha
	void MostrarPilha();
private:
	int pilha[10];
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
    if (topo == 9)
        return true;
    else
        return false;
}

void ClassePilha::Push(int valor)
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
        return -1;
    }
    else{
        int valor = pilha[topo];
        topo--;
        return valor;
    }
	return 0;
}

void ClassePilha::MostrarPilha()
{
	//Como voc� faria para mostrar uma Pilha sem perder seus valores?
    //Voc� ter� que desempilhar, empilhar em outra pilha e retornar os valores
    //while(!PilhaVazia())
    //Pop ou Push
    if (PilhaVazia()){
        printf("Pilha Vazia!\n");
        return;
    }

    ClassePilha pilhaAuxiliar(-1);

    while (!PilhaVazia()){
        int valor = Pop();
        printf("%d\n", valor);
        pilhaAuxiliar.Push(valor);
    }
    while (!pilhaAuxiliar.PilhaVazia()){
        Push(pilhaAuxiliar.Pop());
    }

}


int main()
{
	int OP;
    int valor;
	ClassePilha PilhaObj(-1);
	while(1)
	{
		LimpaTela;
		printf("1 - Inserir na Pilha.\n");
		printf("2 - Retirar da Pilha.\n");
		printf("3 - Mostrar Pilha.\n");
		printf("0 - Sair.\n");
		printf("Entre com a opcao: ");
		scanf("%d", &OP);
		if (OP == 0)
			break;
		else if(OP == 1)
		{
            printf("Digite o Valor para ser inserido:\n");
            scanf("%d", &valor);
            printf("%d inserido na pilha\n", valor);
            PilhaObj.Push(valor);
		}
        else if(OP == 2)
        {
            PilhaObj.Pop();
        }
		else if(OP == 3)
		{
			if(PilhaObj.PilhaVazia())
				printf("A pilha ainda se encontra vazia.\n");
			else
			{
                printf("Conteúdo da pilha:\n");
                PilhaObj.MostrarPilha();
			}
		}
		//system("pause");
	}
    return 0;
}
