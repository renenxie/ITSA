//
//  main.c
//  prog_24
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float rate;
    int n;
    float input_money;
    float output=0;
    scanf("%f",&rate);
    scanf("%d",&n);
    scanf("%f",&input_money);
    for(int i=0 ; i<n ; i++){
        output+=input_money;
        output*=(1+rate);
    }
    printf("%.0f\n",output);
    return 0;
}
