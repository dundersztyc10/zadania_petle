#include <iostream>

using namespace std;

int main()
{
    long int a;
    cin >> a ;
    for(int j=0; j<a; ++j){
        for(int k=a-j; k<a; ++k){
            cout << "*";
        }
        cout << endl;
    }

    for(int j=a; j>=0; --j){
        for(int k=a-j; k<a; ++k){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
