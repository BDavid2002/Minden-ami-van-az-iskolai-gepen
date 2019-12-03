#include <iostream>

#include <string>



using namespace std;



int main()

{

    string s1, s2;
    char 'a','e','i','o','u';

    cout << "kerem a beolvasando stringet ";

    getline(cin, s1);



    int elofordul = 0;

    size_t hely;

    hely = s1.find('a','e','i','o','u');


    if (hely != string::npos)

    {

        s1.replace(hely, 1, "mpm");

    }

    while(hely!=string::npos)

    {

        hely= s1.find('a','e','i','o','u', hely+1);

        if (hely != string::npos)
	{
		s1.replace(hely, 1, "mpm");
        }

    }

    cout << s1 << endl;

    return 0;

}
