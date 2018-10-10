#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int A[100]={0};
    scanf("%s",s);
    for(int i=0; i<strlen(s);i++)
        A[s[i]]++;
    for(int i='A';i<='Z';i++){
        if(A[i]>0)
            printf("%c %d\n",i,A[i]);
    }
}
