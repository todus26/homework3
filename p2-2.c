#include <stdio.h>

void print_one(int *ptr, int rows);

int main()
{
    int one[] = {0, 1, 2, 3, 4}; //0, 1, 2, 3, 4가 저장된 배열 선언

    printf("----------[정새연] [2023041074]----------\n");
    printf("one = %p\n", one);   //배열의 이름 = 배열의 0번째 값의 주소
    printf("&one = %p\n", &one); //배열의 이름의 주소 = 배열의 0번째 값의 주소
    printf("&one[0] = %p\n", &one[0]); //배열의 0번째 값의 주소
    printf("\n");

    printf("------------------------------------\n");
    printf("  print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //one[0]의 주소와 5를 함수로 넘겨줌

    printf("------------------------------------\n");
    printf("  print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //one 배열과 5를 함수로 넘겨줌

    return 0;
}

void print_one(int *ptr, int rows)
{
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t  %5d\n", ptr + i, *(ptr + i)); //one의 값과 주소 출력.
    printf("\n");
}