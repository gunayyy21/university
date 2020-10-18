#include <stdio.h>
int main ()
{
  // takes n number of digits and returns them sorted
  
  // getting n
  int n; // number of digits
  printf("Please type number of digits that will be given : ");
  scanf("%d",&n);
  int numbers[n];
  for (int i = 0; i < n; i++)
  {
      printf("digit %d: ",i+1);
      scanf("%d",&numbers[i]);
  }
  int counter = 0;//it counts the number of changed elements in each loop
  // now is the time for sorting.I'll use Bubble Sort.
  int tmp;//temporary variable just for switching values
  while (0==0)
  {
        counter = 0;
        for (int i = 0; i < n -1; i++)
        {
            if (numbers[i] > numbers[i+1])
            {
                // numbers are out of order
                counter ++;
                tmp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = tmp;
            }
        }
        if (counter == 0)
        {
            break;
        }
  }
    // print numbers in array
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf(" < ");
        }
        printf("%d",numbers[i]);
    }
}
