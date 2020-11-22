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
        long long a,b;
        cin >> a >> b;
        cout << fixed << setprecision(2) << sqrt(a*a+b*b)<<endl;
    }
}
