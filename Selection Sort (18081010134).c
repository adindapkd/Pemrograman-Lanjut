#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, position, swap;
 
  printf("Masukkan Jumlah element\n");
  scanf("%d", &n);
 
  printf("Masukkan %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0; c < (n - 1); c++)
  {
    position = c;
   
    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      swap = array[c];
      array[c] = array[position];
      array[position] = swap;
    }
  }
 
  printf("Data setelah dilakukan selection sort :\n");
 
  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);
 
  return 0;
}
