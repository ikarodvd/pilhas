#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct Pilha {

	int topo;
	int funcionario[MAX];

};


struct Pilha* criarpilha(){

    struct Pilha* p=(struct Pilha* )malloc(sizeof(struct Pilha));
    p->topo = -1;

}


void empilhar ( struct Pilha *p, int v){

	p->funcionario [p->topo] = v;
    p->topo++;

}

float desempilhar ( struct Pilha *p ){

   int aux = p->funcionario [p->topo-1];
   p->topo--;
   return aux;
}

void esvaziar (struct Pilha *p )
{
    free(p);
}


int main()
{   
    struct Pilha* a;
	int num, aux, b;

    while (1){
        printf("\nSelecione uma opção\n1.Empilha\n2.Desempilha\n3.Esvaziar\n4.Criar pilha\n5.Imprimir topo\n");
        scanf("%i", &num);

        switch (num)
        {
        case 1:
            printf("Insira o número a se inserir\n");
            scanf("%i", &b);
            empilhar(a,b);
            break;

        case 2:
            aux=desempilhar(a);
            printf("O número deletado foi %i\n", aux);
            break;  

        case 3:
            esvaziar(a);
            printf("Pilha esvaziada\n");
            break;

        case 4:
            criarpilha();
            printf("Pilha criada\n");
            break;
        case 5:
            printf("\nO número do topo é: %i\n", a->funcionario[a->topo-1]);
            break;

        default:
            printf("Feito por João Pedro Rodrigues Vilela");
            system ("pause");
            break;
        }
    }    
}
