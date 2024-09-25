#include <iostream>
#include <unordered_map>
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
            swap(vec, i, j); // error=swap function doesnt take 3 arguments
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
            // unordered_map<int, int> t_map = {};
            // vector<int> keys;
            vector<int> elements;

            int l, r;
            cin >> l >> r;

            l--;
            r--;

            for (int i = l; i <= r; i++)
            {
                // if (t_map.find(targets[i]) == t_map.end())
                // {
                //     t_map[targets[i]] = 1;
                //     keys.push_back(targets[i]);
                // }
                // else
                // {
                //     t_map[targets[i]]++;
                // }
                elements.push_back(targets[i]);
            }

            // quicksort(keys, 0, keys.size() - 1);
            quicksort(elements, 0, elements.size() - 1);

            int robin = 0;
            int nott = 0;
            // bool swt = false;
            // for (int i = keys.size() - 1; i >= 0; i--)
            // {
            //     int r = t_map[keys[i]] % 2;
            //     if (r == 0)
            //     {
            //         int m = keys[i] * (t_map[keys[i]] / 2);
            //         robin += m;
            //         nott += m;
            //     }
            //     else
            //     {
            //         int m = keys[i] * (t_map[keys[i]] / 2);
            //         if (swt)
            //         {
            //             swt = !swt;
            //             robin += m;
            //             nott += m + keys[i] * r;
            //         }
            //         else
            //         {
            //             swt = !swt;
            //             robin += m + keys[i] * r;
            //             nott += m;
            //         }
            //     }
            // }

            for (int i = elements.size() - 1; i >= 0; i--)
            {
                // cout << elements[i] << endl;
                robin += elements[i];
                i--;

                if (i < 0)
                {
                    break;
                }
                // cout << elements[i] << endl;
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