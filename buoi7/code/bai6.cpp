// dao vang
#include <iostream>
using namespace std;
int n,k,a[10001][10001],s[10001][10001],m=-1;
int main()
{
    cin >>n>>k;
    s[0][0]=0;
    for (int i=1;i<=n;i++)
    {
        s[i][0]=0; s[0][i]=0;
        for (int j=1;j<=n;j++)
        {
            cin >>a[i][j];
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+ a[i][j];
        }
    }
    for (int i=k;i<=n;i++)
        for (int j=k;j<=n;j++)
            m=max(m, s[i][j] - s[i][j-k] - s[i-k][j] + s[i-k][j-k]);
   cout << m;
    return 0;
}
    
