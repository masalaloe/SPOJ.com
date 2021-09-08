#include <iostream>

using namespace std;

// prime number
// 2, 3, 5, 7, 11, 13, 17, 19, etc

void prime(int x, int y) 
{
    for (int i = x; i <= y; i++)
    {
        int totalFactorial = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0) totalFactorial++;
        }
        if (totalFactorial == 2) cout << i << endl;
        
    }
    cout << endl;
}



int main() {
    int m, n;
    cin >> m >> n;
    if (1 <= m <= n <= 1000000000) prime(n,m);
 	prime(1,10);
	return 0;
}