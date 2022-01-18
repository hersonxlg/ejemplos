#include <stdio.h>
#include <string.h>

int main(int argc, char** argv ){
    while(1) {
        char inputc[50];
        setlocale(LC_ALL,"");
        memset(inputc,'\0',50);
        scanf("%s",inputc);
        printf("%s",inputc);
    }
    return 0;
}
