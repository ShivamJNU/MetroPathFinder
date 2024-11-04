#include <bits/stdc++.h>
#include "assignAllLines.cpp"
#include "assignAllInternalGraph.cpp"
#include "assignAllTimeGraph.cpp"
#include "shortestPathTime.cpp"
#include "shortestPathIntermediateStations.cpp"

using namespace std;

// Two criterias: Shortest route and Minimum Time

map<string, int> m1;
map<int, string> m2;

vector<vector<int>> graphDist;
vector<vector<int>> graphTime;

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
        path = shortestPathTime(300, m1[src], m1[dst], graphTime);
    }
    else
    {
        path = shortestPathIntermediateStations(300, m1[src], m1[dst], graphDist);
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
