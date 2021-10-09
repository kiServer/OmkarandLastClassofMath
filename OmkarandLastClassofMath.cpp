using namespace std;
typedef long long ll;
ll a;
ll b;
 
 
inline ll largerNumber(ll prgf){
	/*prgf input number >>> Lower*/
	prgf--;
	ll i=b;
	ll jm = 0;
	while (i>0 and prgf/i<a){
		jm =jm+(prgf/i);
		i--;
	}
	return jm+(i*a);
}
int main(void){
	cin.tie(0);
	/*IOS - ofs */
	ll x;
	cin >> a>>b>>x;
	ll l=1;
	ll r=(a*b)+1;
	while (l<r){
		ll b = (l+r)>>1LL;
		/*Top -m*/
		if (largerNumber(b)<x){
			l=b+1;
		}
		else{
			r=b;
		}		
	}
	cout << l-1;
	return 0;
}
