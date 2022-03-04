//author: nobrakebicycle
//created: 02.03.2022 20:51:51
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Stores the parent of each vertex
int parent[1000000];

// Function to find the topmost
// parent of vertex a
int root(int a)
{
    // If current vertex is
    // the topmost vertex
    if (a == parent[a])
    {
        return a;
    }

    // Otherwise, set topmost vertex of
    // its parent as its topmost vertex
    return parent[a] = root(parent[a]);
}

// Function to connect the component
// having vertex a with the component
// having vertex b
void connect(int a, int b)
{
    // Connect edges
    a = root(a);
    b = root(b);

    if (a != b)
    {
        parent[b] = a;
    }
}

// Function to find unique top most parents
int connectedComponents(int n)
{
    set<int> s;

    // Traverse all vertices
    for (int i = 0; i < n; i++)
    {

        // Insert all topmost
        // vertices obtained
        s.insert(root(parent[i]));
    }

    // Print count of connected components
    return s.size();
}

// Function to print answer
int printAnswer(int N,
                vector<vector<int>> edges)
{

    // Setting parent to itself
    for (int i = 0; i <= N; i++)
    {
        parent[i] = i;
    }

    // Traverse all edges
    for (int i = 0; i < edges.size(); i++)
    {
        connect(edges[i][0], edges[i][1]);
    }

    // Print answer
    return connectedComponents(N);
}

// Cpp program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to form edge between
// two vertices src and dest
void add_edge(vector<int> adj[],
              int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

// Function which finds all the paths
// and stores it in paths array
void find_paths(vector<vector<int>> &paths,
                vector<int> &path,
                vector<int> parent[],
                int n, int u)
{
    // Base Case
    if (u == -1)
    {
        paths.push_back(path);
        return;
    }

    // Loop for all the parents
    // of the given vertex
    for (int par : parent[u])
    {

        // Insert the current
        // vertex in path
        path.push_back(u);

        // Recursive call for its parent
        find_paths(paths, path, parent,
                   n, par);

        // Remove the current vertex
        path.pop_back();
    }
}

// Function which performs bfs
// from the given source vertex
void bfs(vector<int> adj[],
         vector<int> parent[],
         int n, int start)
{
    // dist will contain shortest distance
    // from start to every other vertex
    vector<int> dist(n, INT_MAX);

    queue<int> q;

    // Insert source vertex in queue and make
    // its parent -1 and distance 0
    q.push(start);
    parent[start] = {-1};
    dist[start] = 0;

    // Until Queue is empty
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dist[v] > dist[u] + 1)
            {

                // A shorter distance is found
                // So erase all the previous parents
                // and insert new parent u in parent[v]
                dist[v] = dist[u] + 1;
                q.push(v);
                parent[v].clear();
                parent[v].push_back(u);
            }
            else if (dist[v] == dist[u] + 1)
            {

                // Another candidate parent for
                // shortes path found
                parent[v].push_back(u);
            }
        }
    }
}

// Function which prints all the paths
// from start to end
int print_paths(vector<int> adj[],
                int n, int start, int end)
{
    vector<vector<int>> paths;
    vector<int> path;
    vector<int> parent[n];

    // Function call to bfs
    bfs(adj, parent, n, start);

    // Function call to find_paths
    find_paths(paths, path, parent, n, end);

    return paths.size();
}

// Driver Code
int main()
{
    // Given N
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> adj[n];
        // Given edges
        vector<vector<int>> edges;
        unordered_map<int, int> j;
        int min = n + 1;
        int max = 0;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a > max)

            {
                max = a;
            }
            if (b > max)
            {
                max = b;
            }
            if (a < min)

            {
                min = a;
            }
            if (b < min)
            {
                min = b;
            }
            j[a] = 1;
            j[b] = 1;

            vector<int> c;
            c.push_back(a);
            c.push_back(b);
            edges.push_back(c);
            add_edge(adj, a - 1, b - 1);
        }

        int count = 0;

        int d = min - 1;

        int e = n - max;
        count += (n - (j.size()) - d - e) * 2;
        count += d + e;
        int src = 0;
        int dest = n - 1;
        // Function call
        if (printAnswer(n, edges) == n)
        {
            cout << n - 1 << "\n";
        }
        else if (print_paths(adj, n, src, dest))
        {
            cout << "0\n";
        }
        else
        {
            int count1 = 0;
            int f = 0;
            for (int i = min; i <= max; i++)
            {

                if (j[i] == 1)
                    continue;
                else
                {
                    if (j[i - 1] != 1)
                    {
                        count1++;
                    }
                    else
                    {
                        count1 += 2;
                    }
                }
            }
            cout << e + d + count1 << "\n";
        }
    }

    return 0;
}
