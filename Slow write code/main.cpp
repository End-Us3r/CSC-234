#include <iostream>
#include <windows.h>

using namespace std;



int main()
{
    string hello = "Hello, World.";
    int x = 0;
    while (hello[x] != '\0')
    {

            cout << hello[x];
            Sleep(60);
            x++;


    }
            cout << "\n\nEnd message.." << endl;

    return 0;
}



