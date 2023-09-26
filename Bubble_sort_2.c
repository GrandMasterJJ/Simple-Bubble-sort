#include<stdio.h>

void Swap();
void Bubble_Sort();

int main()
{
    int array_1[] = {10,9,8,7,6,5,4,3,2,1};
    int array_1_size = sizeof(array_1)/sizeof(array_1[0]);

    Bubble_Sort(array_1,array_1_size);
    

    for (int i = 0; i < array_1_size; i++)
    {
        printf("%d ", array_1[i]);
    }

    return 0;
}

void Swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;

}

void Bubble_Sort(int array_1[], int array_1_size)
{

    for(int j = 1; j < array_1_size; j++)
    {
        
        //printf("Round %d : A", j);
        for (int i = 0; i < array_1_size - j; i++)
        {
            if (array_1[i] > array_1[i+1])
            {
                Swap(&array_1[i], &array_1[i+1]);
            }
        }
/*
    for (int i = 0; i < array_1_size; i++)
    {
        printf("%d ", array_1[i]);
    }
    printf("\n");
*/
    }
    
}