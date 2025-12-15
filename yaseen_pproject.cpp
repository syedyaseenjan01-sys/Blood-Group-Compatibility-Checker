#include <iostream>
#include <string>
using namespace std;

int main(){
	string bloodGroup;
	
	cout<<"Enter your blood group(O-,O+,A-,A+,B-,B+,AB-,AB+):";
	cin>>bloodGroup;
	
	if(bloodGroup=="O-"){
	cout<<"can donate To:O-,O+,A-,A+,B-,B+,AB-,AB+"<<endl;
	cout<<"Can Receive from:O-"
<<endl;
}
    else if (bloodGroup=="O+"){
    cout<<"Can donate TO:O+,A+,B+,AB+"<<endl;
	}
	else if(bloodGroup=="A-"){
	cout<<"Can donate TO:A-,A+,AB-,AB+"<<endl;
	cout<<"Can Receive from:O-,A-"<<endl;
	}
	else if(bloodGroup=="A+"){
	cout<<"Can donate TO:A+,AB+"<<endl;
	cout<<"Can Receive From:O-,O+,A-,A+"<<endl;
	}
	else if(bloodGroup=="B-"){
	cout<<"Can donateTO:B-,B+,AB-,AB+"<<endl;
	cout<<"Can Receive From:O-,B-"<<endl;
	}
	else if(bloodGroup=="B+"){
	cout<<"Can donateTO:B+,AB+"<<endl;
	cout<<"Can Receive From:O+,B-,B+"<<endl;
	}
	else if(bloodGroup=="AB-"){
	cout<<"Can donate TO:AB-,AB+"<<endl;
	cout<<"Can Receive From:O-,A-,B-,AB-"<<endl;
	}
	
	else if(bloodGroup=="AB+"){cout<<"Can donateTO:AB+"<<endl;
	}
	else{
	cout<<"Invalid blood group entered."<<endl;
	}
	return 0;
	
}
