#include<stdio.h>
#include<string.h>
int main(){
    char a[200],t;
    gets(a);
    for (int i = 0; i < strlen(a)-1; i++){
        for (int j = 0; j < strlen(a)-i-1; j++){
            if (a[j]!='+'&&a[j]>a[j+2]){
                t = a[j];
                a[j] = a[j+2];
                a[j+2] = t;
            } 
        }  
    }
    printf("%s\n",a);
    return 0;
}