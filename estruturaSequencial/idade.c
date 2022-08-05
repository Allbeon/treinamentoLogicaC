#include <stdio.h>

void
limpar_entrada () {
  char c;
  while ((c = getchar ()) != '\n' && c != EOF) {}
}

void
ler_texto (char *buffer, int length) {
  fgets (buffer, length, stdin);
  strtok (buffer, "\n");
}

int main () {

  char nome1[30], nome2[30];
  int idade1, idade2;
  double media;

  printf ("Dados da primeira pessoa:\n");
  printf ("Nome: ");
  ler_texto (nome1, 30);
  printf ("Idade: ");
  scanf ("%d", &idade1);

  printf ("Dados da segunda pessoa:\n");
  printf ("Nome: ");
  limpar_entrada ();
  ler_texto (nome2, 30);
  printf ("Idade: ");
  scanf ("%d", &idade2);

  media = (double)(idade1 + idade2) / 2;

  printf ("\nA idade media de %s e %s é de %.1lf", nome1, nome2, media);

  return 0;
}