#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  int choice,minutes;
  string phone;
  // loop will run until user enter 3 as choice
  while(true)
  {
    double bill=0.0,stage1=0.0,stage2=0.0;
    cout << "Welcome to Phony System 1.0" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Compute Bill for Business Customer" << endl;
    cout << "2. Compute Bill for Regular Customer" << endl;
    cout << "3. Exit" << endl;
    cout << "Choice?" << endl;
    cin >> choice;
    // Business Customer
    
    if(choice==1)
    {
      cout << "Compute Bill for Business Customer" << endl;
      cout << "----------------------------------" << endl;
      
      // get phone number and minutes used from user
      cout << "Enter Phone Number?" << endl;
      cin >> phone;
      cout << "Enter Minutes Used" << endl;
      cin >> minutes;
      cout << "------------------------------"<<endl;
      cout << "Bill for " << phone << endl;
      cout << "------------------------------"<<endl;
      cout << "Total Minutes Used "<<minutes<<endl;
      
      // monthly base payment
      bill = 99.99;
      cout  <<"Monthly Base Payment $ "<< right << fixed << setprecision(2) << setw(8) << bill << endl;
      
      // next 100 minutes
      if(minutes > 600 && minutes <= 700)
      {
        stage1 = (minutes - 600) * 0.45;
        bill = bill + stage1;
      }
        
      // remaining minutes 
      else if(minutes > 700)
      {
        stage1 = 100 * 0.45;
        stage2 = (minutes - 700) * 0.99;
        bill = bill + stage1 + stage2;
      }    
      
      // print monthly base payment, stage 1 charge, stage 2 charge, subtotal, tax, and total charge
      cout << "Stage 1 Charge $ " << right << fixed << setprecision(2) << setw(8) << stage1 << endl;
      
      cout << "Stage 1 Charge $ " << right <<  fixed << setprecision(2) << setw(8) << stage2 << endl;
      cout << "Subtotal $ " << right << fixed  << setprecision(2)<<setw(8) << bill << endl;
      cout << "---------" << endl;
      cout << "Tax (7.35%) $ " << right << fixed << setprecision(2)<<setw(8) << bill*0.0735 << endl;
      bill = bill + bill * 0.0735;
      cout << "Total Charges $ " << right << fixed << setprecision(2) << setw(8) << bill << endl;
    }
      
    // Regular Customer
    else if(choice == 2)
    {
      cout << "Compute Bill for Regular Customer" << endl;
      cout << "----------------------------------" << endl;
      
      // get phone number and minutes used from user
      cout << "Enter Phone Number?" << endl;
      cin >> phone;
      cout << "Enter Minutes Used?" << endl;
      cin >> minutes;
      cout << "------------------------------" << endl;
      cout << "Bill for " << phone << endl;
      cout << "------------------------------" << endl;
      cout << "Total Minutes Used? " << minutes << endl;
      
      // monthly base payment
      bill = 29.99;
      cout << "Monthly Base Payment $ " << 
right << fixed << setprecision(2) << setw(8) << bill << endl;
      
      // next 250 minutes
      if(minutes > 200 && minutes <= 450)
      {
        stage1 = (minutes - 200) * 0.45;
        bill = bill + stage1;
      }
        
      // remaining minutes 
      else if(minutes > 700)
      {
        stage1 = 250 * 0.45;
        stage2 = (minutes - 450) * 0.88;
        bill = bill + stage1 + stage2;
      }  
      
      // print monthly base payment, stage 1 charge, stage 2 charge, subtotal, tax, and total charge
      cout << "Stage 1 Charge $ " << right << fixed << setprecision(2) << setw(8) << stage1 << endl;
      cout << "Stage 2 Charge $ " << right << fixed << setprecision(2) << setw(8) << stage2 << endl;
      cout << "Subtotal $ " << right << fixed << setprecision(2) << setw(8) << bill << endl;
      cout << "---------" << endl;
      cout << "Tax (7.35%) $ " << right << fixed << setprecision(2)<< setw(8) << bill * 0.0735 << endl;
      bill = bill + bill * 0.0735;
      cout << "Total Charges $ " << right << fixed << setprecision(2) << setw(8) << bill << endl;
    }
    // Error 
    else if(choice >= 4 || choice <= 0)
    {
      cout << "That is an illegal choice. Please retry\n" << endl;
    cin >> choice;
      if(choice >=4 || choice <= 0)
      cout << "That is an illegal choice. Please retry\n" << endl;
      cout << "Welcome to Phony System 1.0" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Compute Bill for Business Customer" << endl;
    cout << "2. Compute Bill for Regular Customer" << endl;
    cout << "Choice?" << endl;
    cin >> choice;
      
       if(choice == 1)
    cout << "\nText of the bill for a business customer is here\n" << endl;
    cout << "Welcome to Phony System 1.0" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Compute Bill for Business Customer" << endl;
    cout << "2. Compute Bill for Regular Customer" << endl;
    cout << "Choice?" << endl;
    cin >> choice; 

      if(choice == 2)
    cout << "\nText of the bill for a regular customer is here\n" << endl;
    cout << "Welcome to Phony System 1.0" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Compute Bill for Business Customer" << endl;
    cout << "2. Compute Bill for Regular Customer" << endl;
    cout << "Choice?" << endl;
    cin >> choice; 
      // Exit
      if(choice == 3) break;  
      }
      
    // Exit 
    else if(choice == 3)
    {
      break;
    }
  }
  return 0;
}
