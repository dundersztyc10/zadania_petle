#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    for(int i=0; i<n; ++i){
        string s;
        cin >> s;
        char a = s[0];
        char b = s[1];
        int d = int(a)-48;
        int j = int(b)-48;
        int number = d*10+j;
        if(d==j*j || j==d*d){
            cout << number << " ";
        }
    }
}
