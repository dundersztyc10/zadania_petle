#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    char a;
    cin >> a;
    cout << char(toupper(a));
    while(a!='.'){
        cin >> a;
        if(a!='.'){
            cout << char(toupper(a));
        }
    }
}
