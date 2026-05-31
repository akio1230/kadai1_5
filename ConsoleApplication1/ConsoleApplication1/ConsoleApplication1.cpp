// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include "calc.h"

int main()
{
    bool loop = true;
    do
    {
        int Num;
        int Num1;
        char ope;
        int res = 0;
        bool error = false;

        printf("演算子 (+, -, *, /) を入力してください\n");
        scanf_s("%c", &ope);

        printf("数値を一個ずつ入力してください\n");
        scanf_s("%d %d", &Num, &Num1);

        switch (ope)
        {
        case '+':
            res = SUM(Num, Num1);
            break;
        case '-':
            res = SUB(Num, Num1);
            break;
        case '*':
            res = MUL(Num, Num1);
            break;
        case '/':
            res = DIV(Num, Num1);
            error = (Num1 == 0);
            break;
        default:
            printf("無効な演算子です\n");
            error = true;
            break;
        }

        if (error)
        {
            continue;
        }

        printf("答えは %d です\n", res);

        char c;
        printf("続ける場合は y を入力してください:\n");
        scanf_s(" %c ", &c);
        loop = (c == 'y' || c == 'Y');

    } while (loop);

    return 0;
  
}

