#include <bits/stdc++.h>
#include "assignAllLines.cpp"
#include "assignAllInternalGraph.cpp"
#include "assignAllTimeGraph.cpp"

using namespace std;

// Two criterias: Shortest route and Minimum Time

map<string, int> m1;
map<int, string> m2;

vector<vector<int>> graphDist;
vector<vector<int>> graphTime;

vector<int> shortestPathIntermediateStations(int n, int src, int dst)
{

    vector<pair<int, int>> adj[n + 1];
    for (auto it : graphDist)
    {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(n + 1, 1e9), parent(n + 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    dist[src] = 0;

    pq.push({0, src});
    while (!pq.empty())
    {

        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int dis = it.first;

        for (auto it : adj[node])
        {
            int adjNode = it.first;
            int edW = it.second;

            if (dis + edW < dist[adjNode])
            {
                dist[adjNode] = dis + edW;
                pq.push({dis + edW, adjNode});

                parent[adjNode] = node;
            }
        }
    }

    if (dist[dst] == 1e9)
    {
        return {-1};
    }

    vector<int> path;
    int node = dst;

    while (parent[node] != node)
    {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(src);

    reverse(path.begin(), path.end());
    return path;
}

vector<int> shortestPathTime(int n, int src, int dst)
{

    vector<pair<int, int>> adj[n + 1];
    for (auto it : graphTime)
    {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(n + 1, 1e9), parent(n + 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    dist[src] = 0;

    pq.push({0, src});
    while (!pq.empty())
    {

        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int dis = it.first;

        for (auto it : adj[node])
        {
            int adjNode = it.first;
            int edW = it.second;

            if (dis + edW < dist[adjNode])
            {
                dist[adjNode] = dis + edW;
                pq.push({dis + edW, adjNode});

                parent[adjNode] = node;
            }
        }
    }

    if (dist[dst] == 1e9)
    {
        return {-1};
    }

    vector<int> path;
    int node = dst;

    while (parent[node] != node)
    {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(src);

    reverse(path.begin(), path.end());
    return path;
}

signed main()
{

    assignAllLines(m1, m2);
    assignAllInternalGraph(m1, m2, graphDist);
    assignAllTimeGraph(m1, m2, graphTime);

    string src;
    getline(cin, src);

    string dst;
    getline(cin, dst);

    if (m1.find(src) == m1.end() || m1.find(dst) == m1.end())
    {
        cout << "No Path Exists" << endl;
        return 0;
    }

    cout << "Enter your Path's priority, input 1 for minimum Commute Time or 2 for minimum no. of Intermediate stations." << endl;

    int f;
    cin >> f;

    if (f != 1 && f != 2)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }

    vector<int> path;

    if (f == 1)
    {
        path = shortestPathTime(300, m1[src], m1[dst]);
    }
    else
    {
        path = shortestPathIntermediateStations(300, m1[src], m1[dst]);
    }

    if (path[0] == -1)
    {
        cout << "No Path Exists" << endl;
        return 0;
    }

    cout << "Here is the most optimal path:" << endl;

    for (int i = 0; i < path.size(); i++)
    {
        cout << m2[path[i]];

        if (i < path.size() - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;

    return 0;
}
