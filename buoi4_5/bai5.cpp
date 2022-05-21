//Bài 5: Hãy li?t kê t?t c? các t? h?p l?p ch?p k c?a n s? t? nhiên liên ti?p (1,2,…,n).
// Nguyen Anh Quan 63135188
#include <bits/stdc++.h>

int n, k;
int tt[50];
int a[50];

void in_kq()
{
    int sai = 0;
    for (int i = 0; i < k-1; i++)
        for (int j = i+1; j < k; j++)
            if (a[i] > a[j]) sai++;
    if (sai == 0)
    {
        printf("\n");
        for (int i = 0; i < k; i++)
            printf("%2d", a[i]);
    }
}

void thu(int vt)
{
    for (int i = 1; i <= n; i++)
    {
        if (tt[vt] == 0)
        {
            a[vt] = i;
            tt[vt] = 1;
            if (vt < k-1) thu(vt+1);
            else in_kq();
            tt[vt] = 0;
        }
    }
}

int main()
{
    printf("\n Nhap n = "); scanf("%d", &n);
    printf(" Nhap k = "); scanf("%d", &k);
    thu(0);
}
