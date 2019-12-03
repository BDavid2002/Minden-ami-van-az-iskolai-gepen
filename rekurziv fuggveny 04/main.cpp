#include <iostream>

using namespace std;
bool prim(long n, long i){

    //cout << i << endl;
    if (i>(n/2+1)){

        return true;
    }

    if (n%i == 0){

        return false;
    }

    return prim(n, i+1);

}
int main()
{
cin >>
}
