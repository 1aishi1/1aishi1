#include<iostream>
using namespace std;
int main()
{      
       int dollars;
       float P,PE,Y,R;
      
       cout<<"Enter currency in American Dollars"<<endl;
       cin>>dollars;
       //Calculations
       P=dollars*0.571505;
       PE=dollars*10.7956;
       Y=dollars*112.212;
       R=dollars*77.44;
       cout<<dollars<<"American dollars are equal to "<<P<<" British pounds"<<endl;
       cout<<dollars<<"American dollars are equal to "<<PE<<" Mexican pesos"<<endl;
       cout<<dollars<<"American dollars are equal to "<<Y<<" Japanese yen"<<endl;
       cout<<dollars<<"American dollars are equal to "<<R<<" Indian rupees"<<endl;
       return 0;
}
