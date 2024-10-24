// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);

//     if('a' <= ch && ch <= 'z'){
//         //lower case

//         ch -= 32;
//     }else{
//         //upper case

//         ch += 32;
//     }

//     printf("%c", ch);

//     return 0;
// }

// int main()
// {
//     int a, b;
//     char s;

//     scanf("%d %c %d", &a, &s, &b);

//     if (s == '>')
//     {
//         if (a > b)
//         {
//             printf("Right");
//         }
//         else
//         {
//             printf("Wrong");
//         }
//     }
//     else if (s == '<')
//     {
//         if (a < b)
//         {
//             printf("Right");
//         }
//         else
//         {
//             printf("Wrong");
//         }
//     }
//     else
//     {
//         if (a == b)
//         {
//             printf("Right");
//         }
//         else
//         {
//             printf("Wrong");
//         }
//     }
// }

// #include<stdio.h>

// int main() {
//     int A, B, C;
//     char S, Q;

//     scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

//     if (S == '+') {
//         if (A + B == C)
//             printf("Yes\n");
//         else
//             printf("%d\n", A + B);
//     } else if (S == '-') {
//         if (A - B == C)
//             printf("Yes\n");
//         else
//             printf("%d\n", A - B);
//     } else if (S == '*') {
//         if (A * B == C)
//             printf("Yes\n");
//         else
//             printf("%d\n", A * B);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     long long a, b, k;
//     scanf("%lld %lld %lld", &a, &b, &k);

//     if(a % k == 0 && b % k == 0){
//         printf("Both\n");
//     }
//     else if(a % k == 0){
//         printf("Memo\n");
//     }
//     else if(b % k == 0){
//         printf("Momo\n");
//     }
//     else{
//         printf("No One\n");
//     }

//     return 0;
    
// }


// #include<stdio.h>
// int main(){

//     int a, b, c;
//     scanf("%d %d %d", &a,&b,&c);

//     if(a <= b && a <= c){
//         if(b <= c){
//             printf("%d\n%d\n%d\n", a, b, c);
//         }
//         else{
//             printf("%d\n%d\n%d\n", a, c, b);
//         }
//     }
//     else if(b <= a && b <= c){
//         if(a <= c){
//             printf("%d\n%d\n%d\n", b, a, c);
//         }
//         else{
//             printf("%d\n%d\n%d\n", b, c, a);
//         }
//     }
//     else{
//         if(a <= b){
//             printf("%d\n%d\n%d\n", c, a, b);
//         }
//         else{
//             printf("%d\n%d\n%d\n", c, b, a);
//         }
//     }

//     printf("\n");

//     printf("%d\n%d\n%d\n", a, b, c);

//     return 0;
// }

#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for(int cs = 0; cs < t; cs++ ) {

        int x, y;
        scanf("%d %d", &x, &y);

        if(x > y){
            int temp = x;
            x = y;
            y = temp;
        }

        int sum = 0;

        for(int i = x + 1; i < y; i++){
            //print inside

            if(i % 2 != 0){
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;

}