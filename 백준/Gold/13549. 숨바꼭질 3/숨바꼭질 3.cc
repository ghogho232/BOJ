#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<queue>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include <sstream>
#include <iomanip>
#define ll long long

using namespace std;    
const int MAX = 100001;
queue<pair<int,ll>>q;
int visited[MAX] = {0};
int n,k;

int bfs(int v){
    visited[v] = 1;
    q.push({v,0});
    while(!q.empty()){
        int x = q.front().first;
        ll cnt = q.front().second;
        q.pop();

        if(2*x < MAX && !visited[2*x]){
            q.push({2*x,cnt});
            visited[2*x] = 1;
        }
        if(x-1>=0 && !visited[x-1]){
            q.push({x-1,cnt+1});
            visited[x-1] = 1;
        }        
        if(x+1 < MAX &&!visited[x+1]){
            q.push({x+1,cnt+1});
            visited[x+1] = 1;
        }

        if(x == k)
            return cnt;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    
    cout << bfs(n);
    return 0;
}