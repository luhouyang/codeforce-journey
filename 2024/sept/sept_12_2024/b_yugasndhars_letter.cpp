#include <iostream>

using namespace std;

int main()
{
    int n_cases = 0;
    cin >> n_cases;

    int px, py, bx, by, np, final_np, sml_x, sml_y = 0;

    for (int i = 0; i < n_cases; i++)
    {
        cin >> px;
        cin >> py;
        cin >> bx;
        cin >> by;
        cin >> np;

        // 0 = white, 1 = blue, 2 = pink;
        // int paper[px][py] = {0};
        // paper[bx - 1][by - 1] = 1;

        if (np >= 4)
        {
            final_np = px * py - 1;
        }
        else if (np == 3)
        {
            if ((bx == 1 || bx == px) && (by == 1 || by == py))
            {
                final_np = px * py - 1;
            }
            else
            {
                sml_x = 0;
                if ((bx - 1) < (px - bx))
                {
                    sml_x = bx - 1;
                }
                else
                {
                    sml_x = px - bx - 1;
                }

                sml_y = 0;
                if ((by - 1) < (py - by))
                {
                    sml_y = by - 1;
                }
                else
                {
                    sml_y = py - by - 1;
                }

                if (sml_x < sml_y)
                {
                    final_np = px * py - sml_x - 1;
                }
                else
                {
                    final_np = px * py - sml_y - 1;
                }
            }
        }
        else if (np == 2)
        {
            if ((bx == 1 || bx == px) && (by == 1 || by == py))
            {
                final_np = px * py - 1;
            }
            else if (bx == 1 || bx == px)
            {
                if ((by - 1) < (py - by))
                {
                    final_np = px * py - by;
                }
                else
                {
                    final_np = px * py - (py - by) - 1;
                }
            }
            else if (by == 1 || by == py)
            {
                if ((bx - 1) < (px - bx))
                {
                    final_np = px * py - bx;
                }
                else
                {
                    final_np = px * py - (px - bx) - 1;
                }
            }
            else
            {
                if (px <= py)
                {
                    final_np = px * py - px;
                }
                else
                {
                    final_np = px * py - py;
                }
            }
        }
        else if (np == 1)
        {
            if (px <= py)
            {
                if (bx > px / 2)
                {
                    final_np = px * py - (px - bx + 1) * py;
                }
                else
                {
                    final_np = px * py - bx * py;
                }
            }
            else
            {
                if (by > py / 2)
                {
                    final_np = px * py - (py - by + 1) * px;
                }
                else
                {
                    final_np = px * py - by * px;
                }
            }
        }
        else
        {
            final_np = 0;
        }

        cout << final_np << endl;
        px = py = bx = by = np = final_np = 0;
    }
}