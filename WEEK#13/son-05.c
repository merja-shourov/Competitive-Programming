/**
 * Question :C Program to read an array from user and an index and then delete the element in that index of array
?
 *
 * Sample Input :
 *   Enter array size: 5
 *   Enter array's value: 2 4 6 8 10
 *   Enter array index (for delete value): 3
 *
 * Sample Output:
 *   final array: 2 4 6 10
 */

#include <stdio.h>

int main()
{
     int index, i, size;
     printf("Enter array size: ");
     scanf("%d", &size);
     int arr[size];
     printf("Enter array's value: ");
     for (i = 0; i < size; i++)
     {
          scanf("%d", &arr[i]);
     }
     printf("Enter array index (for delete value ): ");
     scanf("%d", &index);

     for (i = index; i < (size - 1); i++)
     {
          arr[i] = arr[i+1];
     }
     arr[size - 1];

     for (i = 0; i < (size-1); i++)
     {
          printf("%d ", arr[i]);
     }

     return 0;
}