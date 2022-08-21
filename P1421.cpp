#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define debug(x) std::cout << x << std::endl

int main(void)
{
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    b += 10 * a;
    cout << b / 19 << endl;
    return 0;
}
