#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n = 0;
    printf("Masukkan angka untuk ukuran piramid %d", n);
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + (i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}


