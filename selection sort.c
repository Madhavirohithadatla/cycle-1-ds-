#include <stdio.h>
void selection_sort();
int a[30], n;
void main()
{
    int i;
    printf("******Selection sort******");
    printf("\nEnter size of an elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter elements:");
        scanf("%d", &a[i]);
    }

    selection_sort();
    printf("\nAfter sorting are:");
    for(i=0; i<n; i++)
        printf("\n%d", a[i]);
    getch();
}
void selection_sort()
{
    int i, j, min, temp;
    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
