#include <iostream>
#include <algorithm>


#define MAX 9
using namespace std;


int n, m;
int lists[MAX];
int num[MAX];


void dfs(int a) {

	if (a == m) {
		for (int i = 0; i < m-1; i++) {
			if (lists[i] > lists[i+1]) {
				return;
			}
		}
		

		for (int i = 0; i < m; i++)
			cout << lists[i]<<" ";
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		
		lists[a] = num[i];
		dfs(a + 1);

	}


}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n);

	dfs(0);
}