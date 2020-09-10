#include <stdio.h>

int mysum(int *num)
{
  int index = 0;
  int sum = 0;
  while(*(num+index) != '\0')
  {
    printf("Shreyas.. getting sum index=%d\r\n",index);
    sum+= *(num+index);
    index++;
  }
  return sum;
}

int main()
{
  int number[] = {1,2,3,0,1,2,3};
  printf("the sum is %d\r\n",mysum(number));

 return 0;

}
