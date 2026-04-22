#include <bits/stdc++.h>
using namespace std;

const int DX[12] = {1, 1, -1, -1, 2, 2, -2, -2, 2, 2, -2, -2};
const int DY[12] = {2, -2, 2, -2, 1, -1, 1, -1, 2, -2, 2, -2};

int bfs(int sx, int sy) {
    if (sx == 1 && sy == 1) {
        return 0;
    }

    vector<vector<int>> dist(101, vector<int>(101, -1));
    queue<pair<int, int>> q;
    dist[sx][sy] = 0;
    q.push(make_pair(sx, sy));

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for (int i = 0; i < 12; ++i) {
            int nx = x + DX[i];
            int ny = y + DY[i];

            if (nx >= 1 && nx <= 100 && ny >= 1 && ny <= 100 && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                if (nx == 1 && ny == 1) {
                    return dist[nx][ny];
                }
                q.push(make_pair(nx, ny));
            }
        }
    }

    return -1;
}

int main() {
    int ax, ay, bx, by;
    cin >> ax >> ay >> bx >> by;
    cout << bfs(ax, ay) << "\n";
    cout << bfs(bx, by) << "\n";
    return 0;
}
