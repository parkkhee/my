#include <iostream>
#define MAX 8

using namespace std;

int n, m;
bool visited[MAX];
int lists[MAX];


void dfn(int a) {
	int i;

	if (a == m) {
		for (i = 0; i < m; i++) {
			cout << lists[i] << " ";
		}
		cout << "\n";
	}

	for (i = 0; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			lists[a] = i + 1;
			dfn(a + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;

	dfn(0);
}
