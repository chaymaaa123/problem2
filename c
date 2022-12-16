#include <stdio.h>

int main() {
  int t;  
  int n;  
  int a[100];  
  int i;  

  
  scanf("%d", &t);

  
  for (int tc = 0; tc < t; ++tc) {
   
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
      scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n; ++i) {
      if (a[i] != a[0]) {
        printf("%d\n", i + 1);  
      }
    }
  }

  return 0;
}
