#include <stdio.h>

int n;
int k;
int A[100000];

int ok(int x){
    int work;
    int i = 0;
    //assigning as much work as possible from a_1 to a_n
    for(int j = 0;j < k;j++){
        work = 0;
        while(i < n && work + A[i] <= x)work += A[i], i++;
    }
    return i == n; //if all the work is done
}
int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  int mid;
  lb = 0, ub = 1000000000;//inf
  while(ub - lb > 1){
      mid = (lb + ub)/2;
      if(ok(mid))ub = mid;
      else lb = mid;
  }

  printf("%d", ub);
  return 0;
}
