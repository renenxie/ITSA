//
//  main.c
//  prog_20
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int line;
    long long int input;
    long long int output=0;
    scanf("%d",&line);
    for(int i=0 ; i<line ; i++){
        scanf("%lld",&input);
        output+=input;
    }
    printf("%lld\n",output);
    return 0;
}
