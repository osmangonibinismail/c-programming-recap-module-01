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

#include<stdio.h>

int main() {
    int A, B, C;
    char S, Q;

    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

    if (S == '+') {
        if (A + B == C)
            printf("Yes\n");
        else
            printf("%d\n", A + B);
    } else if (S == '-') {
        if (A - B == C)
            printf("Yes\n");
        else
            printf("%d\n", A - B);
    } else if (S == '*') {
        if (A * B == C)
            printf("Yes\n");
        else
            printf("%d\n", A * B);
    }

    return 0;
}
