//
//  main.c
//  prog_21
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>
float input[15]={0};
int main(int argc, const char * argv[]) {
    scanf("%f %f %f %f %f %f %f %f %f %f",&input[0] , &input[1] , &input[2] , &input[3] , &input[4] , &input[5] , &input[6] , &input[7] , &input[8] , &input[9]);
    float max = input[0];
    float min = input[1];
    for(int i=0 ; i<10 ; i++){
        if(input[i]>max)
            max = input[i];
        if(input[i]<min)
            min = input[i];
            
    }
    printf("maximum:%.2f\n" , max);
    printf("minimum:%.2f\n",min);
}
