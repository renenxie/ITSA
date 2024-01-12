//
//  main.c
//  prog_ar27
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int size=0;
    int number=0;
    int add=0;
    int total=0;
    scanf("%d",&size);
    for(int i=0 ; i<size-1 ; i++){
        scanf("%d",&number);
        add+=number;
        total+=(i+1);
    }
    total+=size;
    printf("%d\n",total-add);
    return 0;
}
