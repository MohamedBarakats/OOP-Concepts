/* A number is Armstrong if the sum of cubes of individual digits
 of a number is equal to the number itself. 
e.g.  153 is an Armstrong number as 153 = 1*1*1 + 5*5*5 + 3*3*3  */

#include<iostream>
using namespace std;
int main()
{ 
  int temp,number,sum=0,r;
  
  cout<<"Enter a number : ";
  cin>>number;
  temp=number; //Assigning the number to be Temp
  while(number!=0) //Check if the number is not Zero ( Zero is an Armstrong number )
       {r=number%10; //The number modulus 
       number=number/10; // The number division
       sum=sum+(r*r*r); //Sum+=(The reminder)
       }
  if(sum==temp) //The Base Condition 
    cout<<endl<<temp<<" is a Armstrong number. \n";
  else cout<<endl<<temp<<" is not a Armstrong number. \n";
return 0;
}