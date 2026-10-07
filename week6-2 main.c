#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 윤년 판별 함수
int isleapyear(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}

void exerc()
{
    int month;
    int days;
    int year;

    printf("월 입력(1~12) : ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12)
    {
        switch (month)
        {
        case 2:
            printf("연도를 입력하세요 : ");
            scanf("%d", &year);

            if (isleapyear(year) == 1)
                days = 29;
            else
                days = 28;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;

        default:
            days = 31;
            break;
        }

        printf("%d월은 %d일까지 있습니다.\n", month, days);
    }
    else
    {
        printf("1부터 12사이의 값을 입력하세요.\n");
    }
}

int main()
{
    exerc();

    return 0;
}