include <stdio.h>
    void main()
    {

        long int ARR[10], ODD[10], EVEN[10];
        int i, j = 0, k = 0, n;

        printf("Enter the size of array  ");
        scanf("%d", &n);

        printf("Enter the elements of the array ");
        for (i = 0; i < n; i++)
        {
            scanf("%ld", &ARR[i]);
            fflush(stdin);
        }

        for (i = 0; i < n; i++)
        {
            if (ARR[i] % 2 == 0)
            {
                EVEN[j] = ARR[i];
                j++;
            }
            else
            {
                ODD[k] = ARR[i];
                k++;
            }
        }

        printf("The elements of ODD are");
        for (i = 0; i < k; i++)
        {
            printf("%d\n", ODD[i]);
        }

        printf("The elements of EVEN are ");
        for (i = 0; i < j; i++)
        {
            printf("%d\n", EVEN[i]);
        }

    }
Footer

