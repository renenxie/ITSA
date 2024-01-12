//
//  main.c
//  prog_17
//
//  Created by 謝仁恩 on 2024/1/11.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];

    // 提示使用者輸入句子
    //printf("請輸入一個英文句子： ");
    fgets(sentence, sizeof(sentence), stdin);

    // 轉換為小寫
    for (int i = 0; sentence[i]; ++i) {
        sentence[i] = tolower(sentence[i]);
    }

    // 輸出結果
    printf("%s", sentence);

    return 0;
}



