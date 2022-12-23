#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int age,h;
long long int b;
string c;

int main(){
   cout << "Enter your age: ";
   cin >> age;
   if(age <= 25){
      cout << "Enter your height: ";
      cin >> h;
      if(h  < 100 ) c = "Chopper";
      else if(h < 180) c = "Usopp";
      else {
         cout << "Enter your bounty: ";
         cin >> b;
         if(b > 1100000000) c = "Zoro";
         else c = "Sanji";

      }
   }
   else if(age <= 60) {
      cout << "Enter your bounty: ";
      cin >> b;
      if(b > 500000000) c = "Jinbe";
      else c = "Franky";

   }
   else if(age > 60) c = "Brook";
   cout << "Your character = " << c;
}

