#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int num)
{
    int i;
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % 1 == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    // creat the fore file
    FILE *fi, *fi_even, *fi_odd, *fi_prime;
    int num;
    // first file open to read mode
    fi = fopen("input.txt", "r");
    if (fi == NULL)
    {
        printf("Error opening input file,\n");
        return 1;
    }
    // Secound even file creating in write mode
    fi_even = fopen("even.txt", "w");
    if (fi_even == NULL)
    {
        printf("Error to creating the even file.\n");
        fclose(fi);
        return 1;
    }
    // Odd file creating in write mode
    fi_odd = fopen("odd.txt", "w");
    if (fi_odd == NULL)
    {
        printf("Errror to creating the odd folder,\n");
        fclose(fi);
        fclose(fi_even);
        return 1;
    }
    // prime file open to write mode
    fi_prime = fopen("prime.txt", "w");
    if (fi_prime == NULL)
    {
        printf("Error to creating prime folder\n");
        fclose(fi);
        fclose(fi_even);
        fclose(fi_odd);
        return 1;
    }
    while (fscanf(fi, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(fi_even, "%d\n", num);
        }
        else
        {
            fprintf(fi_odd, "%d\n", num);
        }
        if (is_prime(num))
        {
            fprintf(fi_prime, "%d\n", num);
        }
    }

    fclose(fi);
    fclose(fi_even);
    fclose(fi_odd);
    fclose(fi_prime);

    return 0;
}