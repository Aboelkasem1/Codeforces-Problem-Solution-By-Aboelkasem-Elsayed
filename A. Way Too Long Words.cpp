#include <bits/stdc++.h>
using namespace std;
void iofile ();
 
int main() {

	iofile ();

    int q; cin >> q;
    string s;

    for (int i = 0; i < q; ++i) {
       cin >> s;

       if (s.size() > 10)
       {
            cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
       }
       else
       {
            cout << s << "\n";
       }
       
       
    }

    return 0;
}


 
void iofile (){
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
