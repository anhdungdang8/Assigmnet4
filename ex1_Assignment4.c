/*Bài 1. Below example tries to swap value of evenNumber and oddNumber but it does not works.
Please correct it by trying passing reference of pointer to swap function.

void swap(int evenNumber, int oddNumber) {
    int temp = evenNumber;
    evenNumber = oddNumber;
    oddNumber = temp;
}
int main() {
    int evenNumber = 2;
    int oddNumber   = 3;
    printf("evenNumber: %d, oddNumber : %d\n", evenNumber, oddNumber);
    swap(evenNumber, oddNumber);
    printf("evenNumber: %d, oddNumber : %d\n", evenNumber, oddNumber);
    return 0;
}

Result:
evenNumber: 2 ,oddNumber : 3
evenNumber: 2 ,oddNumber : 3
*/
#include <stdio.h>
void swap(int* evenNumber, int* oddNumber) {
    int temp=*evenNumber;
    *evenNumber=*oddNumber;
    *oddNumber = temp;
}
int main() {
    int evenNumber = 2;
    int oddNumber   = 3;
    printf("evenNumber: %d, oddNumber : %d\n", evenNumber, oddNumber);
    swap(&evenNumber, &oddNumber);
    printf("evenNumber: %d, oddNumber : %d\n", evenNumber, oddNumber);
    return 0;
}