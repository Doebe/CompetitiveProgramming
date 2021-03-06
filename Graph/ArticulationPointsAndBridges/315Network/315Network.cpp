#include <bits/stdc++.h>
using namespace std;

const int MAX_INT = std::numeric_limits<int>::max();
const int MIN_INT = std::numeric_limits<int>::min();
const int INF = 1000000000;
const int NEG_INF = -1000000000;

#define max(a,b)(a>b?a:b)
#define min(a,b)(a<b?a:b)
#define MEM(arr,val)memset(arr,val, sizeof arr)
#define PI acos(0)*2.0
#define eps 1.0e-9
#define are_equal(a,b)fabs(a-b)<eps
#define LS(b)(b& (-b)) // Least significant bit
#define DEG_to_RAD(a)((a*PI)/180.0) // convert to radians

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int,char> ic;
typedef pair<long,char> lc;
typedef vector<int> vi;
typedef vector<ii> vii;

int gcd(int a,int b){return b == 0 ? a : gcd(b,a%b);}
int lcm(int a,int b){return a*(b/gcd(a,b));}

vi dfs_num, dfs_low, dfs_parent;
vector<bool> articulation_vertex;
map<int, vi> adj;
int dfsNumberCounter, dfsRoot, rootChildren;

void articulationPoint(int u){
	dfs_low[u] = dfs_num[u] = dfsNumberCounter++;
	for (int j = 0; j < (int)adj[u].size(); j++){
		int v = adj[u][j];
		if (dfs_num[v] == 0){
			dfs_parent[v] = u;
			if (u == dfsRoot) rootChildren++;

			articulationPoint(v);

			if (dfs_low[v] >= dfs_num[u]){
//				cout << u << ", " << v << endl;
				articulation_vertex[u] = true;
			}
			dfs_low[u] = min(dfs_low[u], dfs_low[v]);
		}
		else if (v != dfs_parent[u])
			dfs_low[u] = min(dfs_low[u], dfs_num[v]);
	}
}

int main(){
	int n;
	while (cin >> n){
		if (n == 0)
			break;
		string line;
		getline(cin, line);
		adj.clear();
		while (getline(cin, line)){
//			cout << line <<endl;
			if (line == "0")
				break;
			stringstream ss;
			ss.str(line);
			int a, b;
			ss >> a;
			while (ss >> b){
				adj[a].push_back(b);
				adj[b].push_back(a);
			}
		}
		dfsNumberCounter = 1;
		dfs_num.assign(n+1, 0);
		dfs_low.assign(n+1, 0);
		dfs_parent.assign(n+1, 0);
		articulation_vertex.assign(n, false);
		for (int i = 1; i <= n; i++){
//			cout << i << ", " << dfs_num[i] << endl;
			if (dfs_num[i] == 0){
				dfsRoot = i;
//				cout << i << endl;
				rootChildren = 0;
				articulationPoint(i);
				articulation_vertex[dfsRoot] = (rootChildren > 1);
//				cout << dfsRoot << ", " << rootChildren << ", " << articulation_vertex[dfsRoot] << endl;
			}
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++){
//			cout << i << ", " << dfs_num[i] << ", " << dfs_low[i] << ", " << articulation_vertex[i] << endl;
			if (articulation_vertex[i])
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
