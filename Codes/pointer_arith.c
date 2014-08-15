#include <stdio.h>

int main()
{
    int intarray[5] = {10,20,30,40,50};

    int i;
    for(i = 0; i < 5; i++)
        printf("intarray[%d] has value: %d - and address @ %x\n", i, intarray[i], &intarray[i]);

    int *intpointer = &intarray[3]; //point to the 3rd element in the array
    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the addres of the 3rd element

    intpointer++; //now increase the point's address so it points to the 4th elemnt in the array
    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the addres of the 4th element

    return 0;
}