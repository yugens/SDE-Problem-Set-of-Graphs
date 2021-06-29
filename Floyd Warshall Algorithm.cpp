//Time complexity is o(n^3) and space complexity is o(n^2)
#include <iostream>
using namespace std;
void floyds(int b[][V])
{
    int i, j, k;
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            cout<<b[i][j]<<" ";
        }
    }
}
int main()
{
        int b[V][V];
        for (int i = 0; i < V; i++)
        {
                for (int j = 0; j < V; j++)
                cin>>b[i][j];
        }
        floyds(b);
        return 0;
}
