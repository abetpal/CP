//author: nobrakebicycle
//created: 12.03.2022 11:36:51
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w, int weight);

    int ShortestPath(int s, int d);

    int pShortestPath(int parent[], int s, int d);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[2 * V];
}

void Graph::addEdge(int v, int w, int weight)
{

    if (weight == 2)
    {
        adj[v].push_back(v + V);
        adj[v + V].push_back(w);
    }
    else
        adj[v].push_back(w);
}

int Graph::pShortestPath(int parent[], int s, int d)
{
    static int level = 0;

    if (parent[s] == -1)
    {
        // cout << "Shortest Path between " << s << " and "
        //      << d << " is " << s << " ";
        return level;
    }

    pShortestPath(parent, parent[s], d);

    level++;
    // if (s < V)
    //     cout << s << " ";

    return level;
}

int Graph::ShortestPath(int src, int dest)
{

    bool *visited = new bool[2 * V];
    int *parent = new int[2 * V];

    for (int i = 0; i < 2 * V; i++)
    {
        visited[i] = false;
        parent[i] = -1;
    }

    list<int> queue;

    visited[src] = true;
    queue.push_back(src);

    list<int>::iterator i;

    while (!queue.empty())
    {
        int s = queue.front();

        if (s == dest)
            return pShortestPath(parent, s, dest);

        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
                parent[*i] = s;
            }
        }
    }

    return -1;
}

void enize(std::string const &str, const char delim,
           std::vector<std::string> &out)
{

    std::stringstream ss(str);

    std::string s;
    while (std::getline(ss, s, delim))
    {
        out.push_back(s);
    }
}

int main()
{

    int vvv;
    cin >> vvv;
    cin.ignore();
    Graph g(vvv);
    for (int i = 1; i <= vvv; i++)
    {
        string sss;

        getline(cin, sss);
        const char delim = ' ';

        std::vector<std::string> out;
        enize(sss, delim, out);

        for (int j = 0; j < out.size(); j++)
        {
            string m = out[j];
            int ed = stoi(m);
            g.addEdge((i - 1), (ed - 1), 1);
        }
    }

    int src, dest;
    cin >> src >> dest;
    src--;
    dest--;
    cout
        << g.ShortestPath(src, dest);

    return 0;
}
