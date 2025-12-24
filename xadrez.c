#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível: Aventureiro

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
  
  printf("\n--- Cavalo ---\n");
  int i = 0;
  while(i < 3) {
    for (int _ = 0; i < 2; i++) 
      printf("Baixo\n");
    printf("Esquerda\n");
    i++;
  }

  return 0;
}
