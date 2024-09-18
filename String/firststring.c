// Using puts and gets

// #include<stdio.h>
// int main()
// {
// char s[27];
// printf("Enter the string:");
// gets(s);
// puts(s);
// // printf("This string is %s",s);
// }


// Leanth calculating

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  char *str;
//  printf("Enter any string:");
//  scanf("%s",str);
//  int a = strlen(str);
// printf("The leanth of the string is %d",a);
//  return 0;
// }


// copy the string str to str2

// #include<stdio.h>
// #include <string.h>
// int main()
// {
//  char *str="This is my name pranab";
//  char str2[18];
//  strcpy(str2,str);
//  printf("the str2 string is %s ",str2);
//  return 0;
// }

// join two string Using Strcat funsation

// #include<stdio.h>
// #include <string.h>
// int main()
// {
//  char s1[12]="My name is ";
//  char *s2="Pranab";
//  strcat(s1,s2);
//  printf("%s",s1);
//  return 0;
// }


// the compair of two string

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  char s1[12]="Pranai";
//  char *s2="Praoab";
//  int val = strcmp(s1,s2);
//  printf("The value of s1 is %d",val);
//  return 0;
// }


// build your own length function

// int length(char str[])
// {
//     int i = 0, len = 0;
//     while (str[i++] != '\0')
//     {
//         len++;
//     }
//     return len;
// }
// int main()
// {
//  printf("%d", length("Pranab"));
//  return 0;
// }



// build your own copy function

// #include<stdio.h>
// #include <string.h>

// void myStrCpy(char destination[], const char source[])
// {
//     int i=0;
//     while (source[i] != '\0')
//     {
//         destination[i] = source[i];
//         i++;
//     }
//     destination[i] = '\0';
// }
// #include<stdio.h>
// int main()  
// {
// myStrCpy(str, "My name is Argha");
// printf("%s", str);
//  return 0;
// }



// build your own reverse function
// #include<stdio.h>
// void reverseString(char str[])
// {
//     int len = 0, i = 0;
//     while (str[i++] != '\0')
//     {
//         len++;
//     }
//     int high = len-1, low = 0;
//     char temp;
//     while (low <= high)
//     {
//         temp = str[low];
//         str[low] = str[high];
//         str[high] = temp;
//         low++;
//         high--;
//     }
// }

// int main()
// {
//     char str[] = "arghamao";
//     printf("Before reversing: %s\n", str);
//     reverseString(str);
//     printf("After reversing: %s", str);
//     return 0;
// }
