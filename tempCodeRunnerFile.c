#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    int a[n + 5];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    // 1. count the min value

    int min = a[0];

    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    // printf("min = %d\n", min);

    // 2. count the frequency of min

    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == min){
            cnt++;
        }
    }

    // printf("frequency = %d\n", cnt);

    // // 3. is the frequency odd/even

    if(cnt % 2 == 0){
        printf("Unlucky\n");
    }else{
        printf("Lucky\n");
    }
}