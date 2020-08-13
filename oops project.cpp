
#include<iostream>
#include <string.h>
#include<stdlib.h>
#include <iomanip>
#include<stdexcept>

using namespace std;

void vline(char ch)

{

  for (int i=80;i>0;i--)

  cout<<ch;
  cout<<"\n";
}



class Bus
{

public:

    int bus_id;
    string bus_name;
    int bus_no;
    int no_seats[32]={0};

    string departure;
    string arrival;
    string destination;
    string from;


    virtual void display(Bus b[],int z)
    {

    }

    virtual void display1(Bus b[],int z)
    {


    }




};


class ac:public Bus
{

public:

   void display(Bus b[],int z)
    {

        for(int i=0;i<z;i++)
        {

        cout<<"\n\nBus id "<<b[i].bus_id<<endl;
        cout<<"Bus name "<<b[i].bus_name<<endl;
        cout<<"Bus No "<<b[i].bus_no<<endl
        <<"From "<<b[i].from<<endl<<"To "<<b[i].destination<<endl<<"Departure "<<b[i].departure<<endl<<"Arrival "<<b[i].arrival<<endl;

        }

    }


     void display1(Bus b[],int z)
    {

        cout<<"bus id:"<<setw(20)<<"bus name"<<setw(20)<<"from"<<setw(18)<<"to"<<setw(20)<<"departure"<<setw(20)<<"arrival\t"<<endl;

        for(int i=0;i<z;i++)
        {

        cout<<b[i].bus_id<<setw(20)<<b[i].bus_name<<setw(20)<<b[i].from<<setw(20)<<b[i].destination<<setw(20)<<b[i].departure<<setw(20)<<b[i].arrival<<setw(20)<<"\n"<<endl<<"from derived";

        }

    }


};



class non_ac:public Bus
{

public:

       void display(Bus b[],int z)
    {

        for(int i=0;i<z;i++)
        {

        cout<<"\n\nBus id "<<b[i].bus_id<<endl<<"Bus name "<<      b[i].bus_name<<endl<<"Bus No "<<b[i].bus_no<<endl
        <<"From "<<b[i].from<<endl<<"To "<<b[i].destination<<endl<<"Departure "<<b[i].departure<<endl<<"Arrival "<<b[i].arrival<<endl;

        }

    }

     void display1(Bus b[],int z)
    {

        cout<<"bus id:"<<setw(20)<<"bus name"<<setw(20)<<"from"<<setw(18)<<"to"<<setw(20)<<"departure"<<setw(20)<<"arrival\t"<<endl;

        for(int i=0;i<z;i++)
        {

        cout<<b[i].bus_id<<setw(20)<<b[i].bus_name<<setw(20)<<b[i].from<<setw(20)<<b[i].destination<<setw(20)<<b[i].departure<<setw(20)<<b[i].arrival<<setw(20)<<"\n"<<endl<<"from derived";
        }

    }

};



class Exception
{
public:
    int errNo;
    string errMsg;
    Exception()
	{

    }

    Exception(int n, string msg)
	{
        	errNo=n;
        	errMsg=msg;
    	}

    void showError(){
    cout<<errNo<<":"<<errMsg<<endl;
    }

};

class Customer
{

public:

//    Customer c;
    int custid;
    string custname;
    string mobile;

    string email;
    string address;

    string username;
    string password;
    //friend class Ticket_booking;


    static void cdisplay(Customer b[],int z)
    {

        for(int i=0;i<z;i++)
        {

        cout<<"\n\nCustomer Id "<<b[i].custid<<endl<<"Customer name "<<b[i].custname<<endl<<"Mobile No "<<b[i].mobile<<endl
        <<"Email "<<b[i].email<<endl<<"Address "<<b[i].address<<endl<<"Username "<<b[i].username<<"\n"<<endl;

        }

    }
};



class Ticket_booking
{

public:

    int booking_id;
    string booking_type;

    int booking_date;

    int seet;
    int n;

    int q,j=0;

    Customer c[10];


    static void tdisplay(Ticket_booking b[],int z)
    {

        for(int i=0;i<z;i++)
        {

        cout<<"\n\nBooking Id "<<b[i].booking_id<<endl<<"Booking type "<<b[i].booking_type<<endl<<"Date "<<b[i].booking_date<<"\n"<<endl;

        }

    }

