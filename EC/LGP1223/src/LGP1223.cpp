//============================================================================
// Name        : LGP1223.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum = 0.0f;
    cin >> n;
    pair<int, int>* a = new std::pair<int, int>[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i)
    {
        sum += a[i].first * (n - i - 1);
        cout << a[i].second << ' ';
    }
    printf("\n%.2f", sum / n);
    delete[] a;
    return 0;
}
