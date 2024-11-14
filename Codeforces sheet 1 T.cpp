#include <stdio.h>
int main() {
    int A, B, C;
    int temp;
    scanf("%d %d %d", &A, &B, &C);
    int originalOrder[3] = {A, B, C};
    int sorted[3] = {A, B, C};
        for (int i = 0; i < 2; i++)
        {
        for (int j = 0; j < 2 - i; j++)
        {
            if (sorted[j] > sorted[j + 1])
            {
                temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        printf("%d\n", sorted[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", originalOrder[i]);
    }
    return 0;
}
