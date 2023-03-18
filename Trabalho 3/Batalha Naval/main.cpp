#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,tabuleiro[10][10],jogadas=0,cont=0,cont2=0,cont3=0,cont4=0,cont5=0,scont=0,ccont=0,econt=0,pcont=0;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
          tabuleiro[i][j]=0;

        }
      }

           tabuleiro[2][1]=1;
           tabuleiro[5][8]=1;
           tabuleiro[7][4]=1;      //SUBMARINOS
           tabuleiro[6][6]=1;

           tabuleiro[5][6]=2;
           tabuleiro[5][7]=2;

           tabuleiro[2][3]=2;
           tabuleiro[3][3]=2;       //CRUZADORES

           tabuleiro[8][4]=2;
           tabuleiro[8][5]=2;


           tabuleiro[1][7]=3;
           tabuleiro[1][8]=3;
           tabuleiro[1][9]=3;

                                   //ENCOURAÇADOS

           tabuleiro[4][0]=3;
           tabuleiro[5][0]=3;
           tabuleiro[6][0]=3;

           tabuleiro[1][6]=4;
           tabuleiro[2][5]=4;
           tabuleiro[3][4]=4;      //PORTA AVIÕES
           tabuleiro[2][7]=4;


              while(jogadas<30){

              printf("\n linha do tiro do jogador 1:  ");
              scanf("%d",&i);
              printf("\n coluna do tiro do jogador 1:  ");
              scanf("%d",&j);



              if(tabuleiro[i][j]==1){

                    printf("\n Voce jogou na posicao %d %d e acertou um submarino!!!",i,j);

                    tabuleiro[i][j] = -2;
                    scont = scont + 1;
                }

                else if(tabuleiro[i][j]==2){

                    printf("\n Voce jogou na posicao %d %d e acertou um cruzador!!!",i,j);

                    tabuleiro[i][j] = -4;
                    econt = ccont + 1;
                }

                else if(tabuleiro[i][j]==3){

                    printf("\n Voce na posicao %d %d e acertou um encouracado!!!",i,j);

                    tabuleiro[i][j] = -6;
                    econt = econt + 1;
                }

                else if(tabuleiro[i][j]==4){

                    printf("\n Voce jogou na posicao %d %d e acertou um porta_aviao!!!",i,j);

                    tabuleiro[i][j] = -8;
                    pcont = pcont + 1;
                }

                else if(tabuleiro[i][j]==0){

                    printf("\n Voce jogou na posicao %d %d e deu um tiro na agua!!!",i,j);
                    tabuleiro[i][j] = -1;
                }

                jogadas++;

            }

                    if(jogadas==30 && scont!=4  && ccont!=6 && econt!=6 && pcont!=4){

                        printf("\n O jogo terminou!!! Voce perdeu!!!");
                    }

                      else if(jogadas<30 && scont==4  && ccont==4 && econt==6 && pcont==4){

                        printf("\n Destruiu todas as embarcacoes do inimigo!!! Parabens pela grande vitoria!!!");
                    }


          getch();

}
