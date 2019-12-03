#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int i=1;
    int a,max1=0,utolso=0,maxpoz=0;
    while(in >> a )
    {
        if(a > max1)
        {
            cout << a << " ";
            max1=a;
            maxpoz=i;
        }
        else if(a == max1)
        {
           if(maxpoz==i-1)
           {
               cout << a << " ";
               maxpoz=i;
           }
        }
        i++;
    }
}
