#include "sort.h"

/**
 * bubble_sort - trie les éléments du tableau de la plus petite valeur à la plus grande valeur
 * @arr : Le tableau
 * @n : La taille du tableau
 */
void bubble_sort(int *arr, size_t n)
{
    size_t i, j, temp = 0;

    if (n < 2)
        return;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1] && arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                print_array(arr, n);
            }
        }
    }
}
