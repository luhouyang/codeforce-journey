#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &v, int x, int y);

void quicksort(vector<int> &vec, int L, int R)
{
    int i, j, mid, piv;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    piv = vec[mid];

    while (i < R || j > L)
    {
        while (vec[i] < piv)
            i++;
        while (vec[j] > piv)
            j--;

        if (i <= j)
        {
            swap(vec, i, j);
            i++;
            j--;
        }
        else
        {
            if (i < R)
                quicksort(vec, i, R);
            if (j > L)
                quicksort(vec, L, j);
            return;
        }
    }
}

void swap(vector<int> &v, int x, int y)
{
    int temp = v[x];
    v[x] = v[y];
    v[y] = temp;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int nt;
        int q;
        cin >> nt >> q;

        int targets[nt];
        for (int i = 0; i < nt; i++)
        {
            cin >> targets[i];
        }

        while (q--)
        {

            vector<int> elements;

            int l, r;
            cin >> l >> r;

            l--;
            r--;

            for (int i = l; i <= r; i++)
            {

                elements.push_back(targets[i]);
            }

            quicksort(elements, 0, elements.size() - 1);

            int robin = 0;
            int nott = 0;

            for (int i = elements.size() - 1; i >= 0; i--)
            {
                robin += elements[i];
                i--;

                if (i < 0)
                {
                    break;
                }
                nott += elements[i];
            }

            if (robin > nott)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}