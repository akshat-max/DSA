#include <iostream>
using namespace std;



long staircase(int n) {
    if (n == 1 || n==0) {
        return 1;
    }
    else if (n == 2)
            return 2;
	else
    
    	return staircase(n-1)+staircase(n-2) + staircase(n-3);
    }

int main()
{
	int n;
	cin >> n;
	cout << staircase(n);
}/*long helper(int n,int *ans){
    if(n==1||n==0){
        return 1;
    }
     else if (n == 2)
            return 2;
	
    if(ans[n]!=-1){
        return ans[n];
    }
    int x= helper(n-1,ans)+helper(n-2,ans) + helper(n-3,ans);
    ans[n] = x;
    return x;
}

long staircase(int n) {
	int *ans = new int[n+1];
    for(int i=0; i<=n; i++){
        ans[i]=-1;
    }
    return helper(n,ans);
}*/