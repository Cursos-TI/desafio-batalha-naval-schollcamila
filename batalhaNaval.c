#include <stdio.h>

#define tam_tabuleiro 10   
#define tam_navio 3        
#define agua 0           
#define navio 3  

int main() {
   
    int tabuleiro[tam_tabuleiro][tam_tabuleiro];

  
    for (int i = 0; i < tam_tabuleiro; i++) {
        for (int j = 0; j < tam_tabuleiro; j++) {
            tabuleiro[i][j] = agua;
        }
    }

   
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

   
    int linha_vertical = 5;
    int coluna_vertical = 7;

  
    if (coluna_horizontal + tam_navio <= tam_tabuleiro) {
     
        int pode_posicionar = 1;
        for (int i = 0; i < tam_navio; i++) {
            if (tabuleiro[linha_horizontal][coluna_horizontal + i] != agua) {
                pode_posicionar = 0;
                break;
            }
        }
        
        if (pode_posicionar) {
            for (int i = 0; i < tam_navio; i++) {
                tabuleiro[linha_horizontal][coluna_horizontal + i] = navio;
            }
        }
    }

    
    if (linha_vertical + tam_navio <= tam_tabuleiro) {
      
        int pode_posicionar = 1;
        for (int i = 0; i < tam_navio; i++) {
            if (tabuleiro[linha_vertical + i][coluna_vertical] != agua) {
                pode_posicionar = 0;
                break;
            }
        }
     
        if (pode_posicionar) {
            for (int i = 0; i < tam_navio; i++) {
                tabuleiro[linha_vertical + i][coluna_vertical] = navio;
            }
        }
    }

   
    printf("Tabuleiro Batalha Naval:\n\n");
    for (int i = 0; i < tam_tabuleiro; i++) {
        for (int j = 0; j < tam_tabuleiro; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");  
    }

    return 0;
}
