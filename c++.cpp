#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
	freopen("input.txt", "r", stdin);
	int n; cin>>n;
	string x="1", y, z;
	if(n==1){
		cout<<x<<endl;
		return 0;
	}
	int f=1;
	for(int i=2; i<=n; i++){
		if(f){
			f=0;
			z ="1";
			y = x + z + x;
		}
		else{
			f=1;
			x = y + ('0'+i)+y;

		}
	}
	if(n&1) cout<<x<<endl;
	else cout<<y<<endl;

}






