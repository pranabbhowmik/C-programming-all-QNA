// #include <stdio.h>
// struct Student
// {
//     char name[30];
//     int roll;
//     int age;
//     char gender;
// } std;

// int main()
// {
//     int n;
//     FILE *fp = fopen("record.txt", "rb+");
//     printf("Enter the number of students: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter the details of student %d:\n", i + 1);
//         printf("Enter Name: ");
//         fflush(stdin);
//         gets(std.name);
//         printf("Enter Roll Number: ");
//         fflush(stdin);
//         scanf("%d", &std.roll);
//         printf("Enter Age: ");
//         fflush(stdin);
//         scanf("%d", &std.age);
//         printf("Enter Gender(M/F): ");
//         fflush(stdin);
//         scanf("%c", &std.gender);
//         fwrite(&std, sizeof(std), 1, fp);
//     }

//     fclose(fp);
//     fp = fopen("record.txt", "rb+");
//     while (fread(&std, sizeof(std), 1, fp) == 1)
//     {
//         printf("\nDetails of the student with Roll Number %d:\n", std.roll);
//         printf("Name: %s\n", std.name);
//         printf("Age: %d\n", std.age);
//         printf("Gender: %c\n", std.gender);
//     }

//     fclose(fp);
//     return 0;
// }
#include<stdio.h>
void reverce(int arr[],int n);
void printarr(int arr[],int n);
int main(){
    int arr[]={3,5,7,9,28};
    reverce(arr,5);
    printarr(arr,5);
    return 0;

}
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
}
void reverce(int arr[], int n){
    for (int i = 0; i < n/2; i++)
    {
        int firstval = arr[i];
        int secoundval = arr[n-i-1];
        arr[i]= secoundval;
        arr[n-i-1]= firstval;

    }
    
}
