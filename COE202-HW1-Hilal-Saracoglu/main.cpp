#include <iostream>
using namespace std;
int fib(int index);
int star(int size);
int pyramid(int height);

int main() {
    cout << "Welcome to my first C++ program!" << endl;
    while(true){
      cout << "Please select a task to perform (-1 to exit):" << endl << "1) Draw a pyramid"<<endl<<"2) Draw a star"<<endl<<"3) Compute the Fibonacci numbers"<<endl;
      int choice;
      cin>>choice;
      if(choice==-1){
        cout<<"program exit";
        break;
      }
      while(true) {
        if(choice == 1 || choice == 2 || choice == 3 || choice == -1){
          if(choice==1){
            cout<<"Please enter the height of the pyramid (between 1 and 40):"<<endl;
            int height;
            cin>>height;
            while(true){
              if(height>=1 && height<=40){
                cout<<pyramid(height);
                break;
              }
              else{
                cout<<"You have entered an invalid value for height."<<endl;
                cout<<"Please enter the height of the pyramid (between 1 and 40):"<<endl;
                cin>>height;
              }
            }
            break;
          }
          else if(choice==2) {
            cout<<"Please enter the size of the star (between 1 and 20):"<<endl;
            int size;
            cin>>size;
            while(true){
              if(size>=1 && size<=20){
                cout<<star(size);
                break;
              }
              else{
                cout<<"You have entered an invalid value for size."<<endl<<"Please enter the size of the star (between 1 and 20):"<<endl;
                cin>>size;
              }
          }
          break;
          }
          else if(choice==3){
              cout<<"Please enter the index of the Fibonacci number to be computed:"<<endl;
              int index;
              cin>>index;
              while(true){
                if(index !=0 && index>0){
                  cout<<"Result: "<<fib(index)<<endl; //46. deðere kadar doðru hesaplýyor.46.deðer=1836311903
                  break;
                }
                else {
                  cout<<"You have entered an invalid value for index."<<endl<<"Please enter the index of the Fibonacci number to be computed:"<<endl;
                  cin>>index;
                }
              }
              break;
          }
          else if(choice==-1){
            cout<<"program exit";
            break;
          }
        }
        else{
          cout<<"You have entered an invalid value for selection."<<endl<<"Please select a task to perform (-1 to exit):"<<endl;
          cout<<"1) Draw a pyramid"<<endl<<"2) Draw a star"<<endl<<"3) Compute the Fibonacci numbers"<<endl;
          cin>>choice;
        }
      }
    }
}

int pyramid(int height){
  int i,j;
  for(j=1;j<=height;j++){

    for(i=0; i<height-(2*j-1)/2; i++)
      cout<<" ";
    for(int k=0; k<2*j-1;k++)
      cout<<"*";
    for(i=0; i<height-(2*j-1)/2; i++)
      cout<<" ";
    cout<<endl;
  }
  return 0;
}

int star(int size){
  int i,j;
  for(i=0; i<2*size+1;i++){
    for(j=0; j<2*size+1; j++){
        if((i+j)==(2*size+1)-1 || i==j)
          cout<<"*";
        else
          cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}

int fib(int n){
  int x=0,y=1;
  int z;
  for(int i =2; i<=n;i++){
    z=x+y;
    x=y;
    y=z;
  }
  return z;
}

