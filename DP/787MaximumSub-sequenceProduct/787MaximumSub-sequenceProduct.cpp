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

int main(){
	int a;
	while(cin >> a){
		vi p, n;
		int maxi = 0;
		if (a > 0){
			p.push_back(a);
			n.push_back(0);
		}
		else {
			p.push_back(0);
			n.push_back(a);
		}
		maxi = a;
		int c = 1;
		while (cin >> a){
			if (a == -999999)
				break;
			if (a > 0){
				p.push_back(max(p[c-1] * a, a));
				n.push_back(n[c-1] * a);
			}
			else {
				p.push_back(n[c-1] * a);
				n.push_back(min(p[c-1] * a, a));
			}
			maxi = max(maxi, p[c]);
			c++;
		}
		cout << maxi << endl;
	}
	return 0;
}
