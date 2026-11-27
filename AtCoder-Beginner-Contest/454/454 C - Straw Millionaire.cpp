// python3
import sys
from collections import deque
input = sys.stdin.readline
n, m = map(int, input().split())
g = [[] for _ in range(n)]
for _ in range(m):
    x, y = map(int, input().split())
    g[x - 1].append(y - 1)
q = deque()
d = [False] * n
q.append(0)
d[0] = True
while q:
    x = q.popleft()
    for i in g[x]:
        if d[i]:
            continue
        d[i] = True
        q.append(i)
print(d.count(True))
