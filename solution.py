from collections import deque


MOVES = [
    (1, 2),
    (1, -2),
    (-1, 2),
    (-1, -2),
    (2, 1),
    (2, -1),
    (-2, 1),
    (-2, -1),
    (2, 2),
    (2, -2),
    (-2, 2),
    (-2, -2),
]


def bfs(start_x: int, start_y: int) -> int:
    if start_x == 1 and start_y == 1:
        return 0

    dist = [[-1] * 101 for _ in range(101)]
    queue = deque([(start_x, start_y)])
    dist[start_x][start_y] = 0

    while queue:
        x, y = queue.popleft()
        for dx, dy in MOVES:
            nx = x + dx
            ny = y + dy
            if 1 <= nx <= 100 and 1 <= ny <= 100 and dist[nx][ny] == -1:
                dist[nx][ny] = dist[x][y] + 1
                if nx == 1 and ny == 1:
                    return dist[nx][ny]
                queue.append((nx, ny))

    return -1


def main() -> None:
    data = []
    while len(data) < 4:
        try:
            data.extend(map(int, input().split()))
        except EOFError:
            break

    if len(data) < 4:
        return

    ax, ay, bx, by = data[:4]
    print(bfs(ax, ay))
    print(bfs(bx, by))


if __name__ == "__main__":
    main()
