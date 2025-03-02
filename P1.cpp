///PROBLEMA 1


#include <iostream>
#include <stdio.h>
using namespace std;

FILE *file;


int main()
{
    char sir[100];
    int i,nr,sum=0;
    file=fopen("in.txt", "r");
    while(fgets(sir,100, file)){
        nr=0;
        for(i=0;sir[i];i++)
        {
            nr=nr*10+(sir[i]-'0');
        }
        sum+=nr;
    }
    printf("%d", sum);
    return 0;
}
