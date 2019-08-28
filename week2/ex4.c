#include <stdio.h>
 
void swap(int *int1, int *int2) 
{ 
    int temp = *int1; 
    *int1 = *int2; 
    *int2 = temp; 
} 
  
int main() 
{ 
    int x, y; 
    printf("Enter x :"); 
    scanf("%d", &x); 
    printf("\nEnter y :"); 
    scanf("%d", &y); 
    swap(&x, &y); 
    printf("\nx = %d, y = %d", x, y); 
    
    return 0; 
} 