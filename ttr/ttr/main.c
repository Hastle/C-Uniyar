#include <stdio.h>
#include <locale.h>
#define N 610

int main()
{
    setlocale(LC_ALL , "RUS");
    printf("Введите текст: ");
    char arr[N],ch;
    int i,j;
    i = 0;
    j = 0;
    
    while(1)
    {
        ch=getchar();
        if (ch=='\n') break;
        if (i>=N) break;
        arr[i++] = ch;
        
    }
    
    arr[i] = '\0';
    
    int lengs[30];
    int z = 0;
    int n = 0;
    
    while(1)
    {
        z++;
        if (arr[j] == ' ')
        {
            lengs[n] = z-1;
            n++;
            z = 0;
        }
        
        
        if(arr[j] == '\0')
        {
            lengs[n] = z-1;
            break;
        }
        
        j++;
    }
    
    int m = 0;
    
    while ((lengs[m] > 0) && (lengs[m] < 20))
    {
        
        printf("%d ",m+1);
        printf("слово = ");
        printf("%d ",lengs[m]);
        printf("символов\n");
        m++;
    }
    
    return 0;
}
