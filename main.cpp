#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    cout<<"\t\t\t\t* * * * * * * * * * * *\n";
    cout<<"\t\t\t\t*      CALCULATOR     *\n";
    cout<<"\t\t\t\t* * * * * * * * * * * *\n"<<endl;
    cout<<"----------------------     ----------------------     ----------------------  "<<endl;
    cout<<"      OPERATIONS                 OPERATIONS                 OPERATIONS        "<<endl;
    cout<<"----------------------     ----------------------     ----------------------  "<<endl;
    cout<<" 1:Addition                  8:Binary-->Decimal     (n)y14:Octal--->Binary     "<<endl;
    cout<<" 2:Subtraction               9:Binary-->Octal          15:Octal--->Decimal    "<<endl;
    cout<<" 3:Multiplication        (n)y10:Binary-->Hexadecimal (n)16:Octal--->Hexadecimal"<<endl;
    cout<<" 4:Division                                                                   "<<endl;
    cout<<" 5:Power                    11:Decimal->Binary       (n)y17:Hexadecimal->Binary "<<endl;
    cout<<" 6:Sq.Root                  12:Decimal->Octal        (n)18:Hexadecimal->Octal  "<<endl;
    cout<<" 7:Cubic Root            (n)13:Decimal->Hexadecimal  (n)19:Hexadecimal->Decimal"<<endl;
    cout<<"----------------------     ----------------------     ----------------------  "<<endl;

    double x,y,ans;
    int op;
    char choice;

    long BinNum;
    int DecNum,OctNum,i,remainder;

    do{
    cout<<"\nPlease choose your Operation Number:";cin>>op;
    while(cin.fail()||op<1)
    {
    cin.clear();
    cin.ignore(123,'\n');
    cout<<"!!Invalid Input!!"<<endl;
    cout<<"Retry again:";cin>>op;
    }
    if (op>=1&&op<=4)
    {
    cout<<"\nPlease enter 1st number:";cin>>x;
     while(cin.fail())
        {
        cin.clear();
        cin.ignore(123,'\n');
        cout<<"\n!!Invalid Input!!....Retry again"<<endl;
        cout<<"Please enter 1st number:";cin>>x;
        }
    cout<<"Please enter 2nd number:";cin>>y;
        while(cin.fail())
        {
        cin.clear();
        cin.ignore(123,'\n');
        cout<<"\n!!Invalid Input!!....Retry again"<<endl;
        cout<<"Please enter 2nd number:";cin>>y;
        }
    }
    switch(op)
     {
      case(1):
        ans=x+y;
        cout<<"\n"<<"("<<x<<")"<<"+"<<"("<<y<<")"<<"="<<ans<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
      case(2):
        ans=x-y;
        cout<<"\n"<<"("<<x<<")"<<"-"<<"("<<y<<")"<<"="<<ans<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
      case(3):
        ans=x*y;
        cout<<"\n"<<"("<<x<<")"<<"*"<<"("<<y<<")"<<"="<<ans<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
      case(4):
        while(y==0)
        {
         cout<<"\n!!Error!!.. *HINT* Can't divide a number by (0)..Please try again."<<endl;
         cin.clear();
         cin.ignore(123,'\n');
         cout<<"Re-enter 2nd number:";cin>>y;
        }
            ans=x/y;
            cout<<"\n"<<"("<<x<<")"<<"/"<<"("<<y<<")"<<"="<<ans<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
      case(5):
        cout<<"\nPlease enter the base :";cin>>x;
        cout<<"Please enter the power:";cin>>y;
        while(cin.fail())
            {
            cin.clear();
            cin.ignore(123,'\n');
            cout<<"\n!!Invalid Input!!....Restarting"<<endl;
            cout<<"Please enter the base :";cin>>x;
            cout<<"Please enter the power:";cin>>y;
            }
        ans=pow(x,y);
        cout<<"\n"<<"("<<x<<")to the power "<<"("<<y<<")"<<"="<<ans<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
      case(6):
        cout<<"\nPlease enter the number:";cin>>x;
        while(cin.fail())
            {
            cin.clear();
            cin.ignore(123,'\n');
            cout<<"\n!!Invalid Input!!....Restarting"<<endl;
            cout<<"Please enter the number:";cin>>x;
            }
        ans=sqrt(x);
        cout<<"\n"<<"("<<x<<") to the Sq.Root="<<ans<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
      case(7):
        cout<<"\nPlease enter the number:";cin>>x;
        while(cin.fail())
            {
            cin.clear();
            cin.ignore(123,'\n');
            cout<<"\n!!Invalid Input!!....Restarting"<<endl;
            cout<<"Please enter the number:";cin>>x;
            }
        ans=cbrt(x);


        cout<<"\n"<<"("<<x<<") to the Cubic.Root="<<ans<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
      case(8):
        cout<<"\nPlease enter Binary number:";cin>>BinNum;
        while(cin.fail())
            {
            cin.clear();
            cin.ignore(123,'\n');
            cout<<"\n!!Invalid Input!!....Retry again"<<endl;
            cout<<"Binary number:";cin>>BinNum;
            }
        DecNum=0,i=0,remainder=0;
        while(BinNum!=0)
            {
             remainder=BinNum%10;
             BinNum/=10;
             DecNum+=remainder*pow(2,i);
             i++;
            }
        cout<<"The Result --> ("<<DecNum<<")10"<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
      case(9):
          cout<<"\nPlease enter Binary number:";cin>>BinNum;
          while(cin.fail())
            {
            cin.clear();
            cin.ignore(123,'\n');
            cout<<"\n!!Invalid Input!!....Retry again"<<endl;
            cout<<"Binary number:";cin>>BinNum;
            }
          DecNum=0,i=0,remainder=0,OctNum=0;
          while(BinNum!=0)
              {
               remainder=BinNum%10;
               BinNum/=10;
               DecNum+=remainder*pow(2,i);
               i++;
              }
          i=1;
          while(DecNum!=0)
              {
               remainder=DecNum%8;
               DecNum/=8;
               OctNum+=remainder*i;
               i*=10;
               }
        cout<<"The Result --> ("<<OctNum<<")8"<<endl;
        break;
//------------------------------------------------------------------------------------------------------------
//case(10)
//------------------------------------------------------------------------------------------------------------
      case(11):
          cout<<"\nPlease enter Decimal number:";cin>>DecNum;
          while(cin.fail())
            {
            cin.clear();
            cin.ignore(123,'\n');
            cout<<"\n!!Invalid Input!!....Retry again"<<endl;
            cout<<"Binary number:";cin>>DecNum;
            }
          i=1,remainder=0;
          while(DecNum!=0)
              {
               remainder=DecNum%2;
               DecNum/=2;
               BinNum+=remainder*i;
               i*=10;
              }
          cout<<"The Result --> ("<<BinNum<<")2"<<endl;
          break;
//------------------------------------------------------------------------------------------------------------
      case(12):
          cout<<"\nPlease enter Decimal number:";cin>>DecNum;
          while(cin.fail())
            {
            cin.clear();
            cin.ignore(123,'\n');
            cout<<"\n!!Invalid Input!!....Retry again"<<endl;
            cout<<"Decimal number:";cin>>DecNum;
            }
          OctNum=0,i=1,remainder=0;
          while(DecNum!=0)
              {
               remainder=DecNum%8;
               DecNum/=8;
               OctNum+=remainder*i;
               i*=10;
              }
          cout<<"The Result --> ("<<OctNum<<")8"<<endl;
          break;
//------------------------------------------------------------------------------------------------------------
//case(13) Dec --> Hexa
//------------------------------------------------------------------------------------------------------------
//case(14) Oct --> Bin
//------------------------------------------------------------------------------------------------------------
      case(15):
        DecNum=0,i=0,remainder=0;
        cout<<"\nPlease enter Octal number:";cin>>OctNum;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(123,'\n');
            cout<<"\nInvalid Input.....Retry again."<<endl;
            cout<<"Octal number:";cin>>OctNum;
        }
        while(OctNum!=0)
        {
            remainder=OctNum%10;
            OctNum/=10;
            DecNum+=remainder*pow(8,i);
            i++;
        }
        cout<<"\nThe Result--> ("<<DecNum<<")10"<<endl;
        break;
//------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------


     }


    cout<<"\n\nRestart?\nIf Yes Enter (Y) or (y)\nIf No Enter any button\nChoice:";cin>>choice;
     }while(choice=='Y'||choice=='y');
    return 0;
}



//------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------
