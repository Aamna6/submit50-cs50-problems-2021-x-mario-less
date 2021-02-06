#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int h, j, dot, hash, i;

  do
  {
    h = get_int ("height \n");
  }
  while (h < 0 || h > 8);

       for (i = 0; i < h; i++)
{

  for (dot = 0; dot < h-i; dot++)

  {
    printf (".");
  }

   for (j = 0; j < i +1; j++)
  {
    printf("#");
  }

  printf ("...#");

  for (hash = 0; hash < i; hash++)
  {
    printf("#");
  }

  printf("\n");
}

}