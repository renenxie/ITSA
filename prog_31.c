//
//  main.c
//  prog_31
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input;
    int seq[20]={0};
    while( scanf("%d",&input)!=-1){
        printf("##1\n");
        int i=0;
        int count=0;
        while (1) {
            if(scanf("%d",&input)=='\n')
                break;
            scanf("%d",&seq[i]);
            printf("##2\n");
            count++;
            i++;
            printf("%d",seq[i]);
        }
        printf("##3\n");
        for(int i=0 ; i<20 ; i++)
            printf("%d",seq[i]);
    }
    return 0;
}
