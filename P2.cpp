///Problema 2

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    char text[500], *p, a[100][500], aux[500];
    int nrc[100], n;
    int i;
    scanf("%[^\n]s", text);
    n=0;
    p=strtok(text, " ");
    while(p)
    {
        strcpy(a[n],p);
        nrc[n]=strlen(a[n++]);
        p=strtok(NULL, " ");
    }

    /*for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;*/

    bool test=false;

    while(!test)
    {
        test=true;
        for(i=0;i<n-1;i++){
            if(strlen(a[i])<strlen(a[i+1]))
            {
                swap(a[i],a[i+1]);
                test=false;
            }
            if(strlen(a[i])==strlen(a[i+1]) && strcmp(a[i],a[i+1])>0)
            {
                swap(a[i],a[i+1]);
                test=false;
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<endl;

        return 0;
    }
