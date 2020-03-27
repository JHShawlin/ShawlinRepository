#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<stack>
#include<algorithm>
#include<set>
#include<map>
#include<deque> 
using namespace std;
#define INF 0x3f3f3f3f
typedef long long LL;
typedef pair<int,int> ppp;
const int MAXN = 1e5+10; 
//已知前序遍历和中序遍历，求此树 
int s1[MAXN],s2[MAXN];
void BST(int a,int b,int n){
	if (n == 1){
		printf("%d",s1[a]);
		return ;
	}
	if (n <= 0) return ;
	int i;
	for (i=0 ; s1[a]!=s2[b+i] ; i++);
	BST(a+1,b,i);
	BST(a+i+1,b+i+1,n-i-1);
	printf("%d",s1[a]);
} 
int main(){
	return 0;
}
