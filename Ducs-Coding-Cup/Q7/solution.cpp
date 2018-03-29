#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define endl "\n"
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define boost ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"; 
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define all(c) (c).begin(),(c).end() 
 
typedef int ll;
typedef pair<ll,ll> pii;
typedef priority_queue< pii , vector< pii > , greater< pii > > pq;
const ll N=2e4+10;
 
const int INF = 0x3f3f3f3f;
struct edge {
    int u, v;
    int flow;
    int cost;
    edge() {}
    edge(int u, int v, int f, int c) : u(u), v(v), flow(f), cost(c) {}
}; 
struct MinCostMaxFlow {
    int N;
    vector < vector <int> > G;
    vector <edge> E;
    int numEdges;
    vector <int> found, dad;
    vector <int> dist; 
    MinCostMaxFlow(int N): 
     N(N), G(N), found(N), dist(N), dad(N), numEdges(0) {}
  
    void AddEdge(int from, int to, int capacity, int cost) {
        G[from].push_back(numEdges++);
        E.push_back(edge(from, to, capacity, cost));
        G[to].push_back(numEdges++);
        E.push_back(edge(to, from, 0, int(-1) * cost));
    }
    bool spfa(int s, int t) {
        fill(dad.begin(), dad.end(), -1);
        fill(dist.begin(), dist.end(), INF);
        fill(found.begin(), found.end(), 0);
        queue <int> Q;
        dist[s] = 0;
        Q.push(s);
        found[s] = true;    
        while(!Q.empty()) {
            int u = Q.front(); Q.pop();
            if(u == t) continue;
            for (int i = 0; i < G[u].size(); ++i) {
                edge &pres = E[G[u][i]];
                int v = pres.v;
                if(pres.flow <= 0) continue;
                if(dist[u] + pres.cost < dist[v]) {
                    dad[v] = G[u][i];
                    dist[v] = dist[u] + pres.cost;
                    if(!found[v]) Q.push(v), found[v] = true;
                }
            }
            found[u] = false;
        }
        return (dad[t] != -1);
    }
 
    int dfs(int s,int t) {
        int flow = INF;
        for(int i = dad[t]; i != -1; i = dad[E[i].u]) {
            if(E[i].flow < flow) flow = E[i].flow;
        }
        for(int i = dad[t]; i != -1; i = dad[E[i].u]) {
            E[i].flow -= flow;
            E[i ^ 1].flow += flow;
        }
        return flow;
    }
    pair <int, int> GetMaxFlow(int s, int t) {
        int totflow = 0;
        int totcost = 0;
        while(spfa(s,t)) {
            int amt = dfs(s,t);
            totflow += amt;
            totcost += dist[t] * (int)amt;
        }
        return make_pair(totflow, totcost);
    }
};

int main(){
	ll i,n,p,d,m,P[N],D[N],M[N];
	cout<<"\n\n\tEnter the values for n,p,d,m : ";
	cin>>n>>p>>d>>m;
	cout<<"Enter the arrays P,D,M : ";
	for(i=1;i<=n;i++)
		cin>>P[i];
	for(i=1;i<=n;i++)
		cin>>D[i];
	for(i=1;i<=n;i++)
		cin>>M[i];
 
	int source=0,sink=n+1,poe=n+2,dan=n+3,mus=n+4;
	MinCostMaxFlow mf(n+10);
 
	
	mf.AddEdge(source,poe,p,0);
	mf.AddEdge(source,dan,d,0);
	mf.AddEdge(source,mus,m,0);
 
	for(i=1;i<=n;i++){
		mf.AddEdge(poe,i,1,-P[i]);
		mf.AddEdge(dan,i,1,-D[i]);
		mf.AddEdge(mus,i,1,-M[i]);
		mf.AddEdge(i,sink,1,0);
	}
 
	pair<int,int> res=mf.GetMaxFlow(source,sink);
 
	assert(res.X==p+d+m);
	cout<<-res.Y<<endl;
 
	return 0;
}
