#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define debug(x) std::cout << x << std::endl

int main(void)
{
    ios::sync_with_stdio(false);
    int s, v;
    cin >> s >> v;
    ll t = 0;
    t = 480 - ceil((double)s / v) - 10;
    if(t < 0){
        t += 24 * 60;
    }
    cout << setw(2) << setfill('0') << (t / 60) << ":" << setw(2) << setfill('0') << (t % 60) << endl;
    return 0;
}
