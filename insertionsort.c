#include<stdio.h>
int main()
{
    int i, n, a[10];
    printf("*******INSERTION SORT********");
    printf("\nEnter the number of elements :: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the element are :: ");
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
void InsertionSort(int a[], int n)
{
    int j, p;
    int tmp;
    for(p = 1; p < n; p++)
    {
        tmp = a[p];
        for(j = p; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
    }
}
