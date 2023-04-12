#include <iostream>
using namespace std;
int main(){
    string pin ="0000",reference,enteredpin;
    int balance= 1000,option,choice,number,NumAttempts=0;
    double amount;
    
       while(true) {// Authentication
        cout << "Enter MOMO Pin: ";
        cin >> enteredpin;
        if (enteredpin != pin) {
            NumAttempts++;
            if (NumAttempts >= 3) {
                cout << "Too many wrong attempts. Exiting." << endl;
                return 0; }
                
            cout << "Incorrect PIN. Please try again." << endl;  continue;}
            
      NumAttempts = 0; // Reset wrong attempts counter
      
          /*Menu*/
        cout << "Select an option:" << endl;
        cout << "1. Change Pin" << endl;
        cout << "2. Check balance" << endl;
        cout << "3. Send money" << endl;
        cout << "4. Exit" << endl;
        cin >> option;
        
                /*Option 1: Reset pin*/
        if (option == 1) {
            cout<<"Enter current pin: ";
            cin>>enteredpin;
            if(enteredpin==pin){
            cout << "Enter new Pin: ";
            cin >> pin;
            cout << "Pin reset successful." << endl;return 0;
        }
        else{cout<<"Wrong pin. Exiting."<<endl;return 0;
                   }}
                   
                   
                   //Option 2: Check balance
        else if (option == 2) {cout<<"Enter pin to continue action: ";
        cin>>enteredpin;
        if(enteredpin==pin){
        cout<<"Charged fee is Ghs 0.00"<<endl;
            cout << "Current balance is Ghs " << balance << endl;return 0;
        }
        else{cout<<"Wrong pin. Exiting."<<endl;return 0;}}
        
        /*send money*/
        if(option==3){cout<<"Enter receipient number: ";
      cin>>number;
      cout<<"Enter amount: "; 
      cin>>amount;
      if(amount>balance){cout<<"Insufficient balance to continue transaction."<<endl; return 0;} cout<<"Enter reference: ";
      cin>>reference;
      cout<<"Enter Pin to proceed: ";
      cin>>enteredpin;
      
   if (enteredpin==pin){cout<<"Press 1 to continue your transaction or 2 to exit"<<endl;}
   else{cout<<"Wrong pin input. Exiting"<<endl; return 0;}
      cin>>choice;
      if (choice==2){cout<<"Transaction failed. Exiting."<<endl; return 0;}
    
      if (choice==1){cout<< "Transaction Successful."<<endl;
      cout<<"You have successfully transferred Ghs "<<amount<< " to "<<number<< ", with reference: "<<reference<<"."<<endl;
      
      cout<<"Your current balance is Ghs " <<balance-amount<<"."<<endl;
      cout<<"TRANSACTION WAS FREE."<<endl; 
      cout<<"Thank you for using MTN MOMO."<<endl;return 0;}}
      
      
      //option 4: Exit
      if (option==4){cout<<"\"Thank you for using MTN MOMO. Exiting\""<<endl; return 0;}
      
         /*Invalid option*/
        else {
            cout << "Invalid option. Follow the steps and choose a valid option from 1 to 4." << endl;
        }
       }
}
