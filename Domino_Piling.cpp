/*https://codeforces.com/problemset/problem/50/A*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int m, n, area;
    cin >> m >> n;
    area = m * n;
    cout << floor(area / 2);
    return 0;
}