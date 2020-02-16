#include <bits/stdc++.h> 
#define ll long long
using namespace std;
map<string,int> m,m2,mm;
int main()
{
	ll number,length; cin>>number>>length;
	string s[number];
	for(ll i=0;i<number;i++){
		cin>>s[i]; m[s[i]]=1;
	}
	if(number==1){
		string t;
		for(int i=s[0].length()-1;i>=0;i--){
			t.push_back(s[0][i]);
		}
		if(t==s[0]) cout<<length<<endl<<t<<endl;
		else cout<<0<<endl<<endl;
		return 0;
	}
	if(length==1){
		cout<<1<<endl<<s[0]<<endl;
		return 0;
	}
	vector<string> v;
	for(ll i=0;i<number;i++){
		string t;
		for(ll j=length-1;j>=0;j--) t.push_back(s[i][j]);
		if(m[t]==1&&m2[s[i]]==0&&m2[t]==0&&s[i]!=t){
			if(v.size()==0){
				v.push_back(s[i]); v.push_back(t);
				m2[s[i]]=1; m2[t]=1;
			}
			else{
				vector<string> vv;
				ll p=v.size();
				for(ll j=v.size()-1;j>=p/2;j--){
					vv.push_back(v[j]); v.pop_back();
				}
				v.push_back(s[i]); v.push_back(t);
				for(ll j=vv.size()-1;j>=0;j--) v.push_back(vv[j]);
				m2[s[i]]=1; m2[t]=1;
			}
		}
	}
	for(ll i=0;i<number;i++){
		if(m2[s[i]]==0){
			string t;
			for(ll j=length-1;j>=0;j--) t.push_back(s[i][j]);
			if(t==s[i]){
				vector<string> vv;
				if(v.size()>0){
					ll p=v.size();
					for(ll j=v.size()-1;j>=p/2;j--){
						vv.push_back(v[j]); v.pop_back(); 
					}
				}
				v.push_back(s[i]);
				if(vv.size()>0) for(ll j=vv.size()-1;j>=0;j--) v.push_back(vv[j]);
				break;
			}
		}
	}
	cout<<v.size()*length<<endl;
	if(v.size()==0) cout<<endl;
	else{
		for(int i=0;i<v.size();i++) cout<<v[i];
	}
}
