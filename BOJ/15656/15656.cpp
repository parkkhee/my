#include <iostream>
#include <algorithm>

#define MAX 9
using namespace std;

int n;
int m;
int inp[MAX];
//bool visited[MAX];
int lists[MAX];


void dfn(int x) {


    if (x == m) {


        for (int i = 0; i < m; i++) {
            cout << lists[i] << " ";
        }
        cout << "\n";
        return;

    }




    for (int i = 0; i < n; i++) {
 
            lists[x] = inp[i];
            dfn(x + 1);
            
                    
    }
}


int main() {
    cin >> n >> m;

    for (int x = 0; x < n; x++) {
        cin >> inp[x];
    }

    sort(inp, inp + n);
    dfn(0);
}
