#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("lkkt.out");
    int n,szam,ossz=0,i,j,szum1=0,szum2=0;
    in >> n;
    int v[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in >> szam;
            v[i][j]=szam;
            if(i<j)
            {
                szum1=szum1+v[i][j];
            }
            if(j<i)
                szum2=szum2+v[i][j];
        }
    }
    ossz=szum1*szum2;
    while(szum1!=szum2)
    {
            if (szum1> szum2) {
                szum1-=szum2;
            } else {
                szum2-=szum1;
            }
    }
    ossz=ossz/szum1;
    out << ossz;
    return 0;
}
