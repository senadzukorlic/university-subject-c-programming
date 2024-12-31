
#include <stdio.h>

int main()
{
  int a;
  int noviBroj;

  printf("Unesite broj: ");
  scanf("%d", &a);

  if (a < 0)
  {
    noviBroj = a + 1;
  }
  else
  {
    noviBroj = a - 1;
  }
  printf("%d\n", noviBroj);

  return 0;
}