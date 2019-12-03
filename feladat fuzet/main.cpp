#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int szam,n, v[1000][1000],j,sum1=0,sum2=0,i;
    in >> n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in >> szam;
            v[i][j]=szam;
            if(i<j)
            {

                sum1=sum1+v[i][j];
            }
            if(j<i)
            {
                sum2=sum2+v[i][j];
            }
        }
    }
    cout << sum1 << sum2;
}
