//
//  main.c
//  prog_6
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int input=0;
    scanf("%d",&input);
    if(input==3 || input==4 ||input==5)
        printf("Spring\n");
    else if (input==6 || input==7 ||input==8)
        printf("Summer\n");
    else if (input==9 || input==10 ||input==11)
        printf("Autumn\n");
    else
        printf("Winter\n");
    return 0;
}
