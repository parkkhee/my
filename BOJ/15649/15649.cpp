#include <iostream>
using namespace std;
#define MAX 8


int n, m;
bool visited[MAX];
int lists[MAX];


void dfs(int x) {
	int i;

	if (m == x) {
		for (i = 0; i < m; i++) {
			cout << lists[i];
			cout << " ";
		}
		cout << "\n";
	}


	for (i = 0; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			lists[x] = i + 1;
			dfs(x + 1);
			visited[i] = false;

		}
	}


}



int main() {
	cin >> n >> m;

	dfs(0);

}