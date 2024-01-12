//
//  main.c
//  prog_37
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>

int main() {
    // 定義變數
    int dice[4];

    // 輸入四顆骰子的點數
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &dice[i]);
    }

    // 排序骰子點數，方便後續判斷
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3 - i; ++j) {
            if (dice[j] > dice[j + 1]) {
                int temp = dice[j];
                dice[j] = dice[j + 1];
                dice[j + 1] = temp;
            }
        }
    }

    // 判斷結果
    if (dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[3]) {
        // 通殺
        printf("WIN\n");
    } else if ((dice[0] == dice[1] && dice[1] == dice[2]) || (dice[1] == dice[2] && dice[2] == dice[3])) {
        // 三顆點數相同
        printf("R\n");
    } else if (dice[0] == dice[1] && dice[2] == dice[3]) {
        // 可計算點數
        printf("%d\n", dice[0] + dice[2]);
    } else {
        // 其他情況為無意義
        printf("R\n");
    }

    return 0;
}
