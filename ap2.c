#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; //정수형 변수가 5개인 배열 선언
    int *plist[5]; //정수형 포인터 변수가 5개인 배열 선언

    list[0] = 10; //list[0]에 10 할당
    list[1] = 11; //list[0]에 11 할당

    plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 int형의 크기만큼 메모리 할당

    printf("----------[정새연] [2023041074]----------\n");
    printf("list[0] \t= %d\n", list[0]); //list[0]의 값
    printf("list \t\t= %p\n", list); //배열의 이름 = 배열의 0번째 값의 주소
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소
    printf("list + 0 \t= %p\n", list+0); //list[0]의 주소
    printf("list + 1 \t= %p\n", list+1); //list[1]의 주소
    printf("list + 2 \t= %p\n", list+2); //list[2]의 주소
    printf("list + 3 \t= %p\n", list+3); //list[3]의 주소
    printf("list + 4 \t= %p\n", list+4); //list[4]의 주소
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소.
    
    free(plist[0]); //메모리 할당 해제
}