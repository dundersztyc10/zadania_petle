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
    for(int i=1; i<=n; ++i){
        if(i%2!=0){
            cout << "C++ is the best"<<endl;
        }
        else{
            cout << "++C si set beth"<<endl;
        }
    }
    return 0;
}
