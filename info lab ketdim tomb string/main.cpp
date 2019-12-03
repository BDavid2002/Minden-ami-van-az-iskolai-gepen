#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
int i,j,n;
cin >> n;
string s1[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cin >> s1[i][j];
        if(i>j)
        {
            transform(s1[i][j].end()-2,s1[i][j].end(),s1[i][j].end()-2, ::toupper);
        }
        if(j>i)
        {
            transform(s1[i][j].begin(),s1[i][j].begin()+2,s1[i][j].begin(), ::toupper);
        }

    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cout << s1[i][j] << " ";
    }
    cout << endl;
}
}
