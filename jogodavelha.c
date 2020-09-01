
#include<stdio.h>
#include<conio.h>
 int main (void) {
     char Matriz[3][3];                                          
     char O = 'O', X = 'X';
     int jogadas = 0, j, i;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)                                        
            Matriz[i][j]=' ';

    while(jogadas<=9) 
		{
         printf ("  JOGO DA VELHA \n");
         for (i = 0; i < 3; i++) {
             printf ("\t\t     %c | %c | %c\n",Matriz [i] [0], Matriz [i] [1], Matriz [i] [2]);
             if (i < 3-1)
                 printf ("\t\t  ---+---+---  \n");
         }

         printf ("\nINSIRA AS COORDENADAS, ");
         if (jogadas % 2)
               printf ("JOGADOR 2\nLINHA: ");
         else
               printf ("JOGADOR 1\nLINHA: ");
         scanf ("%d",&i);
         printf ("COLUNA: ");
         scanf("%d",&j);                                                

         if (Matriz [i-1] [j-1] == ' ') {
             if (jogadas %2)
                   Matriz [i-1] [j-1] = X;
             else
                   Matriz [i-1] [j-1] = O;
             jogadas++;
         }

         if ((Matriz[0][0]==O && Matriz[0][1]==O && Matriz[0][2]==O) ||
            (Matriz[1][0]==O && Matriz[1][1]==O && Matriz[1][2]==O) ||
            (Matriz[2][0]==O && Matriz[2][1]==O && Matriz[2][2]==O) ||
            (Matriz[0][0]==O && Matriz[1][0]==O && Matriz[2][0]==O) ||
            (Matriz[0][1]==O && Matriz[1][1]==O && Matriz[2][1]==O) ||
            (Matriz[0][2]==O && Matriz[1][2]==O && Matriz[2][2]==O) ||
            (Matriz[0][0]==O && Matriz[1][1]==O && Matriz[2][2]==O) ||
            (Matriz[0][2]==O && Matriz[1][1]==O && Matriz[2][0]==O))
         {
             printf("\n\a\t\tJogador 1, VOCÊ VENCEU!!!\n");
             break;
         }
         if ((Matriz[0][0]==X && Matriz[0][1]==X && Matriz[0][2]==X) ||
            (Matriz[1][0]==X && Matriz[1][1]==X && Matriz[1][2]==X) ||
            (Matriz[2][0]==X && Matriz[2][1]==X && Matriz[2][2]==X) ||
            (Matriz[0][0]==X && Matriz[1][0]==X && Matriz[2][0]==X) ||
            (Matriz[0][1]==X && Matriz[1][1]==X && Matriz[2][1]==X) ||
            (Matriz[0][2]==X && Matriz[1][2]==X && Matriz[2][2]==X) ||
            (Matriz[0][0]==X && Matriz[1][1]==X && Matriz[2][2]==X) ||
            (Matriz[0][2]==X && Matriz[1][1]==X && Matriz[2][0]==X))
         {
             printf ("\n\n\n\n\a\t\tJogador 2, VOCE VENCEU!!!\n");
             break;
         }

         if (jogadas==9) {                                            /
             printf ("PARTIDA EMPATADA");
             break;
         }
     }
     return (0);
 }

     

