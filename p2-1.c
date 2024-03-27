#include <stdio.h>

#define MAX_SIZE 100

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    for(i=0; i < MAX_SIZE; i++)
    input[i] = i;

    /* for checking call by reference */
    printf("----------[정새연] [2023041074]----------\n");
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //배열의 이름 = 배열의 0번째 값의 주소.
    answer = sum1(input, MAX_SIZE); //answer에 sum1 함수의 리턴 값 할당
    printf("The sum is: %f\n\n", answer); //answer 값 출력
    
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");

    printf("input \t= %p\n", input);
    answer = sum2(input, MAX_SIZE); //answer에 sum2 함수의 리턴 값 할당
    printf("The sum is: %f\n\n", answer); //answer 값 출력
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");

    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum3(MAX_SIZE, input); //answer에 sum3 함수의 리턴 값 할당
    printf("The sum is: %f\n\n", answer); //answer 값 출력

}

float sum1(float list[], int n)
{
    printf("list \t= %p\n", list); //list의 값, 즉 input의 주소
    printf("&list \t= %p\n\n", &list); //list의 주소 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}

float sum2(float *list, int n)
{
    printf("list \t= %p\n", list); //list의 값
    printf("&list \t= %p\n\n", &list); //list의 주소 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
    tempsum += *(list + i);
    return tempsum;
}

/* stack variable reuse test */
float sum3(int n, float *list)
{
    printf("list \t= %p\n", list); //list의 값
    printf("&list \t= %p\n\n", &list); //list의 주소 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}