//
//  main.c
//  prog_23
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int money=0;
    int a=0;
    int b=0;
    int c=0;
    int cost=0;
    int output_1 = 0;
    int output_5 = 0;
    int output_50 = 0;
    int remain=0;
    
    
    scanf("%d,%d,%d,%d",&money , &a ,&b , &c);
    cost = a*15 + b*20 + c*30;
    if(money<cost)
        printf("0\n");
    else{
        
        remain = money-cost;
        //printf("remain %d\n",remain);
        output_50 = remain/50;
        remain = remain-output_50*50;
        output_5 = remain/5;
        remain = remain - output_5*5;
        output_1 = remain;
        printf("%d,%d,%d\n",output_1 , output_5 , output_50);
    }
    
    return 0;
}
