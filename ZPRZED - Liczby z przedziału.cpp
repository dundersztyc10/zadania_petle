#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main()
{
    long int n;
    cin >> n;
    //cout.precision(2);
    for(int i=0; i<n; ++i){
        long double temp;
        cin >> temp;
        if(temp>=20 && temp<=30){
            cout << temp << " ";
            //cout << fixed << temp << " ";
        }
    }
    return 0;
}
