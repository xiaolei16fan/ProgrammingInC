#include <stdio.h>

int binary_search(int list[], int length, int item)
{
    int low = 0, high, mid, guess;

    high = length - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        guess = list[mid];
        if (guess == item)
            return mid;
        if (guess > item)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main(void)
{
   int arr[5] = {1, 3, 5, 7, 9};

   printf("Index: %i\n", binary_search(arr, 5, 9));
   printf("Index: %i\n", binary_search(arr, 5, -1));

   return 0;
}
