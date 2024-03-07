///////////////////////////////////////////////////////////////////////////////////
//
//Q15. Input a string from the user. Count occurrences (case insensitive) of 
//each alphabet in the string.
// 
//////////////////////////////////////////////////////////////////////////////////

# include<stdio.h>

int length(char arr[])
{
    int len;
    for(len=0; arr[len]!='\n';len++);
    arr[len]='\0';
    return len;
}

void to_upper(char arr[])
{
    int i;
    for(i=0; arr[i]; i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
            arr[i] = arr[i] - 32;
    }
}


void count_char(char arr[])
{
    int count[26] = {0};
    int len,i;
    len = length(arr);
    to_upper(arr);
    for(i=0; i<=len; i++)
    {
        count[arr[i]-'A']++; 
    }

    printf("Character Count as below : \n");
    for(i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }
}

int main()
{
    char str[100];
    int len,i;
    printf("Enter string : ");
    fgets(str,100,stdin);

    count_char(str);
    return 0;
}