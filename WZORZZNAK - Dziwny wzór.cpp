#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main()
{
    long long a,b;
    char c;
    cin >> a >> b >> c;
    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}
