#include  <iostream>
#include  <stdio.h>
#define max 20
int x[max];  int n, k;
void Xuatnghiem()  {
    for (int i = 1; i <= k; i++)
        printf ("%6d", x[i]);
    printf ("\n");
}
void ToHop (int i)  {
    for (int j = x[i-1] + 1; j <= n-k+i; j++)  {
        x[i] = j;
        if (i == k)
            Xuatnghiem();
        else
            ToHop(i+1);
    }
}
int main()  {
    n = 4; k = 2;
    ToHop(1);
    return 0;  
}
