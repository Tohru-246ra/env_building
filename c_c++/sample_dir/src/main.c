#include <stdio.h>
#include "../include/test_func.h" // .h は C言語のヘッダファイルにつく拡張子

/**
* @brief     main関数
* @return    int [0: 成功, -1:失敗]
*/
int main(void)
{
    int a = 10;
    int b = 5;

    int result = sum(a, b);

    printf("%d + %d = result: %d\n", a, b, result );
    return 0;
}