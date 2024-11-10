#include<Stdio.h>
#include<string.h>
int main(){
    int vow=0;
    int cons=0;
    char str[200];
    printf("Enter a string:");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch>='a'&& ch<='z'){
            if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u')
                vow++;
            else
                cons++;
        }
    }
    printf("\nVowels:%d",vow);
    printf("\nConsonanats:%d",cons);
    return 0;
}