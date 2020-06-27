#include <stdio.h>

int n;
int k;
int A[100000];

int need_bags(int x){ //x: size of each bag
    int res = 0;
    for(int i = 0; i < n; i++){
        res += (A[i] + x - 1)/x; //cell(A[i]/x)
    }
    return res;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
 
 int mid;
 lb = 0, ub = 1000000000; //inf
 while(ub - lb > 1){
     mid = (ub + lb)/2;
     if(need_bags(mid) <= k)ub = mid;
     else lb = mid;
 } 
 
 printf("%d", ub);

  return 0;
}
