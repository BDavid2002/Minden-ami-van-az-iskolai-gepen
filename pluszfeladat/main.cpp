#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,szam,max1=0,max2=0,number1,number2,i,j,max11=999,max22=999,maxmax222,maxmax111;
    ifstream in("inout.txt");
    in >> n;
    int v[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in >> szam;
            v[i][j]=szam;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(v[i-1][j]==v[i][j])
            {
                max1++;
            }
            if(v[i][j-1]==v[i][j])
            {
                max2++;
            }
        }
            if(max11>max1)
            {
                maxmax111=max11;
                max11=max1;

                max1=0;
            }
            if(max22>max2)
            {
                  maxmax222=max22;
                max22=max2;

                max2=0;
            }
    }
    cout << maxmax111 << " " << maxmax222;

}
