#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define debug(x) std::cout << x << std::endl

int main(void)
{
    ios::sync_with_stdio(false);

    double a, b, c, p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    double ans = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << setprecision(1) << fixed << ans << endl; 
    return 0;
}
