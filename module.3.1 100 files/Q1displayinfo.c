
 #include <stdio.h>
int main()
{
    int first no, second no, add, sub, mul;
    float div;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first no, &second no);
    add = first no + second no;
    sub = first no - second no;
    mul = first no * second no;
    div = first no / (float)second no;   
    printf("sum = %d\n",add);
    printf("sub = %d\n",sub);
    printf("mul = %d\n",mul);
    printf("div = %.2f\n",div);  
    
}
