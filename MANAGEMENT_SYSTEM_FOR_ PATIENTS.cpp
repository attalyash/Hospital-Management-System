#include<bits/stdc++.h>
using namespace std;
class Sign_up
{
    public:
    string name,address,email_id,gender;
    int age;
    long long int phone_no;
    void get()
    {
        cout<<right<<setw(60)<<setfill(' ')<<"------------------------------------------------"<<endl<<endl;
        cout<<right<<setw(60)<<setfill(' ')<<"WELCOME TO AAYUSH WELLNESS HOSPITAL MANAGEMENT SYSTEM FOR PATIENTS"<<endl;
        cout<<endl<<endl;
        cout<<right<<setw(60)<<setfill(' ')<<"------------------------------------------------"<<endl;
        cout<<"Enter your Name: ";
        getline(cin,name);
        cout<<"Enter your Gender: ";
        cin>>gender;
        cout<<"Enter Age: ";
        cin>>age;
        cin.ignore(256,'\n');
        cout<<"Enter Address: ";
        getline(cin,address);
        cout<<"Enter Email-Id: ";
        cin>>email_id;
        cout<<"Enter Phone Number: ";
        cin>>phone_no;
    }
};
class Locality : public Sign_up
{
public:
    int locality,hospital,choice;
    string disease;
    void get1()
    {
        cout<<endl<<"---------------------HOSPITAL NAMES---------------------"<<endl<<endl;
        cout<<"Choose the CITY from below options";
        cout<<"Enter 1 for MUMBAI: "<<endl;
        cout<<"Enter 2 for DELHI: "<<endl;
        cout<<"Enter 3 for CHANDIGARH: "<<endl;
        cout<<"Enter 4 for CHENNAI: "<<endl;
        cin>>locality;
        Hospital();
        Disease();
        Appointment();
        print();
    }
    void Hospital()
    {
        cout<<"Select the hospital names from your locality"<<endl;
        if(locality == 1)
        {
            cout<<"Enter 1 for Nanavati Hospital: "<<endl;
            cout<<"Enter 2 for Fortis Hospital: "<<endl;
            cout<<"Enter 3 for Wockhardt Hospitals: "<<endl;
            cout<<"Enter 4 for Bombay Hospital: "<<endl;
            cout<<"Enter 5 for Hiranandani Hospital: "<<endl;
            cout<<"Enter 6 for Sterling Hospital: "<<endl;
            cout<<"Enter 7 for Global Hospital: "<<endl;
            cout<<"Enter 8 for Lilavati Hospital: "<<endl;
            cout<<"Enter 9 for Gune Hospital: "<<endl;
            cout<<"Enter 10 for Breach Candy Hospital: "<<endl;
            cin>>hospital;
            cout<<"Select doctors: ";
            cout<<"Enter 1 for Dr. Sharma"<<endl;
            cout<<"Enter 2 for Dr. Gune"<<endl;
            cout<<"Enter 3 for Dr. Sachin"<<endl;
            cout<<"Enter 4 for Dr. Mahale"<<endl;
            cin>>choice;
        }
        if(locality == 2)
        {
            cout<<"Enter 1 for Dharamshila Narayana Superspeciality Hospital: "<<endl;
            cout<<"Enter 2 for Fortis Hospital: "<<endl;
            cout<<"Enter 3 for Wockhardt Hospitals: "<<endl;
            cout<<"Enter 4 for Bhagat Hospital: "<<endl;
            cout<<"Enter 5 for City Hospital: "<<endl;
            cout<<"Enter 6 for Sterling Hospital: "<<endl;
            cout<<"Enter 7 for Mahindru Hospital: "<<endl;
            cout<<"Enter 8 for Aastha Hospital: "<<endl;
            cout<<"Enter 9 for Viola Hospital: "<<endl;
            cout<<"Enter 10 for Vidya Hospital: "<<endl;
            cin>>hospital;
            cout<<"Select doctors: ";
            cout<<"Enter 1 for Dr. Singh"<<endl;
            cout<<"Enter 2 for Dr. Arora"<<endl;
            cout<<"Enter 3 for Dr. Kohli"<<endl;
            cout<<"Enter 4 for Dr. Kumar"<<endl;
            cin>>choice;
        }
         if(locality == 3)
        {
            cout<<"Enter 1 for Max Hospital: "<<endl;
            cout<<"Enter 2 for Healing Hospital: "<<endl;
            cout<<"Enter 3 for Chaitanya Hospitals: "<<endl;
            cout<<"Enter 4 for Mukat Hospital: "<<endl;
            cout<<"Enter 5 for Dharam Hospital: "<<endl;
            cout<<"Enter 6 for Sterling Hospital: "<<endl;
            cout<<"Enter 7 for Apollo Hospital: "<<endl;
            cout<<"Enter 8 for Healing Hospital: "<<endl;
            cout<<"Enter 9 for Santokh Hospital: "<<endl;
            cout<<"Enter 10 for Landmark Hospital: "<<endl;
            cin>>hospital;
            cout<<"Select doctors: ";
            cout<<"Enter 1 for Dr. Yogi"<<endl;
            cout<<"Enter 2 for Dr. Bansal"<<endl;
            cout<<"Enter 3 for Dr. Bawa"<<endl;
            cout<<"Enter 4 for Dr. Kang"<<endl;
            cin>>choice;
        }
         if(locality == 4)
        {
            cout<<"Enter 1 for Dr. Mehta's Hospital: "<<endl;
            cout<<"Enter 2 for Fortis Hospital: "<<endl;
            cout<<"Enter 3 for Wockhardt Hospitals: "<<endl;
            cout<<"Enter 4 for Billroth Hospital: "<<endl;
            cout<<"Enter 5 for City Hospital: "<<endl;
            cout<<"Enter 6 for Gleneangles Hospital: "<<endl;
            cout<<"Enter 7 for Unittas Hospital: "<<endl;
            cout<<"Enter 8 for Apollo Hospital: "<<endl;
            cout<<"Enter 9 for Kauvery Hospital: "<<endl;
            cout<<"Enter 10 for Uma Hospital: "<<endl;
            cin>>hospital;
            cout<<"Select doctors: "<<endl<<endl;
            cout<<"Enter 1 for Dr. Raghupati"<<endl;
            cout<<"Enter 2 for Dr. Raman"<<endl;
            cout<<"Enter 3 for Dr. Suresh"<<endl;
            cout<<"Enter 4 for Dr. Krishnan Vasudevan"<<endl;
            cin>>choice;
        }
        else if(locality>4)
        {
            cout<<"Invalid";
            exit(0);
        }
    }
    void Disease()
    {
        cout<<"---------------------DISEASE---------------------"<<endl<<endl;
        cout<<"Enter the Disease: ";
        cin>>disease;
    }
    string ans;
    int a;
    void Appointment()
    {
        cout<<endl<<"---------------------APPOINTMENT---------------------"<<endl<<endl;
        cout<<"Do you wish to book the Appointment: Yes/No ";
        cin>>ans;
        if(ans=="Yes"|| ans=="yes"|| ans=="YES")
        {
           cout<<"APPOINTMENT BOOKED SUCCESSFULLY!!!!"<<endl<<endl;
           srand(time(0));
           a=(rand()%15042) +1;
           cout<<a<<endl;
        }
    }
    void print()
    {
        if(ans=="Yes"|| ans=="yes"|| ans=="YES")
        {
        cout<<"---------------------Patient Details--------------------- "<<endl;
        cout<<"Patient Name: "<<name<<endl;
        cout<<"Patient Age: "<<age<<endl;
        cout<<"Patient Gender: "<<gender<<endl;
        cout<<"Patient Address: "<<address<<endl;
        cout<<"Patient E-mail: "<<email_id<<endl;
        cout<<"Patient Phone no: "<<phone_no<<endl;
        string abc,def;
        if(locality==1)
        {
            cout<<"Patient Locality: MUMBAI"<<endl;
            if(hospital==1)
                abc="Nanavati Hospital";
            if(hospital==2)
                abc="Fortis Hospital";
            if(hospital==3)
                abc="Wockhardt Hospitals";
            if(hospital==4)
                abc="Bombay Hospital";
            if(hospital==5)
                abc="Hiranandani Hospital";
            if(hospital==6)
                abc="Sterling Hospital";
            if(hospital==7)
                abc="Global Hospital";
            if(hospital==8)
                abc="Lilavati Hospital";
            if(hospital==9)
                abc="Gune Hospital";
            if(hospital==10)
                abc="Breach Candy Hospital";
            cout<<"Hospital Name: "<<abc<<endl;
            if(choice==1){
                cout<<"Doctor Name: Dr. Sharma"<<endl; cout<<"Doctor's Fees: Rs. 1000"<<endl;}
            if(choice == 2){
                cout<<"Doctor Name: Dr. Gune"<<endl;  cout<<"Doctor's Fees: Rs. 1500"<<endl;}
            if(choice == 3){
                cout<<"Doctor Name: Dr. Sachin"<<endl;  cout<<"Doctor's Fees: Rs. 500"<<endl;}
            if(choice == 4){
                cout<<"Doctor Name: Dr. Mahale"<<endl;  cout<<"Doctor's Fees: Rs. 2000"<<endl;}

        }
        if(locality==2)
        {
            cout<<"Patient Locality: DELHI"<<endl;
            if(hospital==1)
                abc="Dharamshila Narayana Superspeciality Hospital";
            if(hospital==2)
                abc="Fortis Hospital";
            if(hospital==3)
                abc="Wockhardt Hospitals";
            if(hospital==4)
                abc="Bhagat Hospital";
            if(hospital==5)
                abc="City Hospital";
            if(hospital==6)
                abc="Sterling Hospital";
            if(hospital==7)
                abc="Mahindru Hospital";
            if(hospital==8)
                abc="Aastha Hospital";
            if(hospital==9)
                abc="Viola Hospital";
            if(hospital==10)
                abc="Vidya Hospital";
            cout<<"Hospital Name: "<<abc<<endl;
            if(choice==1){
                cout<<"Doctor Name:Dr. Singh"<<endl;  cout<<"Doctor's Fees: Rs. 1000"<<endl;}
            if(choice == 2){
                cout<<"Doctor Name:Dr. Arora"<<endl;  cout<<"Doctor's Fees: Rs. 1500"<<endl;}
            if(choice == 3){
                cout<<"Doctor Name:Dr. Kohli"<<endl;  cout<<"Doctor's Fees: Rs. 500"<<endl;}
            if(choice == 4){
                cout<<"Doctor Name:Dr. Kumar"<<endl;  cout<<"Doctor's Fees: Rs. 2000"<<endl;}
        }
        if(locality==3)
        {
            cout<<"Patient Locality: CHANDIGARH"<<endl;
            if(hospital==1)
                abc="Max Hospital";
            if(hospital==2)
                abc="Healing Hospital";
            if(hospital==3)
                abc="Chaitanya Hospitals";
            if(hospital==4)
                abc="Mukat Hospital";
            if(hospital==5)
                abc="Dharam Hospital";
            if(hospital==6)
                abc="Sterling Hospital";
            if(hospital==7)
                abc="Apollo Hospital";
            if(hospital==8)
                abc="Healing Hospital";
            if(hospital==9)
                abc="Santokh Hospital";
            if(hospital==10)
                abc="Landmark Hospital";
            cout<<"Hospital Name: "<<abc<<endl;
            if(choice==1){
                cout<<"Doctor Name: Dr. Yogi"<<endl;  cout<<"Doctor's Fees: Rs. 1000"<<endl;}
            if(choice == 2){
                cout<<"Doctor Name: Dr. Bansal"<<endl;  cout<<"Doctor's Fees: Rs. 1500"<<endl;}
            if(choice == 3){
                cout<<"Doctor Name: Dr. Bawa"<<endl;  cout<<"Doctor's Fees: Rs. 500"<<endl;}
            if(choice == 4){
                cout<<"Doctor Name: Dr. Kang"<<endl; cout<<"Doctor's Fees: Rs. 2000"<<endl;}

        }
        if (locality==4)
        {
            cout<<"Patient Locality: CHENNAI"<<endl;
            if(hospital==1)
                abc="Dr. Mehta's Hospital";
            if(hospital==2)
                abc="Fortis Hospital";
            if(hospital==3)
                abc="Wockhardt Hospitals";
            if(hospital==4)
                abc="Billroth Hospital";
            if(hospital==5)
                abc="City Hospital";
            if(hospital==6)
                abc="Gleneangles Hospital";
            if(hospital==7)
                abc="Unittas Hospital";
            if(hospital==8)
                abc="Apollo Hospital";
            if(hospital==9)
                abc="Kauvery Hospital";
            if(hospital==10)
                abc="Uma Hospital";
            cout<<"Hospital Name: "<<abc<<endl;
            if(choice==1){
                cout<<"Doctor Name: Dr. Raghupati"<<endl;  cout<<"Doctor's Fees: Rs. 1000"<<endl;}
            if(choice == 2){
                cout<<"Doctor Name: Dr. Raman"<<endl;  cout<<"Doctor's Fees: Rs. 1500"<<endl;}
            if(choice == 3){
                cout<<"Doctor Name: Dr. Suresh"<<endl; cout<<"Doctor's Fees: Rs. 500"<<endl;}
            if(choice == 4){
                cout<<"Doctor Name: Dr. Krishnan Vasudevan"<<endl;  cout<<"Doctor's Fees: Rs. 2000"<<endl;}
        }
        cout<<"Patient Disease: "<<disease<<endl;
        cout<<"Patient Unique Id: "<<a;
        }
        cout<<endl<<"---------------------THANK YOU FOR USING AYUSH WELLNESS MANAGEMENT SYSTEM---------------------";
    }
};
int main()
{
    Locality a;
    a.get();
    a.get1();
}
