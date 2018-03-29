#include "bits/stdc++.h"

using namespace std;

typedef long long ll;
typedef pair < int, int > ii;

const int N = 2e5 + 5;

int n, k, m;
vector < ii > v[N];

int main () {

    scanf("%d %d %d", &n, &k, &m);

    vector < ii > vs;

    for(int i = 1; i <= n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        vs.push_back({x, y});
    }

    sort(vs.begin(), vs.end());

    for(auto &tmp : vs) {
        int x, y;
        tie(x, y) = tmp;
        int cnt = 1;
        if(v[y].size() and v[y].back().first == x)
            cnt += v[y].back().second;
        v[y].push_back({x, cnt});
    }

    for(int i = 1; i <= m; i++) {
        int c;
        scanf("%d", &c);
        assert(1 <= c and c <= 2);
        if(c == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            int cnt = 1;
            if(v[y].size() and v[y].back().first == x)
                cnt += v[y].back().second;
            v[y].push_back({x, cnt});
        }
        else {
            int x, y;
            scanf("%d %d", &x, &y);
            int i = v[x].size() - 1, j = v[y].size() - 1;
            while(i >= 0 and j >= 0) {
                {
                    //SQRT THING
                    int k = min((v[x][i].second - 1) / v[y][j].first, (v[y][j].second - 1) / v[x][i].first);
                    i -= k * v[y][j].first;
                    j -= k * v[x][i].first;
                }
                j -= v[x][i].first;
                if(j >= 0)
                    i -= v[y][j].first;
            }
            printf("%d\n", i >= 0 ? x : y);
        }
    }

    return 0;

}
