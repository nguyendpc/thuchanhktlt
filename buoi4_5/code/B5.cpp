// Giáp Van Tài (63135353) và Tr?n Qu?c Khánh (63132166) l?p CNTT-CLC2
#include  <iostream>
using namespace std;
#define max 20
int x[max];  int n, k, dem=0;
void Xuatnghiem()  {
    for (int i = 1; i <= k; i++)
        cout << x[i];
    dem++;
    cout << endl;
}
void ToHop (int i)  {
    for (int j = x[i-1]; j <= n; j++)  {
        x[i] = j;
        if (i < k)
            ToHop(i+1);
        else
            Xuatnghiem();
        x[i] = 0;
    }
}
int main()  {
    n = 4; k = 2;
    x[0]=1;
    ToHop(1);
    cout << dem;
    return 0;  
}
