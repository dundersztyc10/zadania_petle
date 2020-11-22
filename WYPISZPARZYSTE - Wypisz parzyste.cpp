#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main()
{
    long long n;
    cin >> n;
    long long temp=0;
    for(int i=0; i<n; ++i){
        cout << temp << " ";
        temp+=2;
    }
    return 0;
}
