#include <stdio.h>

int main() {
    char ch;
    while(scanf("%c",&ch)!=EOF){
    char letter;

    if(ch == '\n' || ch == ' ' || ch == '\t') {
            continue;
        }

    int num = ch - 'A' + 1;
    int height = num*2;

    if (num == 1)
    {
        printf(" A\n");
        printf("A A\n");
        continue;
    }
    
    else{
    for (int j = 0; j < height-1; j++)
    {
        printf(" ");
    }
    printf("A\n");    //第一行

    for (int i = 1; i < num ; i++)    //作出上层三角形
    {
        for (int j = 0; j < height - 1-i; j++)
        {
            printf(" ");    //前导空格
        }
        for (letter = 'A'; letter < 'A'+i+1; letter++)
        {
            printf("%c",letter);    //左半+中间
        }
        for (letter = i-1+'A'; letter >= 'A'; letter--)
        {
            printf("%c",letter);    //右半
        }
        printf("\n");
    }

    for (int i = 0; i < num-1; i++)
    {
        printf(" ");
    }
    printf("A");
    for (int i = 0; i < height-1; i++)
    {
        printf(" ");
    }
    printf("A\n");

    for (int i = 1; i < num; i++)
    {
        for (int j = 0; j < num - 1-i; j++)
        {
            printf(" ");    //前导空格
        }
        for (letter = 'A'; letter < 'A'+i+1; letter++)
        {
            printf("%c",letter);    //左半+中间
        }
        for (letter = i-1+'A'; letter >= 'A'; letter--)
        {
            printf("%c",letter);    //右半
        }
        for (int j = height-i*2-1; j > 0; j--)
        {
            printf(" ");
        }
        for (letter = 'A'; letter < 'A'+i+1; letter++)
        {
            printf("%c",letter);    //左半+中间
        }
        for (letter = i-1+'A'; letter >= 'A'; letter--)
        {
            printf("%c",letter);    //右半
        }
        printf("\n");
    }
    }
}
    return 0;
}