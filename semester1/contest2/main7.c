#include <stdio.h>

int main()
{
  int a;
  scanf ("%d", &a);
  int s = a, k = 1;
  while (s / 3 >= 1)
  {
    s = s/3;
    k++;
  }
  int m[1000];
  for (int i = 0; i < 1000; i++)
  m[i] =0;
  for (int i = 0; i < k; i++)
  {
    m[i] = a % 3;
    a = a/3;
  }
  int mist = 0;
  int y;
  while (1)
  {
    mist = 0;
    for (int i = 0; i < k - 1 ; i++)
    {
      y = i;
      while (m[y] == 1 && m[y+1] == 1)
        y ++;
      if (y - i > 0)
      {
        m[i] = -1;
        for (int j = i + 1; j <= y; j++ )
          m[j] = 0;
        m[y+1] = 1;
        mist++;
        if (i == k - 2 || y == k - 1)
          k++;
      }
      }

    if (mist == 0)
    {
      for (int i = 0; i < k; i++) 
        printf ("%d", m[k - i - 1]);
      return 0;
    }
  }
  return 0;
}
