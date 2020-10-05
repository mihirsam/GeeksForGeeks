////https://www.spoj.com/problems/PRIME1/https://www.spoj.com/problems/PRIME1/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, m, n;
    cin>>t;
    while (t--) {
        cin>>m>>n;
        int i = m;
        while (i <= n) {
            int j = 2;
            bool isPrime = true;
            if (i <= 1) isPrime = false;

            while (j <= sqrt(i)) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
                j++;
            }
            if (isPrime) {
                cout<<i<<endl;
            }
            i++;
        }
        cout<<"\n";
    }
	return 0;
}
