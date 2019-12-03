#include <iostream>
using namespace std;

long long LargestPrime(long long);

long long LargestPrime(long long TheNum)
{
    long long FactorCount = 0;

    for (long long i=TheNum; i>=2; --i)
    {

        for (long long j=2; j<i; ++j)
        {
            if (i % j == 0)
            {
                ++FactorCount;
            }
        }

        if (FactorCount == 0)
        {
            return i;
            break;
        }

        FactorCount = 0;
    }
    return 0;
}


int main()
{
    long long Input, Result;
    cout << "Enter the number: ";
    cin >> Input;
    long long i,result;
    for(i=Input; i>0; i--)
    {
        Result = LargestPrime(i);
        if(result!=Result)
        {
            cout << Result << " ";
            result=Result;
        }
    }
        return 0;
}
