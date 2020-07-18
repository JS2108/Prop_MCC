#include <iostream>
using namespace std;
#include "lstack.h"


int main(){
  LStack<char> P;
  string input;
  char popped,top;
  int par,llav,cor,cnt;
  cout<<"Ingrese una expresión para verificar su balance: \n";
  getline(cin,input);
  cout<<input;

  //-----------------
  int flag=0;
  for (int i = 0; i < input.length(); i++)
   //for length of the string calculated by number of letters
   {
       if (input[i] == '{' || input[i] == '[' || input[i] == '(') {
           //push function to enter terms in a stack
           P.push(input[i]);
           flag = 1;
       }
       if (P.length()>0) {
           if (input[i] == '}') {
               P.topValue(top);
               if (top=='{')
               // top of the stack
               {
                   P.pop(popped);
                   //pop function to delete terms from the top of array
                   continue;
               }
               else
                   break;
           }
           if (input[i] == ']') {
              P.topValue(top);
               if (top=='[') {
                   P.pop(popped);
                   continue;
               }
               else
                   break;
           }
           if (input[i] == ')') {
             P.topValue(top);
               if (top=='(') {
                   P.pop(popped);
                   continue;
               }
               else
                   break;
           }
       }
       else {
           break;
       }
   }

   if ((P.length()==0) && (flag == 1))
       cout << "YES" << endl;
   else
       cout << "NO" << endl;
}
