//
//  main.c
//  prog_35
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>
#include <stdlib.h>

/* Qsort */
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int amount, t, m, k, prize[120], budget;

    scanf("%d", &amount);

    for(int i = 0; i < amount; i++){
        budget = 0;
        scanf("%d %d %d", &t, &m, &k);

        for(int j = 0; j < 100; j++)
            prize[j] = 0;
        // 輸入禮物價格
        for(int j = 0; j < k; j++)
            scanf(" %d", &prize[j]);

        qsort( prize, k, sizeof(int), compare );
        
        for(int j = 0; j < m; j++)
            budget += prize[j];

        if(budget > t)
            printf("Impossible\n");
        else
            printf("%d\n", budget);
    }

    return 0;
}
