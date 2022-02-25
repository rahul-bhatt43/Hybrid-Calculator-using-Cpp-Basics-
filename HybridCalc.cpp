#include <iostream>
#include <math.h>
// #include <cmath>
using namespace std;
#define PI 3.14
// template <class int>    // we can also use STL but for Noobees we
// are just usinf  the int and float by byDefault
/* simpleCalc       scientificCalc
            hybridCalc
*/
class simpleCalc{
private:
  int a, b;
public:
  void getSimpleCalc(int x, int y){
    a = x; b = y;
  }

  int add() { return (a+b); }
  int subtract() { return (a - b); }
  int multiply() { return (a*b); }
  int divide() { return (a/b); }
};


class scientificCalc{
private:
  int a, b, c;
public:
  void getScientificCalc(int x){
    a = x;
  }
  void getExScientificcalc(int x9,int  x10){
    b = x9;
    c = x10;
  }
  int Sin() { return sin(a); }
  int Cos() { return cos(a); }
  int Tan() { return tan(a); }
  int SquareRoot(){ return sqrt(a); }
  int Exp(){ return pow(b, c); }
  int InSin() { return asin(a)*180.0/PI; }
  int InCos() { return acos(a)*180.0/PI; }
  int InTan() { return atan(a)*180.0/PI; }
  float logTen() { return log10(a); }
};

class hybridCalc : public simpleCalc, public scientificCalc {
public:
  void start(){

    int choice;
    do{
      cout << "Enter your calculator type: " << endl
           << "1. Simple calculator. " << endl
           << "2. Scientific calculator. " << endl
           << "0. EXIT. " << endl;
           cin >> choice;
           switch(choice){
             case 1:
             int choice1;
             cout << "----------------Simple calculator---------------" << endl;
             do{
             cout << "Choose operation to perform: " << endl
                  << "1. Addition" << endl
                  << "2. Subtraction" << endl
                  << "3. Multiplication" << endl
                  << "4. Division" << endl
                  << "0. Exit." << endl;
                  cin >> choice1;
                  switch(choice1){
                    case 1:
                    int x1, y1;
                    cout << "Enter the first number: ";
                    cin >> x1;
                    cout << "Enter the second number: ";
                    cin >> y1;
                    getSimpleCalc(x1, y1);
                    cout << "Addition is: " << add() << endl;
                    cout << "----------------------------------------" << endl;
                    break;

                    case 2:
                    int x2, y2;
                    cout << "Enter the first number: ";
                    cin >> x2;
                    cout << "Enter the second number: ";
                    cin >> y2;
                    getSimpleCalc(x2, y2);
                    cout << "Subtraction is: " << subtract() << endl;
                    cout << "----------------------------------------" << endl;
                    break;

                    case 3:
                    int x3, y3;
                    cout << "Enter the first number: ";
                    cin >> x3;
                    cout << "Enter the second number: ";
                    cin >> y3;
                    getSimpleCalc(x3, y3);
                    cout << "Multiplication is: " << multiply() << endl;
                    cout << "----------------------------------------" << endl;
                    break;

                    case 4:
                    int x4, y4;
                    cout << "Enter the first number: ";
                    cin >> x4;
                    cout << "Enter the second number: ";
                    cin >> y4;
                    getSimpleCalc(x4, y4);
                    cout << "Division is: " << divide() << endl;
                    cout << "----------------------------------------" << endl;
                    break;

                    default:
                    cout << "Enter Valid selection!" << endl;
                    break;
                  }
                }while(choice1 != 0);
                cout << "Thank you for using the Simple Calculator." << endl;
                cout << "******************************************************" << endl;
             break;
             case 2:
             int choice2;
             cout << "----------------Scientific calculator---------------" << endl;
             do{
               cout << "Choose operation to perform: " << endl
                    << "1. Sine operation" << endl
                    << "2. Cosine operation" << endl
                    << "3. Tangent operation" << endl
                    << "4. Inverse of Sine operation" << endl
                    << "5. Inverse of Cosine operation" << endl
                    << "6. Inverse of Tangent operation" << endl
                    << "7. Square root operation" << endl
                    << "8. Exponential operation" << endl
                    << "9. Log operation" << endl
                    << "10. Log operation[With base 10]" << endl
                    << "0. Exit." << endl;
                    cin >> choice2;
                    switch(choice2){
                      case 1:
                      int x5;
                      cout << "Enter the number: ";
                      cin >> x5;
                      getScientificCalc(x5);
                      cout << "Sine operation gives: " << Sin() << endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 2:
                      int x6;
                      cout << "Enter the number: ";
                      cin >> x6;
                      getScientificCalc(x6);
                      cout << "cosine operation gives: " << Cos() << endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 3:
                      int x7;
                      cout << "Enter the number: ";
                      cin >> x7;
                      getScientificCalc(x7);
                      cout << "Tangent operation gives: " << Tan() << endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 4:
                      int x11;
                      cout << "Enter the number: ";
                      cin >> x11;
                      getScientificCalc(x11);
                      cout << "Inverse of Sine gives: " << InSin() << endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 5:
                      int x12;
                      cout << "Enter the number: ";
                      cin >> x12;
                      getScientificCalc(x12);
                      cout << "Inverse of Cosine gives: " << InCos() << endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 6:
                      int x13;
                      cout << "Enter the number: ";
                      cin >> x13;
                      getScientificCalc(x13);
                      cout << "Inverse of Tangent gives: " << InTan() << endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 7:
                      int x8;
                      cout << "Enter the number: ";
                      cin >> x8;
                      getScientificCalc(x8);
                      cout << "Square root of " << x8 <<" gives: " << SquareRoot() << endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 8:
                      int x9, x10;
                      cout<<"Enter the number : ";
                      cin>>x9;
                      cout<<"Enter the exponent : ";
                      cin>>x10;
                      getExScientificcalc(x9, x10);
                      cout<<"Exponent = "<< Exp() <<endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 9:
                      int x14;
                      cout << "Enter a number: ";
                      cin >> x14;
                      // getScientificCalc(x14);
                      cout<<"Log = "<< log(x14) <<endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      case 10:
                      int x15;
                      cout << "Enter a number: ";
                      cin >> x15;
                      getScientificCalc(x15);
                      cout<<"Log with base 10 = "<< logTen() <<endl;
                      cout << "----------------------------------------" << endl;
                      break;

                      default:
                      cout << "Enter Valid selection" << endl;
                      break;
                    }
             }while(choice2 != 0);
             cout << "Thank you for using the Scientific Calculator." << endl;
             cout << "******************************************************" << endl;
             break;
             default:
             cout << "\nRe-Use Again. " << endl;
             break;
           }
    }while( choice != 0);
    cout << "Thank you! :) " << endl;
  }
};

int main(){

  // hybridCalc mrCoder;
  // mrCoder.start();
  hybridCalc user1;
  user1.start();

  return 0;
}
