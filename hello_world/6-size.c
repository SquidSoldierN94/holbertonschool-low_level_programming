#include <stdio.h>
#include <inttypes.h>
/*
 *main - entry point
 * 
 * Return: always 0 (success)
*/
int main(void)
{
    printf("Size of char: %" PRIu32 " bytes\n", (uint32_t)sizeof(char));
    printf("Size of int: %" PRIu32 " bytes\n", (uint32_t)sizeof(int));
    printf("Size of long int: %" PRIu32 " bytes\n", (uint32_t)sizeof(long int));
    printf("Size of long long int: %" PRIu32 " bytes\n", (uint32_t)sizeof(long long int));
    printf("Size of float: %" PRIu32 " bytes\n", (uint32_t)sizeof(float));
    
    return 0;
}