#include <stdio.h>

float median(int a[], int, int);

int main()

{

    int a[1000], n, i, t, j;
    float Q3;
    printf( "Enter your scope of number : ");

    scanf_s("%d", &n);

    printf("Enter your namber : ");

    for (i = 0; i < n; i++)

        scanf_s("%d", &a[i]);


    for (i = 0; i < n; i++)

        for (j = 0; j < n; j++)

            if (a[i] < a[j])

            {

                t = a[i];

                a[i] = a[j];

                a[j] = t;

            }

    if (n % 2 == 0)

        Q3 = median(a, n / 2, n - 1);

    else

        Q3 = median(a, n / 2 + 1, n - 1);

    printf("Q3 is : %.3f ", Q3);

    return 0;

}



float median(int a[], int start, int end)

{

    
    float med,G,GT;
    int T;
    int len = end - start + 1;
    G = (3 * (end + 2.0)) / 4.0;
    T= (3 * (end + 2)) / 4;
    GT = G - T;
    if ((end+1) % 2 == 0)

    {

        med = (a[T-1])+((a[T] - a[T-1]) * GT);
        printf("%f\n", GT);
    }

    else

    {

        med = (a[start + len / 2] / 1.0);

    }

    return med;

}