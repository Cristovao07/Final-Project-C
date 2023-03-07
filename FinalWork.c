#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]){


    int i,j;
    for(i=0; i<DIM; i++)
        for(j=0; j<DIM; j++)
        s[i][j]=ESPACO;
}

void mostra(char s[DIM][DIM]){

    int i,j;
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++)
        printf("%c %c", s[i][j], j==DIM-1?' ':'|');
        if (i!=DIM-1) printf("\n---------");
        putchar('\n');
    }
}

int main(){

    char Galo[DIM][DIM];
    int posx, posy;
    char ch = 'o';
    int n_jogadas = 0;

    inic(Galo);
    while (1){
        mostra(Galo);
        printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
        scanf("%d %d", &posx, &posy);
        posx--;posy--;
        if (Galo[posx][posy]==ESPACO){
            Galo[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_jogadas++;
        }
        else
            printf("Posição já ocupada\n Jogue Novamente!\n");
        if (n_jogadas==DIM*DIM)
            break;
    }
    mostra(Galo);
}