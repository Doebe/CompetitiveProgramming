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

ll fac[21][21];

int main(){
	fac[0][0] = 1;
	for (int i = 1; i <= 20; i++) {
		fac[i][0] = fac[i-1][i-1];
		for (int j = 1; j <= 20; j++) {
			fac[i][j] = fac[i][j-1] * j;
			cout << fac[i][j] << " ";
		}
		cout << endl;
	}
	int t;
	string line;
	ll p;
	scanf("%d\n", &t);
	for (int c = 1; c <= t; c++) {
		cin >> line >> p;
		int l = line.size();
		char ans[l];

	}
	return 0;
}
