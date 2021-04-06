#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char flames[6]="FLAMES";
char string1[50],string2[50];
void display_input();
int flamesLength();
char cal_flames(int n);
int main()
{
    int length_flames;
    display_input();
    length_flames=flamesLength();
    switch(cal_flames(length_flames))
    {
    case 'F':
        printf("\n FRIENDS\n");
        break;
    case 'L':
        printf("\n LOVER \n");
        break;
    case 'A':
        printf("\n AFFECTION \n");
        break;
    case 'M':
        printf("\n MARRIAGE \n");
        break;
    case 'E':
        printf("\n ENEMY \n");
        break;
    case 'S':
        printf("\n SISTER \n");
        break;
    }
    return 0;
}
void display_input()
{
    printf("Enter the male name \n");
    scanf("%s",string1);
    printf("Enter the Female name \n");
    scanf("%s",string2);
    return ;
}
int flamesLength()
{
    int i,j,length1,length2,count=0;
    length1=strlen(string1);
    length2=strlen(string2);
    for(i=0;i<length1;i++)
    {
        for(j=0;j<length2;i++)
        {
            if(string1[i]==string2[j])
            {
                count++;
                string1[j]=string2[i]=-1;
                break;
            }
        }
    }
    if(((length1+length2)-2*count!=0) && ((length1+length2)-2*count>0))
        return ((length1+length2)-2*count);
    else
    {
        printf("FLAMES cannot be calulated");
        exit(1);
    }
}
char cal_flames(int length)
{
    int i=6-length%6;
    return flames[i];
}
