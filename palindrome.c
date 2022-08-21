#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i, len, flag;
    flag=0;

    printf("\n Please enter any string: ");
    gets(str);

    len = strlen(str);

    for(i=0;i<len;i++) {
        if(str[i] != str[len-i-1])
        {
            //printf("%c", str[i]);
            //printf("%c", str[len-i-1]);
            flag = 1;
            break;
        }
    }
    if(flag==0) {
        printf("\n %s is a Palindrome String\n", str);
    }
    else {
        printf("\n %s is not a Palindrom String\n", str);
    }

    return 0;
}
