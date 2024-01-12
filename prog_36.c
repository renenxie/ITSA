//
//  main.c
//  prog_36
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input;
    scanf("%d",&input);
    if(input%4==0 && (input%100!=0 || input%400==0 ) )
        printf("Bissextile Year\n");
    else
        printf("Common Year\n");
    return 0;
}
