#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int w, h;
	    cin >> w >> h;
        int c_x1;
	    cin >> c_x1;
        vector<int> x1(c_x1);
        for(int i=0;i<c_x1;i++) cin >> x1[i];
        int c_x2;
	    cin >> c_x2;
        vector<int> x2(c_x2);
        for(int i=0;i<c_x2;i++) cin >> x2[i];
        int c_y1;
	    cin >> c_y1;
        vector<int> y1(c_y1);
        for(int i=0;i<c_y1;i++) cin >> y1[i];
        int c_y2;
	    cin >> c_y2;
        vector<int> y2(c_y2);
        for(int i=0;i<c_y2;i++) cin >> y2[i];
        int x1_d1 = x1[c_x1 - 1] - x1[0];
	    int x1_d2 = x2[c_x2 - 1] - x2[0];
        int area1 = max(x1_d1, x1_d2) * h;
        int y1_d1 = y1[c_y1 - 1] - y1[0];
	    int y1_d2 = y2[c_y2 - 1] - y2[0];
        int area2 = max(y1_d1, y1_d2) * w;
        cout << max(area1, area2)<<endl;
    }
    return 0;
}
