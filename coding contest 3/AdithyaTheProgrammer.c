#include <stdio.h>
#include <string.h>
int main(){
    char message[1000];
    int add;
    gets(message);
    scanf("%d",&add);
    for(int i=0; i<strlen(message); i++){
        if(message[i]>='a'&&message[i]<='z'){
            int b = (message[i]-'a'+add)%26;
            message[i]=b+'a';
        }
        if(message[i]>='A'&&message[i]<='Z'){
            int b = (message[i]-'A'+add)%26;
            message[i]=b+'A';
        }
    }
    printf("%s",message);

}
