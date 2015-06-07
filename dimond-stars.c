//by Vadim Deryabin
//program produces dimond figure made of stars with entered max width.
//laguage: C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //Variables declaration
  int extLoopOne=0, intLoopOne=0, intLoopTwo=0, value=0, cnt=0;
  //value insert
  printf("Please insert a whole positive odd number from 1 to 11\n");
  scanf("%d", &value);
  //check of value
  while ((value<1) || (value>11) || (value%2==0))
  {
    printf("Inserted value does not comply with requirements posted: it should be in range\nof 1 to 11 and ODD.\nRepeat your input\n");
    scanf("%d", &value);
  }
  //External loop 1 for lines
  for (extLoopOne=0; extLoopOne<((value+1)/2);extLoopOne++)
  {
    //Counter makes 2 step at once to eleminate possibility of EVEn number of stars and spaces
    cnt+=2;
    //Internal loop 1 for spaces
    for (intLoopOne=0;intLoopOne<((value-cnt+1)/2);intLoopOne++)
    {
       printf(" ");   
    }
    //Internal loop 2 for stars
    for (intLoopTwo=0;intLoopTwo<(cnt-1);intLoopTwo++)
    {
       printf("*");   
    }
  printf("\n");
  }
  //External loop 2 for lines
  for (extLoopOne=0; extLoopOne<((value+1)/2);extLoopOne++)
  {
    //Counter makes 2 step at once to eleminate possibility of EVEn number of stars and spaces
    cnt-=2;
    //Internal loop 1 for spaces
    for (intLoopOne=0;intLoopOne<((value-cnt+1)/2);intLoopOne++)
    {
       printf(" ");   
    }
    //Internal loop 2 fr stars
    for (intLoopTwo=0;intLoopTwo<(cnt-1);intLoopTwo++)
    {
       printf("*");   
    }
  printf("\n");  
  }
  system("PAUSE"); 
  return 0;
}