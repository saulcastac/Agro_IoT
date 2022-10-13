#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
int main(){
    char c;
    char may;
    int n;
    int m;
    do{
        n= read(STDIN_FILENO,&c,1);
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
            may=c;
            write(STDOUT_FILENO,"1",1);
        }
        may=toupper(c);
        write(STDOUT_FILENO,&may,1);

    }while(n!=0);
    return 0;
}