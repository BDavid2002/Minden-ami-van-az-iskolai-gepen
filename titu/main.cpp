#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[400],i=1,S=0,n=1;
    ifstream in("input.txt");
    while(in >> v[i])
    {
        i++;
        n++;
    }
    for(i=1; i<n; i++)
        cout << v[i];
}
