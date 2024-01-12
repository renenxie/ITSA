//
//  main.c
//  prog_5
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input;
    int input_init=0;
    int mod=0;
    scanf("%d" , &input);
    input_init = input;
    int output[8]={0};
    for(int i=7 ; i>=0 ; i--){
     
            mod = input%2;
            printf("mod %d",mod);
            output[i] = mod;
            input = input/2;
            printf("input %d\n",input);
    }
    //負數反轉+1
    if(input_init<0)
        
    for (int i=0; i<8; i++) {
        printf("%d",output[i]);
    }
    return 0;
}
