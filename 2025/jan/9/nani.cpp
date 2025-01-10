#include <iostream>

int t, l, r;
int main()
{
    for (std::cin >> t; t--;)
    {
        std::cin >> l >> r;
        int k = std::__lg(l ^ r);
        // std::cout << k << ' ';
        int sb = ((1 << k) | l & (-1u << k));
        // std::cout << (1 << k) << ' ' << (-1u << k) << ' ' << (l & (-1u << k)) << ' ' << ((1 << k) | l & (-1u << k)) << ' ';
        std::cout << sb << ' ' << sb - 1 << ' ' << (sb + 1 <= r ? sb + 1 : sb - 2) << '\n';
    }
}