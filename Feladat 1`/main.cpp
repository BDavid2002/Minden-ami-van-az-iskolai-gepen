#include <iostream>

using namespace std;

int main()
{
int v[1000],i,n,aux,j;
cin >> n;
for(i=0;i<n;i++)
{cin >> v[i];}
for (i=0; i< n-1; i++)
        {
            for (j=i+1; j< n; j++)
            {
                if ( v[i]> v[j])
                {
                    aux= v[j];
                    v[j]= v[i];
                    v[i]=aux;
                }
            }
        }
for(i=0;i<n;i++)
{
    cout << v[i];
}
}
   #include <iostream>

    using namespace std;
    int main()
    {
        int i, j, v[100], aux, n, k=0, p=0;
        cout<<"n=";
        cin>>n;
        for(i=0; i<n; i++){
            cout << "v["<<i<<"]=";

            cin >> v[i];
        }
        do
        {
            p=0;
            for (i=0; i<n-1-k; i++)
            {
                if (v[i]>v[i+1])
                {
                    aux=v[i+1];
                    v[i+1]=v[i];
                    v[i]=aux;
                    p=1;
                }
            }
            k++;
        }
        while(p==1);
        for (i=0; i<n; i++)
        {
            cout << v[i] << " ";
        }
        return 0;
    }
