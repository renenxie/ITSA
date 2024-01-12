//
//  main.c
//  prog_mm07
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,amount;
    while (scanf("%d %d",&a,&b)!=-1) {
        amount=0;
        for(int i=0 ; i<6 ; i++){
            if( (b-a)%100==0 )
                amount++;
            b = b/10;
        }
        printf("%d\n", amount);
    }
    return 0;
}
