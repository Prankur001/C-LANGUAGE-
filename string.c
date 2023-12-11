//To perform string functions using String library.
#include <stdio.h>
#include <String.h>
void main()
{
    char a[]="abcde";
    printf("%d\n",strlen(a));
    char b[50];
    strcpy(b,a);
    printf("%d\n",strlen(b));
    printf("%d\n",strcmp(a,b));
    printf("%s\n",strrev(a));
    printf("%s\n",strupr(a));
    printf("%s\n",strlwr(b));
    printf("%s\n",strcat(b,a));
//To perform string functions using character array.
    char str1[100], str2[100], concat[200], reverse[200];
    int len1 = 0, len2 = 0, i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Calculate lengths of the strings
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // String comparison
    for (i = 0; i < len1 && i < len2; i++) {
        if (str1[i] != str2[i]) {
            printf("The strings are not equal.\n");
            break;
        }
    }
    if (i == len1 && i == len2) {
        printf("The strings are equal.\n");
    } else if (i == len1) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    // String concatenation
    for (i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }
    for (j = 0; j < len2; j++, i++) {
        concat[i] = str2[j];
    }
    concat[i] = '\0';
    printf("The concatenated string is: %s\n", concat);

    // String reversal
    for (i = len1 + len2 - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = concat[i];
    }
    reverse[j] = '\0';
    printf("The reversed string is: %s\n", reverse);

    // Length comparison
    if (len1 == len2) {
        printf("The strings are of equal length.\n");
    } else if (len1 < len2) {
        printf("The first string is shorter than the second string.\n");
    } else {
        printf("The first string is longer than the second string.\n");
    }

    return 0;
}