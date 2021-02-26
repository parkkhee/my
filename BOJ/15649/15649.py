#include <iostrea>
using namespace std;


N=int(input())
M=int(input())


if(M>1 and M<N and N<8)or(M==N or M==1 or N==8):
    for i in range(N):
        i+=1
        for j in range(M):
            j+=1
            print(j)
