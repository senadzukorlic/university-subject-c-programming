#include <stdio.h>
void prikazi_niz(int *x, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
}
int main(void)
{
    int x[10] = {8, 4, 2, 1, 6, 5, 3, 3};
    prikazi_niz(x, 8);
    return 0;
}