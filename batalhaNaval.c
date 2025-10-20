#include <stdio.h>

#define linhas 10

#define colunas 10

#define agua 0



int main(){



char linha[linhas] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // colunas com as consoantes

int tabuleiro[linhas][colunas];

printf("\n***Batalha Naval***\n\n");



for(int i = 0; i < linhas; i++) {

   for(int j = 0; j < colunas; j++) {

     tabuleiro[i][j] = agua;

     }

     }

     

     // Navios



    tabuleiro[0][1] = 3; tabuleiro[0][2] = 3; tabuleiro[0][3] = 3;

    tabuleiro[1][5] = 3; tabuleiro[2][5] = 3; tabuleiro[3][5] = 3;

    tabuleiro[3][7] = 3; tabuleiro[4][6] = 3; tabuleiro[5][5] = 3;

    tabuleiro[7][5] = 3; tabuleiro[8][6] = 3; tabuleiro[9][7] = 3;

   

     // Formato de Cone

     // Foi colocado o 5 para representar o cone e diferenciar dos navios



     tabuleiro[3][2] = 5;

     tabuleiro[4][1] = 5; tabuleiro[4][2] = 5; tabuleiro[4][3] = 5;

    tabuleiro[5][0] = 5; tabuleiro[5][1] = 5; tabuleiro[5][2] = 5; tabuleiro[5][3] = 5; tabuleiro[5][4] = 5;

     

    //Formato de Octaedro

    // Foi colocado o 5 para representar o octaedro e diferenciar dos navios



    tabuleiro[0][7] = 5;

    tabuleiro[1][6] = 5; tabuleiro[1][7] = 5; tabuleiro[1][8] = 5;

    tabuleiro[2][7] = 5;



    // Formato de Cruz

    // foi colocado o 7 para representar a cruz e diferenciar dos navios



    tabuleiro[6][2] = 7;

    tabuleiro[7][0] = 7; tabuleiro[7][1] = 7; tabuleiro[7][2] = 7; tabuleiro[7][3] = 7; tabuleiro[7][4] = 7;

    tabuleiro[8][2] = 7;





   printf("   ");

   for (int j = 1; j <= colunas; j++)  {

    printf("%d ", j);

   }

    printf("\n");



    for (int i = 0; i < linhas; i++)

    {

        printf("%2c ", linha[i]);

        for (int j = 0; j < colunas; j++) {

           printf("%d ", tabuleiro[i][j]);

        }

        printf("\n");

    }

   

 

     

   

    return 0;

}
   

    

    return 0;
}
