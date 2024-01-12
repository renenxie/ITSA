//
//  main.c
//  prog_12
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>
int fun(int n){
    if(n==1 || n==0)
        return n+1;
    else
        return fun(n-1)+fun(n/2);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int input=0;
    scanf("%d",&input);
    printf("%d\n",fun(input));
    return 0;
}
