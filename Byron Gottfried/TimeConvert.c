#include <stdio.h>
#include <string.h>

char *TimeConverter(char *);

int main()
{
    char cTimeHr[10], *cTimeMil = NULL, flag = 0;
    scanf("%s", cTimeHr);
    cTimeMil =  TimeConverter(cTimeHr);
    printf("%s\n", cTimeMil);
    return;
}

char *TimeConverter(char *cTimeHr)
{
    char *cTimeMil, flag = 0;
    int iLen = strlen(cTimeHr);
    cTimeMil = (char *)malloc(sizeof(char) * iLen);
    int iH1 = 0, iH2 = 0, iHH[3], i = 0, j = 0;

    if (cTimeHr[iLen - 1] == 'M' && (cTimeHr[iLen - 2] == 'A' || cTimeHr[iLen - 2] == 'P'))
    {
        // converting to integers for convention
        for (i = 0, j = 0; i < iLen && j < 3; i = i + 3, j++)
        {
            iH1 = (int)cTimeHr[i + 1] - '0';
            iH2 = (int)cTimeHr[i] - '0';
            iHH[j] = (iH2 * 10) + (iH1 % 10);
        }

        // constraint checking
        if (iHH[j - 3] > 12 || iHH[j - 2] >= 60 || iHH[j - 1] >= 60)
            flag = 1;

        // conversion
        if (flag == 0)
        {
            if (cTimeHr[iLen - 2] == 'A')
            {
                cTimeMil[0] = cTimeHr[0];
                cTimeMil[1] = cTimeHr[1];

                if (iHH[j - 3] == 12)
                {
                    cTimeMil[0] = '0';
                    cTimeMil[1] = '0';
                }
            }
            else if (cTimeHr[iLen - 2] == 'P')
            {
                if (iHH[j - 3] == 12)
                {
                    cTimeMil[0] = cTimeHr[0];
                    cTimeMil[1] = cTimeHr[1];
                }
                else
                {
                    iHH[j - 3] = iHH[j - 3] + 12;
                    cTimeMil[1] = (iHH[j - 3] % 10) + '0';
                    iHH[j - 3] = iHH[j - 3] / 10;
                    cTimeMil[0] = (iHH[j - 3] % 10) + '0';
                }
            }
            for (i = 2; i < iLen - 2; i++)
            {
                cTimeMil[i] = cTimeHr[i];
            }
        }
        else
        {
            printf("Invalid Format\n");
        }
    }
    return cTimeMil;
}