#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long double a, b, c ,d,e,f;
    long double left, right;
    cin >> a >> b >> c >> d >> e >> f;
    left = a + f;
    right = (d/e) + (b/c);
    if (left == right){
        cout << "=";
    }else if (left > right){
        cout << ">";
    }else if (right > left){
        cout << "<";
    }
    return 0;
}