//
//  main.c
//  prog_26
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int n;
    int input_change[20]={0};
    scanf("%d",&n);
    int *num;
    num = malloc(n*sizeof(int));
    
    for(int i=0 ; i<n ; i++){
        scanf("%d",&num[i]);
    }
    /*
    for(int i=0 ; i<n ; i++){
        printf("%d ",num[i]);
    }
     */
    for(int i=0 ; i<n ; i++){
        int temp = num[i];
        while(temp!=0){
            input_change[i]+= temp%10;
            temp/=10;
        }
    }
    /*
    for(int i=0 ; i<n ; i++){
        printf("%d ",input_change[i]);
    }
     */
    int min=input_change[0];
    int min_num=0;
    int output_sort[20]={0};
    int flag[20]={0};
    for(int j=0 ; j<n ; j++){
        
        for(int i=0 ; i<n ; i++){
            
            if(input_change[i]<min && flag[i]!=1){
                min=input_change[i];
                min_num = i;
            }
            else if (input_change[i]==min && flag[i]!=1){
                if(num[i] < num[min_num]){
                    min=input_change[i];
                    min_num = i;
                }
            }
                
        }
        output_sort[j] = num[min_num];
        min = 1000000;
        flag[min_num]=1;
    }
    
    for(int i=0 ; i<n ; i++){
        printf("%d",output_sort[i]);
        if(i<n-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
