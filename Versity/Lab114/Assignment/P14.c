#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ary[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            scanf("%d", &ary[i][j]);
    }
    int max = ary[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            if(ary[i][j]>max)
                max= ary[i][j];
        }
    }
    int min = ary[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            if(ary[i][j]<min)
                min= ary[i][j];
        }
    }

    printf("Maximum = %d\nMinimum = %d\n", max, min);
    return 0;
}