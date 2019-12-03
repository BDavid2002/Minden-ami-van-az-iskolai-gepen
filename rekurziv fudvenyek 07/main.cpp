#include <iostream>

using namespace std;
int oglindit(int num)
{
    int digit, oglindit = 0;
    while (num > 0)
    {
        digit = num % 10;
        oglindit = oglindit*10 + digit;
        num /= 10;
    }

    return oglindit;
}
int main()
{
int num,num1;
cin >> num;
num1=num;
num=oglindit(num);
if(num1==num)
{
    cout << num1 << " pall";
}
else cout << num1 <<" nem pall";
}
(a%10)+forditott(a/10)*10
