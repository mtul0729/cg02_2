#include <stdio.h>
#include <string.h>
int main() {
    char a[11];
    void printsub(char *,unsigned long,int);
    scanf("%s",a);
    unsigned long len= strlen(a);
    for (int i = 1; i <= len; ++i) {
        printsub(a,len,i);
    }
    return 0;
}
void printsub(char * a,unsigned long len,int i){//i为子集元素个数
    for (int j = 0; j < len+1-i; ++j) {
        for (int k = j; k < j+i; ++k) {
            printf("%c",a[k]);
        }
        printf("\n");
    }
}
