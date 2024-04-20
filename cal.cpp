//Simple calculator
#include<iostream>
using namespace std;
//function for addition 
int add(int x,int y)
{
return (x+y);
}
//function for subtraction 
int sub(int x1,int y1)
{
return(x1-y1);
}
//function for multiplication 
int multiple(int x2,int y2)
{
return(x2*y2);
}
//function for division 
int division (int x2,int y2)
{
return (x2/y2);
}
//main function 
int main()
{
         int n;
         cout<<"SIMPLE CALCULATOR\n\n";
         cout<<"CHOICE LIST"<<endl;
         cout<<" 1  addition\n";
         cout<<" 2  subtraction\n";
         cout<<" 3  multiplication\n";
         cout<<" 4  divison\n\n";
    do
    {
        int choice,number1,number2;
        
        cout<<"enter your choice : ";
        cin>>choice;
        cout<<endl;
        cout<<"enter two numbers :   ";
        cin>>number1>>number2;
        switch(choice)
        {
         case 1:
         cout<<number1<<" + "<<number2<<" = "<<add(number1,number2)<<endl;
         cout<<"----------------------------\n";
         break;
         case 2:
         cout<<number1<<" - "<<number2<<" = "<<sub(number1,number2)<<endl;
         cout<<"----------------------------\n";
         break;
         case 3:
         cout<<number1<<" * "<<number2<<" = "<<multiple(number1,number2)<<endl;
         cout<<"----------------------------\n";
         break;
         case 4:
         cout<<number1<<" / "<<number2<<" = "<<division(number1,number2)<<endl;
         cout<<"----------------------------\n";
         break;
         default:
         cout<<"enter correct choice........!\n";
         break;
        }
        
        cout<<"press 0 to continue this process : ";
        cin>>n;
    }while(n==0);
    cout<<"\n_THANKYOU";
    return 0;
}