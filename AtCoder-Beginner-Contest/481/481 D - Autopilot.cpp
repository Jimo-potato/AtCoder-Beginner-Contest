#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, S, T;
    cin >> N >> M >> S >> T;
    vector<pair<int, int>> route(M);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        route[i] = make_pair(B, A);
    }
    sort(route.begin(), route.end());

    int fuel = 0;
    vector<int> dp;
    bool found = false;
    while (!found) {
        auto position = lower_bound(route.begin(), route.end(), T);
        auto over = upper_bound(route.begin(), route.end(), T);
    }
}

// correct answer
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

const long long INF = 1000000000000000000LL;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, s, t;
    cin >> n >> m >> s >> t;

    s--;
    t--;

    vector<long long> a(m), b(m);

    for (long long i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }

    vector<vector<pair<long long, long long>>> graph(n);

    for (long long i = 0; i < m; i++) {
        graph[a[i]].push_back({b[i], 1});
    }

    for (long long i = 0; i < n; i++) {
        if (!graph[i].empty()) {
            sort(graph[i].begin(), graph[i].end());
            graph[i][0].second = 0;
        }
    }

    vector<long long> dist(n, INF);
    deque<pair<long long, long long>> que;

    dist[s] = 0;
    que.push_front({0, s});

    while (!que.empty()) {
        auto current = que.front();
        que.pop_front();

        long long d = current.first;
        long long v = current.second;

        if (d > dist[v]) {
            continue;
        }

        for (auto edge : graph[v]) {
            long long to = edge.first;
            long long cost = edge.second;

            if (dist[to] > dist[v] + cost) {
                dist[to] = dist[v] + cost;

                if (cost == 0) {
                    que.push_front({dist[to], to});
                }
                else {
                    que.push_back({dist[to], to});
                }
            }
        }
    }

    if (dist[t] == INF) {
        cout << -1 << '\n';
    }
    else {
        cout << dist[t] << '\n';
    }

    return 0;
}