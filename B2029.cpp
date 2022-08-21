#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define debug(x) std::cout << x << std::endl
constexpr double pi = 3.1415926530;
int main(void)
{
    ios::sync_with_stdio(false);

    int h, r;
    cin >> h >> r;

    double v = pi * r * r * h / 1000;
    cout << ceil(20 / v) << endl;
    return 0;
}
