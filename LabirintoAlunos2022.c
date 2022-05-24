#include <stdio.h>
#include "pilhaEncadeada.h"
#include <stdlib.h>
#define MAX 15

void cria(char l[MAX][MAX]){
     int i,j,x,y;
     srand(time(NULL));
     for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++){
          if((rand()%5)==1)
             l[i][j]='|';
             else
              l[i][j]='.';
          }
     for(i=0;i<MAX;i++){
           l[0][i]='*';
           l[MAX-1][i]='*';
           l[i][0]='*';
           l[i][MAX-1]='*';
           }// fim for
        x=  rand() % MAX;
        y=  rand() % MAX;
        l[x][y]='Q';
     }// fim funcao cria
     
void mostraLabirinto(char mat[MAX][MAX],int linha,int col){
    int i,j;
     for ( i = 0; i < linha; i++)
    {
     printf("\n");
          for ( j = 0; j < col; j++)
			printf (" %c ",mat[i][j] );
     	}

     } // fim funcao
     
 int funcaoSuperMouse(char lab[MAX][MAX],int i, int j){
     

 }// fim funcao



int main(){
    char labirinto[MAX][MAX];
    int x,y;
    cria(labirinto);
    mostraLabirinto(labirinto,MAX,MAX);
    printf("\nEntre com a posicao inicial:");
    scanf("%d %d",&x,&y);
    funcaoSuperMouse(labirinto,x,y);
    getch();
    }
