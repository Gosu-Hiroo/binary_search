#include <stdio.h>

int n;
int k;
int A[100000];

int make_spears(int x){
    int res = 0;
    for(int i = 0; i < n; i++){
        res += A[i] / x;
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
  lb = 0, ub = 1000000001;//inf
  while(ub - lb > 1){
      mid = (ub + lb)/2;
      if(make_spears(mid) < k)ub = mid;
      else lb = mid;
  } 

  printf("%d", lb);

  return 0;
}
