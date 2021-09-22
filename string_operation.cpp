#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
   //fullName is the string which is converted to uppercase 
    string fName;
    string lName;
    
    cout<<"Your First Name : ";
    cin>>fName;
    cout<<"Your Last Name : ";
    cin>>lName;
    
    // Concatenation of Two Strings
     string fullName = fName + " " + lName; 
     cout<<"After Concatenation : "<<fullName<<endl;
     
   //using transform() function and ::toupper in STL 
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper); 
     cout<<"After Converting to UpperCase : " << fullName << endl; 
     
   //fullName is the string which is converted to lowercase 
  //using transform() function and ::tolower in STL 
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower); 
     cout<<"After Converting to LowerCase : " << fullName << endl;
     
    //String Length 
    cout << "Length of String : " << fullName.size()<<endl;
    
    //White Space Remove in String
      fullName.erase(remove(fullName.begin(), fullName.end(), ' '), fullName.end());
    cout << "After White Space Removal : " << fullName;
     
     return 0; 
} 


//Output

/*
Your First Name : Himanshu
Your Last Name : Goyal
After Concatenation : Himanshu Goyal
After Converting to UpperCase : HIMANSHU GOYAL
After Converting to LowerCase : himanshu goyal
Length of String : 14
After White Space Removal : himanshugoyal
*/