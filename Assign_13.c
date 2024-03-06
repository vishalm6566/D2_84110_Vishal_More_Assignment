/////////////////////////////////////////////////////////////////////////////////
//
//Q13. Declare an Array of type char* and initialize it with a few strings (hard
//coded). Display the strings which are duplicated in that array. (Hint: use 
//strcmp()) 
//
/////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>
# include <string.h>

void findDuplicate(char *arr[], int size)
{
    int i=0, j=1;
    printf("Duplicate String : ");
    while(i<size && j<size)
    {
        if(strcmp(arr[i],arr[j])==0)
        {
            printf("%s, ",arr[i]);
            i++;;
            j = i+1;
            continue;
        }
        j++;
    }
}

int main()
{
    char *arr[] = {"omkar","govind","rohit","omkar","ram","govind"};

    findDuplicate(arr,6);

    return 0;
}