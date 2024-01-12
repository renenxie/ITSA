//
//  main.c
//  prog_3
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int intput[2]={0};
    scanf("%d %d",&intput[0] , &intput[1]);
    int tot;
    tot = intput[0]*intput[0]+intput[1]*intput[1];
    if(10000>=tot)
        printf("inside\n");
    else
        printf("outside\n");
    return 0;
}
