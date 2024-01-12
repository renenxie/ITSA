//
//  main.c
//  prog_st02
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str[10000];
    int len, number;
    while(scanf("%s",str)!=EOF){
        
        len = strlen(str);
        number = 0;
        for(int i=0 ; i<len ; i++){
            number = number*26 + (str[i] - 'A'+1); // Each character run 26 rounds to next one
        }
        printf("%d\n", number);
    }
    return 0;
}
