#include <iostream>

using namespace std;
int forditott(int x)
{if(x==0)
{
    return 0;
}
return (x%10)*10+forditott(x);

}
int main()
{
    int x;
    cin >> x;
cout << forditott(x);
}
