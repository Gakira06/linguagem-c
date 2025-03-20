#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

printf("  / \\              / \\                                            \n");
printf(" /   \\             /   \\                                          \n");
printf("/_____\\           /_____\\                                           \n");
printf(" |   |  _   _   _  |   |                                            \n");
printf(" | O |_| |_| |_| |_| O |                                            \n");
printf(" |-  |          _  | - |                    Bem Vindo ao            \n");
printf(" |   |   - _^_     |   |                Jogo de Adivinhacao!        \n");
printf(" |  _|    //|\\\\  - |   |                                          \n");
printf(" |   |   ///|\\\\\\   |  -|                                         \n");
printf(" |-  |_  |||||||   |   |                                            \n");
printf(" |   |   |||||||   |-  |                                            \n");
printf(" |___|___|||||||___|___|                                            \n");
printf("                                                                    \n");
printf("\n\n");
   
    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();

    int numerosecreto = numerogrande % 1000;
    int chute;
    double pontos = 1000;
    int tentativas = 1;
    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil 20 tentativas\n(2) Medio 15 tentativas\n(3) Dificil 6 tentativas\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default:
            numerodetentativas= 6;
            break;
    }


    for(int i =1; i <= numerodetentativas; i++ ) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos!\n");
             continue;
        }
        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        
        if(acertou) {
            break;
    }
        else if(maior) {
            printf(" Seu chute foi maior que o numero secreto\n");
        }
        else {
            printf("Seu chute foi menor que o numero secreto\n");
            }
            tentativas++;

            double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;

        }

            printf("Fim de jogo!\n");

        if(acertou) {
            printf("\n\n");
            printf("                    oOOOOOOOOOo                     \n");
            printf("              oOOOOOOOOOOOOOOOOOOOOOo               \n");
            printf("          oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo           \n");
            printf("       oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo        \n");
            printf("     oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo      \n");
            printf("   oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo    \n");
            printf("  oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo   \n");
            printf(" oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo  \n");
            printf(" oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo  \n");
            printf("oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo \n");
            printf("oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo \n");
            printf("oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo \n");
            printf(" *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO*  \n");
            printf(" *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*  \n");
            printf("  *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*   \n");
            printf("   *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO*    \n");
            printf("     *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO*      \n");
            printf("       *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*        \n");
            printf("          *OOOOOOOOo           oOOOOOOOO*           \n");
            printf("              *OOOOOOOOOOOOOOOOOOOOO*               \n");
            printf("                   ""ooooooooo""                    \n");
            printf("\n\n");


            printf("Voce acertou em %d tentativas!\n", tentativas);
            printf("Total de pontos: %.1f\n", pontos);
            printf(" Parabens!\n");
            printf("Jogue de novo, voce e um bom jogador!\n"); 
        }
        else{
printf("\n\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'               `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$'                   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$$'`$$$$$$$$$$$$$'`$$$$$$!                       !$$$$$$'`$$$$$$$$$$$$$'`$$$\n");
printf("$$$$  $$$$$$$$$$$  $$$$$$$                         $$$$$$$  $$$$$$$$$$$  $$$$\n");
printf("$$$$. `$' \\' \\$`  $$$$$$$!                         !$$$$$$$  '$/ `/ `$' .$$$$\n");
printf("$$$$$. !\\  i  i .$$$$$$$$                           $$$$$$$$. i  i  /! .$$$$$\n");
printf("$$$$$$   `--`--.$$$$$$$$$                           $$$$$$$$$.--'--'   $$$$$$\n");
printf("$$$$$$L        `$$$$$^^$$                           $$^^$$$$$'        J$$$$$$\n");
printf("$$$$$$$.   .'   ""~   $$$    $.                 .$  $$$   ~""   `.   .$$$$$$$\n");
printf("$$$$$$$$.  ;      .e$$$$$!    $$.             .$$  !$$$$$e,      ;  .$$$$$$$$\n");
printf("$$$$$$$$$   `.$$$$$$$$$$$$     $$$.         .$$$   $$$$$$$$$$$$.'   $$$$$$$$$\n");
printf("$$$$$$$$    .$$$$$$$$$$$$$!     $$`$$$$$$$$'$$    !$$$$$$$$$$$$$.    $$$$$$$$\n");
printf("$JT&yd$     $$$$$$$$$$$$$$$$.    $    $$    $   .$$$$$$$$$$$$$$$$     $by&TL$\n");
printf("                                 $    $$    $                                \n");
printf("                                 $.   $$   .$                                \n");
printf("                                 `$        $'                                \n");  
printf("                                  `$$$$$$$$'                                 \n");
printf("\n\n");

            printf("Voce perdeu! Tente dnv!\n");
        }

    
}