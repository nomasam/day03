#include <stdio.h>
void ft_swap(int *a, int*b){
	int i;
	i=*b;
	*b=*a;
     *a=i;

}
int main(){
int a,b;

a=4;
b= 13;
ft_swap(&a,&b);
printf("a= %d\n" , a);
printf("b=%d\n" , b);
return 0;
}
