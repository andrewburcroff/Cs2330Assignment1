#include <stdio.h>
#include <stdlib.h>

char Buffer[90];//random buffer value holder
int i = 0;//Intializing i for the program.
int digit;//Intailizing digit 

 

void Store(int temp)//this stores each digit from the while loop
{
  Buffer[i] = temp;// Storing the values in Buffer
  i++;//Increasing I.

}
/*
This is a method called DivAlg that help the user change certian integers to given bases like 
base: 2,4,8,16.
*/
  void divAlg(unsigned int V, unsigned int B)//DivAlg Method
{
    Buffer[64] = 00;//Setting the bufer to equal 00 to start off.
    char Table[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};// Table of the char of 16 bits.
    while(V != 0)//Starting value in a while loop.
{
      digit = V % B;//Finding the remainder for the value and base.
      V = V / B;//Dividing the value and base to get a new value.
      Buffer[i] = digit; //Given the certian i value, place it in digit.
      if((V == 0) && (B != 16))// Part if changing to any base  base
{
        printf("%d%d%d%d%d%d\n",Buffer[5],Buffer[4],Buffer[3],Buffer[2],Buffer[1],Buffer[0]);//Printing the base answer for certian bases.
      }
      if((B == 16) && (V == 0)){//Part if base is 16.
        printf("%d%c\n",Buffer[1],Table[Buffer[0]]);//Print out translation for base
      }
    i++;//Increasing I.
    }
}

/*
This is my main method.
*/

  int main(int argc, char *argv [])
{
    int value = 78; //Entering the integer for value.
    int base = 16; //Entering the integer for base.
    divAlg(value, base);//Calling the method divAlg.

  }
