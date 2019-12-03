#include <iostream>

using namespace std;
struct diak
{
    string nev;
    string hajszin;
    float matek;
} xib[32];
int main()
{
    int n;
    cout << "hany szemely van?" << endl;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << "diak neve";
        cin >> xib[i].nev;
        cout << "hajszin";
        cin >> xib[i].hajszin;
        cout << "matek jegy";
        cin >> xib[i].matek;
    }
    int szoke=0,barna=0;
    float sszoke=0,sbarna=0;
    for(int i=0; i<n; i++)
    {
        if(xib[i].hajszin== "barna")
        {
            barna++;

            sbarna+=xib[i].matek;
        }
        else
        {
            szoke++;
            sszoke+=xib[i].matek;
        }
    }
    if(sszoke/szoke < sbarna/barna)
    {
        cout << "barna";
    }
    else
    {
        cout << "szoke";
    }
}
