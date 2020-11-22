#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int suma_cyfr(long long n)
{
	if(n>0)
		return n%10 + suma_cyfr(n/10);

	return 0;
}

int main()
{
    long long a;
    cin >> a;
    for(int i=0; i<a; ++i){
        long long n;
        cin >> n;
        cout << suma_cyfr(n)<<endl;
    }

}
