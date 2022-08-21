#include<stdio.h>
int main() {
    int i,j,rows;
    char ch;

    printf("Enter a symbol for the plus pattern=");
    scanf("%c",&ch);

    printf("Enter plus pattern rows=");
    scanf("%d",&rows);

    printf("Plus star pattern\n");
    for(i=1;i<=rows;i++) {
        if(i==((rows/2)+1)){
            for(j=1;j<=rows;j++) {
                printf("%c",ch);
            }
        }
        else {
            for(j=1;j<=rows/2;j++){
                printf(" ");
            }
            printf("%c",ch);
        }
        printf("\n");

        }
    return 0;
}
