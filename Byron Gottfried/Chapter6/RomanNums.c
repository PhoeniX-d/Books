#include<stdio.h>
#include<stdlib.h>
void ConvertRomanI(int);
void ConvertRomanII(int);

int main()
{
    int i = 0, iNo = 0;
    printf("Enter number\n");
    scanf("%d", &iNo);
    iNo = (iNo < 0) ? -iNo : iNo;
    while(iNo != 0)
    {
        while(iNo != 0)
        {
            i = iNo % 10;
            iNo = iNo / 10;
            if(iNo != 0)
            {
                ConvertRomanII(iNo % 10);
                iNo = iNo / 10;
            }
            ConvertRomanI(i);
            iNo = iNo / 10;
        }
        printf("\nEnter number\n");
        scanf("%d", &iNo);
        iNo = (iNo < 0) ? -iNo : iNo;
        if(iNo == 100)
        {
            printf("C\n");
            break;
        }
    }
    return 0;
}

void ConvertRomanI(int iNo)
    {
        switch (iNo)
        {
            case 1:
                printf("I\n");break;
            case 2:
                printf ("II\n");break;
            case 3:
                printf("III\n");break;
            case 4:
                printf("IV\n");break;
            case 5:
                printf("V\n");break;
            case 6:
                printf("VI\n");break;
            case 7:
                printf("VII\n");break;
            case 8:
                printf("VIII\n");break;
            case 9:
                printf("IX\n");break;
        }
}
void ConvertRomanII(int iNo)
{
    switch(iNo)
        {
            case 1:
                printf("X");break;
            case 2:
                printf ("XX");break;
            case 3:
                printf("XXX");break;
            case 4:
                printf("XL");break;
            case 5:
                printf("L");break;
            case 6:
                printf("LX");break;
            case 7:
                printf("LXX");break;
            case 8:
                printf("LXXX");break;
            case 9:
                printf("XC");break;
        }
}