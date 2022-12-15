#include <cstdio>

#include <vector>

#include <cstring>

#include <queue>

#define MAX 100010

#define INF 0x3F3F3F3F

using namespace std;

 

int b, e, w, v, j, i, tests;

int n, m, start, fin, cost, to;

 

struct edge

{

  int node, dist;

  edge(int node, int dist) : node(node), dist(dist) {}

};

 

bool operator< (edge a, edge b)

{

  return a.dist > b.dist;

}

 

int used[MAX], dist[MAX];

vector<vector<edge> > g;

priority_queue<edge> pq;

 

void Relax(int v, int to, int cost)

{

 if (dist[to] > dist[v] + cost)

 {

   dist[to] = dist[v] + cost;

   pq.push(edge(to,dist[to]));

 }

}

 

int main(void)

{

  scanf("%d",&tests);

  while(tests--)

  {

    scanf("%d %d %d %d",&n,&m,&start,&fin);

    g.clear();

    g.resize(n+1);

    for(i = 0; i < m; i++)

    {

      scanf("%d %d %d",&b,&e,&w);

      g[b].push_back(edge(e,w));

      g[e].push_back(edge(b,w));

    }

 

    memset(dist,0x3F,sizeof(dist));

    dist[start] = 0;

    memset(used,0,sizeof(used));

 

    pq.push(edge(start,0));

    while(!pq.empty())

    {

      edge e = pq.top(); pq.pop();

      v = e.node;

      if (e.dist > dist[v]) continue;

      for(j = 0; j < g[v].size(); j++)

      {

        to = g[v][j].node;

        cost = g[v][j].dist;

        if (!used[to]) Relax(v,to,cost);

      }

    }

 

    if (dist[fin] == INF)

      printf("NONE\n");

    else

      printf("%d\n",dist[fin]);

 

  }

  return 0;

}

 
