#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int n,i=0,j=0,v[1000][1000],szamfel=0,szamals=0,lkkt;
    in >> n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in >> v[i][j];
            if(i<j)
            {
                szamfel=szamfel+v[i][j];
            }
            else{szamals=szamals+v[i][j];}
        }
    }
    cout << szamfel << szamals;
}
