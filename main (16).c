#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *a = (int*)malloc(sizeof(int)*n+1);
    for(int i = 1; i < n+1; i++){
        scanf("%d",&a[i]);
    }
    for(int x = 1; x < n+1; x++){
        for(int j = 1; j < n+1; j++){
            if(x == a[j]){
                for(int i = 1; i < n+1; i++){
                    
                    if(j == a[i]){
                        printf("%d\n",i);
                    }
                }
            }
        }
    }
    return 0;
}
