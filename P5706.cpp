#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define debug(x) std::cout << x << std::endl

int main(void)
{
    ios::sync_with_stdio(false);
    double x;
    int y;
    cin >> x >> y;
    cout << setprecision(3) << fixed << x / y << '\n'
         << (y << 1) << endl;
    return 0;
}