    void num(int k,Bus b[])
    {

       for(int s=0;s<2;s++)
        {

          if(b[s].bus_id==k)
          {

            cout<<"success"<<endl;

            q=s;

            vline('*');

           cout<<"Bus id: \t"<<b[s].bus_id

           <<"\nBus name: \t"<<b[s].bus_name<<"\t\tArrival time: \t"

           <<b[s].arrival<<"\tDeparture time:"<<b[s].departure

           <<"\nFrom: \t\t"<<b[s].from<<"\t\tTo: \t\t"<<

           b[s].destination<<"\n";

           vline('*');


            for(int l=0;l<12;l++)
            {

                cout<<"seat no :"<<l+1<<"  is :"<<b[s].no_seats[l]<<endl;

            }

            cout<<"how many passengers need to be reserved?"<<endl;

            cin>>n;

            for(int p=0;p<n;p++)
            {

             ty:  cout<<"enter the seat number to be reserved"<<endl;

             cin>>seet;

             if(b[s].no_seats[seet-1]!=1)
             {

                   b[s].no_seats[seet-1]=1;
                   cout<<"Enter customer id"<<endl;

                   cin>>c[j].custid;

                   cout<<"Enter customer address"<<endl;

                   cin>>c[j].address;

                   cout<<"Enter customer name"<<endl;

                   cin>>c[j].custname;

                   cout<<"Enter customer mail"<<endl;

                   cin>>c[j].email;

                   cout<<"Enter customer mobile number"<<endl;

                   cin>>c[j].mobile;

                   cout<<"Enter username "<<endl;

                   cin>>c[j].username;

                   cout<<"Set the password"<<endl;

                   cin>>c[j].password;

                   j++;
             }
             else
             {
                goto ty;
             }
            }



            break;


          }
          else
            cout<<"bus not available"<<endl;

        }

           for(int l=0;l<12;l++)
             {

                cout<<"seat no :"<<l+1<<"  is :"<<b[q].no_seats[l]<<endl;

             }

    }



};


//main
int main()
{

    Ticket_booking t[10];

    Ticket_booking tim;

    ac a;

    non_ac abd;

    non_ac n[10];

    int ch;

    int id,i=0,j=0,k=0;

    string name;
    int no;

    int seats;

    string type;

    string types;

    int l,q,num;

    Bus b[10];


      vline('*');

      for(;;)
      {

        cout<<"\n\t\tEnter the operation you want to perform\n\t\t1-> Add AC bus\n\t\t2-> Add Non-AC bus\n\t\t3-> Ticket booking\n"<<
        "\t\t4-> Display Bus details\n\t\t5-> Display ticket booking Details\n\t\t6-> Exit\n"<<endl;

        vline('*');

        cout<<"\n";

        cout<<"Enter the choice: ";

        cin>>ch;

        if(ch<1 || ch>6)
        {
            cout<<"123,Sorry...your transaction cannot be processed"<<endl;
            exit(0);
        }

        system("CLS");






        switch(ch)
        {

            case 1:cout<<"Enter the bus_id"<<endl;

                   cin>>b[i].bus_id;

                   cout<<"Enter bus name"<<endl;

                   cin>>b[i].bus_name;

                   cout<<"Enter bus number"<<endl;

                   cin>>b[i].bus_no;

                   cout<<"Enter the destination"<<endl;

                   cin>>b[i].destination;

                   cout<<"Enter the present place from where the journey begins"<<endl;

                   cin>>b[i].from;

                   cout<<"Enter the departure time"<<endl;

                   cin>>b[i].departure;

                   cout<<"Enter the arrival time"<<endl;

                   cin>>b[i].arrival;
                   i++;
                   break;


            case 2:cout<<"Enter the bus_id"<<endl;

                   cin>>n[k].bus_id;

                   cout<<"Enter bus name"<<endl;

                   cin>>n[k].bus_name;

                   cout<<"Enter bus number"<<endl;

                   cin>>n[k].bus_no;

                   /*cout<<"Enter no of seats"<<endl;
                   cin>>n[k].no_seats;*/
                    cout<<"Enter the destination"<<endl;

                   cin>>n[k].destination;

                   cout<<"Enter the present place from where the journey begins"<<endl;

                   cin>>n[k].from;

                   cout<<"Enter the departure time"<<endl;

                   cin>>n[k].departure;

                   cout<<"Enter the arrival time"<<endl;

                   cin>>n[k].arrival;
                   k++;

                   break;



            case 3:cout<<"Book for 1-> AC type\n 2-> Non-AC type"<<endl;

                   cin>>q;

                   cout<<"available buses are:"<<endl;

                   if(q==1)
                   {

                     a.display1(b,i);

                     cout<<"enter the bus id to reserve"<<endl;

                     cin>>num;

                     tim.num(num,b);

                   }
                   if(q==2)
                   {

                    abd.display1(n,k);

                    cout<<"enter the bus id to be reserved"<<endl;

                    cin>>num;

                    tim.num(num,n);

                   }
                   cout<<"Enter booking id"<<endl;

                   cin>>t[j].booking_id;

                   cout<<"Enter booking type"<<endl;

                   cin>>t[j].booking_type;

                   cout<<"Enter booking date"<<endl;

                   cin>>t[j].booking_date;
                   j++;
                   break;


            case 4:a.display(b,i);
                   abd.display(n,k);
                   break;


            case 5://Customer::cdisplay(c,j);
                   Ticket_booking::tdisplay(t,j);
                   break;


            case 6:exit(0);
                    break;


        }

       }





}

