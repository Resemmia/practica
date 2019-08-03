#include <iostream>

using namespace std;

int main()
{
    #include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
/*
int MaiorAB(int a,int b){
    return (a+b+abs(a-b))/2;
}*/

int main()
{
 int x,d,i;
   cin>>x;
   d=0;
   i=1;
   while(i<=2 && d<=x/2){
        if(x%i==0){
            d++;
        }
     i++;
   }
     if(d==2){
        cout<<"Es primo"<<endl;
        }else{
         cout<<"No es primo"<<endl;
     }

 
   return 0;
}

  

