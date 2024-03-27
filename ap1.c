#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //크기가 5인 배열 선언
    int *plist[5] = {NULL,}; //정수형 포인터 5개 선언

    plist[0] = (int *)malloc(sizeof(int)); //*plist에 int의 크기만큼 할당(heap 영역에)

    list[0] = 1; //list[0]에 1 할당
    list[1] = 100; //list[1]에 100 할당

    *plist[0] = 200; //plist가 가리키는 곳에 200 할당

    printf("----------[정새연] [2023041074]----------\n");
    printf("list[0]            = %d\n", list[0]); //list 배열의 0번째 값 출력 : 1
    printf("&list[0]           = %p\n", &list[0]); //list 배열의 0번째 값의 주소 출력
    printf("list               = %p\n", list); //배열의 이름 출력 = 배열의 첫 원소의 주소
    printf("&list              = %p\n", &list); //list 배열의 주소 출력 = 0번째 배열의 주소 값

    printf("----------------------------------------\n\n");
    printf("list[1]            = %d\n", list[1]); //list 배열의 1번째 값 출력 : 100
    printf("&list[1]           = %p\n", &list[1]); //list 배열의 1번째 값의 주소 출력
    printf("*(list+1)          = %d\n", *(list + 1)); //list 배열의 1번째 값 출력 : 100
    printf("list+1             = %p\n", list+1); //list 배열의 1번째 값의 주소 출력

    printf("----------------------------------------\n\n");
    printf("*plist[0]          = %d\n", *plist[0]); //plist[0]에 있는 포인터가 가리키는 값 : 200
    printf("&plist[0]          = %p\n", &plist[0]); //plist[0]의 주소
    printf("&plist = %p\n", &plist); //plist의 주소 = 0번째 값의 주소
    printf("plist = %p\n", plist); //plist 배열의 이름 = 0번째 값의 주소
    printf("plist[0]           = %p\n", plist[0]); //malloc을 통해 할당하였으므로 null이 아닌 다른 값
    printf("plist[1]           = %p\n", plist[1]); //초기화시킨 null
    printf("plist[2]           = %p\n", plist[2]); //초기화시킨 null
    printf("plist[3]           = %p\n", plist[3]); //초기화시킨 null
    printf("plist[4]           = %p\n", plist[4]); //초기화시킨 null.

    free(plist[0]);
}