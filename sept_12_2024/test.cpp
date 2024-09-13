#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAXN = 1000;

int n, m, x, y, k;
char grid[MAXN][MAXN];

struct Cell
{
    int row, col;
};

void bfs()
{
    queue<Cell> q;
    q.push({x, y});
    grid[x][y] = 'B';

    backtrack(q, k);
}

void backtrack(queue<Cell> q, int k)
{
    if (k == 0)
    {
        // Calculate pink cells and update maximum if necessary
        int pinkCount = countPink();
        maxPink = max(maxPink, pinkCount);
        return;
    }

    Cell curr = q.front();
    q.pop();

    // Try placing pink drop in all adjacent white cells
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            int newRow = curr.row + i;
            int newCol = curr.col + j;

            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && grid[newRow][newCol] == 'W')
            {
                grid[newRow][newCol] = 'P';
                q.push({newRow, newCol});
                backtrack(q, k - 1);
                grid[newRow][newCol] = 'W';
                q.pop();
            }
        }
    }
}

int countPink()
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'P')
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m >> x >> y >> k;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                grid[i][j] = 'W';
            }
        }

        bfs();
        cout << countPink() << endl;
    }

    return 0;
}