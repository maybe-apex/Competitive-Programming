#include <stdio.h>

void compute(int arr[], int size, int *min, int *max)
{
    *min = *arr;
    *max = *arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
            *max = *(arr + i);
        if (*(arr + i) < *min)
            *min = *(arr + i);
    }
}
int main()
{
    // int var = 34;
    // printf("The value of var = %d \n", var);
    // printf("The address of var = %d \n", &var);

    // int *ptr = 8939579;
    // printf("%d \n", ptr);
    // printf("%d \n", &ptr);

    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 100};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // printf("%f ", *ptr2);
    // printf("%d ", ptr2 - ptr1);

    // int a;
    // char *x;
    // x = (char *)&a;
    // a = 512;
    // x[0] = 1;
    // x[0] = 2;
    // printf("%d \n", a);

    // char *ptr = "GeeksQuiz";
    // printf("%c\n", *&*&*ptr);

    // int a = 12;
    // void *ptr = (int *)&a;
    // printf("%d", *(int *)ptr);
    // getchar();

    int arr[5], size, min, max;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
        scanf("%d", arr + i);
    compute(arr, size, &min, &max);
    printf("min = %d max = %d", min, max);
    return 0;
}