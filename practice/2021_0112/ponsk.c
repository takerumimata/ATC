#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
    for (int i = 1; i < argc; i++) {
        char *str1 = argv[i];
        char str2[] = "1";
        if(strstr(str1,"1")!=NULL){
            printf("含まれる\n");
        }
        else{
            printf("含まれない\n");
        }
    }
    return 0;
}
