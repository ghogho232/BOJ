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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[100001];
    int n, k, ans = -100000;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        arr[i] = arr[i - 1] + a;
    }
    for (int i = k; i <= n; i++) {
        ans = max(ans, arr[i] - arr[i - k]);
    }
    cout << ans;
    return 0;
}