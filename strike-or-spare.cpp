#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)5e5 + 10;
const int INF = (int)1e9;
const int MOD = (int)1e9 + 7;

void solve() {
	int n;
	scanf("%d", &n);
	printf("1 1");
	for (int i = 0; i < n / 2; ++i) {
		printf("0");
	}
	printf("\n");
}

int main() {
//	freopen("input.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while (t --> 0) {
		solve();
	}
	return 0;
}
