#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define debug(x) std::cout << x << std::endl

int main(void)
{
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = c * 60 + d - a * 60 - b;
    cout << m / 60 << ' ' << m % 60 << endl;
    return 0;
}
