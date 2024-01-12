//
//  main.c
//  prog_ar19
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input;
    int A=0;
    int B=0;
    while(scanf("%d",&input)!=-1){
        
        for(int i=1 ; i<=1000 ; i++){
            if(input%(i*i)==0)
                B=i;
            if(i>input/2)
                break;
        }
        A= input/(B*B);
        printf("%d = %d*%d^2\n",input,A,B);
    }
    return 0;
}
