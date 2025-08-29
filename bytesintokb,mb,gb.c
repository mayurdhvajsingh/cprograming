#include <stdio.h>

int main() {
    float bytes, kb, mb, gb;

    printf("Enter size in Bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024;            
    mb = bytes / (1024 * 1024);   
    gb = bytes / (1024 * 1024 * 1024); 

    printf("\nSize in KB = %.2f", kb);
    printf("\nSize in MB = %.2f", mb);
    printf("\nSize in GB = %.2f\n", gb);

    return 0;
}
