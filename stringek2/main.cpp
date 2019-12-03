#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2=" ";
    getline(cin, s1);
    int sum=1;
    size_t hely;
    hely = s1.find(s2);
    while(hely!=string::npos)

    {

        sum+=1;
        hely= s1.find(" ", hely+1);

    }

    cout << sum << endl;

    return 0;

}
