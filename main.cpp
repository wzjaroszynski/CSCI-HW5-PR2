//Programer: Wojtek Jaroszynski
//Date: 09-21-22
//handout 2

#include <iostream>
#include <fstream>
#include <string>
using  namespace std;

int main() {

  int dataTemp;
  int sumData = 0;
  int counter = 0;
  

  //load input file
  ifstream inFile;// delclare stream variables
  inFile.open("NumberData1.txt");

  while (inFile >> dataTemp)
    {

    
      cout << dataTemp << endl;

      //check data validity
      if(dataTemp >= 0)
      {
       sumData = sumData +dataTemp;
       counter++;
      }
      else 
      {
        cout << "negative data encountered of " << dataTemp << "," << endl;
        break;
      }
    }
  cout << "will not use rest of data" << endl;
  cout << "the sum of the valid data is: " << sumData << endl;
  cout << "The number of valid data points is: " << counter << endl;
  cout << "average of the valid data is: " << (static_cast<double>(sumData)/counter) << endl;
    
  
 
}