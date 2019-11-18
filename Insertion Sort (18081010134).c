Insertion sort ascending order */
 
#include <stdio.h>
 
int main()
{
  int n, array[1000], c, d, t;
 
  printf("Masukkan jumlah element");
  scanf("%d", &n);
 
  printf("Masukkan %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d-1] > array[d]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
 
  printf("Data setelah dilakukan insertion sort:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
