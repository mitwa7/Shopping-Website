#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("xyz.c","w");
    fprint(fp,"%s","50");
    fclose(fp);
    return 0;
}