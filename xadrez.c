#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível: Novato

int main() {
  const int rook = 5, bishop = 5, queen = 8;
  
  printf("--- Torre ---\n");
  for(int i = 0; i < rook; i++)
    printf("Direita\n");

  printf("\n--- Bispo ---\n");
  for(int i = 0; i < bishop; i++)
    printf("Cima, Direita\n");
  
  printf("\n--- Rainha ---\n");
  for(int i = 0; i < queen; i++)
    printf("Esquerda\n");

  return 0;
}
