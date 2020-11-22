#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    long long start;
    cin >> start;
    cout << start << " ";
    long long temp;
    while(true){
        cin >> temp;
        if(start != temp){
            cout << temp << " ";
        }
        else{
            cout << temp;
            break;
        }
    }
}
