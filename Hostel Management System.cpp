#include<iostream>
#include<conio.h>
#include<exception>
#include<windows.h>
#include<chrono>
#include<fstream>

using namespace std;
class complaints;


class cpno
{
int cno;
public:
 int getcomplaintno()
 {
  ifstream fin;
  fin.open("complaints//cno.dat",ios::in|ios::binary);
  if(!fin)
  {
   cout<<"sry file not found";
   return(0);
  }
  else
  {
   fin.read((char*)this,sizeof(*this));
   fin.close();
   return(cno);
  }}
  void updatecomplaintno()
  {
   getcomplaintno();
   cno++;
   ofstream fout;
   fout.open("complaints//cno.dat",ios::trunc|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();  }
   void printc()
   {
       cout<<"cno.is"<<cno<<endl;
   }
   void intializec()
   {cno=0;
   ofstream fout;
   fout.open("complaints//cno.dat",ios::trunc|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   }


};
class complaints
  {
 private:
     int complaintno;
     char complaint[300];
     int room;
     cpno c;

 public:
    void getcomplaintno()
    {
        complaintno=c.getcomplaintno();
    }
    void updatecomplaintno()
    {
        c.updatecomplaintno();
    }

    void getcomplaint()

    { char waste[10];
     gets(waste);
     getcomplaintno();
     cout<<"\nplease enter your complaint for complaint no:-"<<++complaintno<<endl;
     gets(complaint);
     cout<<"\n please enter the room no:-";
     cin>>room;

    }
    void printcomplaint()
    {
     cout<<"compaint no is:-"<<complaintno<<"    from room no:-"<<room<<endl;
     cout<<"complaint is:-"<<complaint<<endl<<endl;
    }
    void store_elec_complaint()
    {updatecomplaintno();
     ofstream fout;
     fout.open("complaints\\elec.dat",ios::app|ios::binary);
     fout.write((char*)this,sizeof(*this));
     fout.close();



    }
    void load_all_elec_complaint()
    { ifstream fin;
      fin.open("complaints\\elec.dat",ios::in|ios::binary);
     if(!fin)
     {
      cout<<"file not loaded";
     }
     else{
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
         printcomplaint();
         fin.read((char*)this,sizeof(*this));

     }
     fin.close();
    }
    }
    void store_wooden_complaint()
    { updatecomplaintno();
     ofstream fout;
     fout.open("complaints\\wooden.dat",ios::app|ios::binary);
     fout.write((char*)this,sizeof(*this));
     fout.close();



    }
    void load_all_wooden_complaint()
    { ifstream fin;
      fin.open("complaints\\wooden.dat",ios::in|ios::binary);
     if(!fin)
     {
      cout<<"file not loaded";
     }
     else{
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
         printcomplaint();
         fin.read((char*)this,sizeof(*this));

     }
     fin.close();
    }
    }
    void store_plumber_complaint()
    { updatecomplaintno();
     ofstream fout;
     fout.open("complaints\\plumber.dat",ios::app|ios::binary);
     fout.write((char*)this,sizeof(*this));
     fout.close();




    }
    void load_all_plumber_complaint()
    { ifstream fin;
      fin.open("complaints\\plumber.dat",ios::in|ios::binary);
     if(!fin)
     {
      cout<<"file not loaded";
     }
     else{
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
         printcomplaint();
         fin.read((char*)this,sizeof(*this));

     }
     fin.close();
    }
    }
    void store_clean_complaint()
    { updatecomplaintno();
     ofstream fout;
     fout.open("complaints\\clean.dat",ios::app|ios::binary);
     fout.write((char*)this,sizeof(*this));
     fout.close();



    }
    void load_all_clean_complaint()
    { ifstream fin;
      fin.open("complaints\\clean.dat",ios::in|ios::binary);
     if(!fin)
     {
      cout<<"file not loaded";
     }
     else{
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
         printcomplaint();
         fin.read((char*)this,sizeof(*this));

     }
     fin.close();
    }
    }
    void store_wifi_complaint()
    { updatecomplaintno();
     ofstream fout;
     fout.open("complaints\\wifi.dat",ios::app|ios::binary);
     fout.write((char*)this,sizeof(*this));
     fout.close();



    }
    void load_all_wifi_complaint()
    { ifstream fin;
      fin.open("complaints\\wifi.dat",ios::in|ios::binary);
     if(!fin)
     {
      cout<<"file not loaded";
     }
     else{
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
         printcomplaint();
         fin.read((char*)this,sizeof(*this));

     }
     fin.close();
    }
    }
    void store_ragging_complaint()
    { updatecomplaintno();
     ofstream fout;
     fout.open("complaints\\ragging.dat",ios::app|ios::binary);
     fout.write((char*)this,sizeof(*this));
     fout.close();



    }
    void load_all_ragging_complaint()
    { ifstream fin;
      fin.open("complaints\\ragging.dat",ios::in|ios::binary);
     if(!fin)
     {
      cout<<"file not loaded";
     }
     else{
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
         printcomplaint();
         fin.read((char*)this,sizeof(*this));

     }
     fin.close();
     getch();
    }
    }
  };
int main()
{   //function declarations;
    int dataprint();
    void dataselection();
    void switchchoice(int);
    int userlogin();
    int userlogin(string ,string );
    void registeruser();
    void getdetails(string,string);
    void switchregisteredchoice(int);


	//variable;
	   int input;
	   int choice;
	   char ch='n',v;




	//display page

do{ cout<<endl;
    system("pause");
    system("cls");
	cout<<"|||||||||||||||||||||||||||||HOSTEL MANAGEMENT SYSTEM|||||||||||||||||||||\n\n\n\n\n\n\n\n\n";
	cout<<"PLease enter 1. if complaint is to be registered "<<endl;
	cout<<"PLease enter 2. if complaint is registered (workers side) "<<endl;
	cout<<"PLease enter 3. if user not registered"<<endl;
	cout<<"PLease enter 4. if you want to see user details"<<endl;
	cout<<"PLease enter 5. if you want to exit"<<endl;
    cin>>choice;
	switch(choice)
	{
 case 1:
    {   cout<<"please wait ....";
        Sleep(1000);
        system("cls");
        cout<<"please select the option for the registering complaints";
        choice=dataprint();
        switchchoice(choice);
        main();
        break;

    }
 case 2:
    {   int t;
        cout<<"please wait ....";
        Sleep(1000);
        system("cls");
        cout<<"please select the option for the viewing complaints";
        choice=dataprint();
        if(choice>=1&&choice<=6)
        { cout<<"\nplease login first to see details    ";
         t=userlogin();
        }
        if(t==4)
        {switchregisteredchoice(choice);}
        else
        {
         cout<<" but you dont have specific rights to view";
        }
        main();
        break;
    }
 case 3:
    {  cout<<"\n********THIS IS ADMIN CONSOLE SO ADMIN IS ASKED TO AUTHENTICATE********\n";
       int t=userlogin();
       system("cls");
        if(t==2)
       {cout<<"Welcome to our admin Section here you can now register new user";
        cout<<endl;
        system("cls");
        system("pause");
        registeruser();
        main();
       }
        else if(t==3)
        {

        cout<<"The details entered are incorrect you can not register new user"<<endl;
        Sleep(1000);
        main();

        }
        else
        {
         cout<<"But you dont have admin privlliges"<<endl;
         Sleep(1000);
         main();

        }

        break;
    }
 case 5:
    { exit(0);
     break;
    }
 case 4:
    {   string username,password;
        cout<<"enter the username:-"; cin>>username;
        cout<<"enter the password:-"; cin>>password;
        int t=userlogin(username,password);
       system("cls");
        if(t==2)
       {cout<<"Welcome to our admin Section here you can now register new user";
        cout<<endl;
        system("cls");
        cout<<"you are currently using admin account cgc****";
        main();
       }
        else if(t==3)
        {
        cout<<"The details entered are incorrect "<<endl;
        Sleep(1000);
        main();

        }
        else
        {getdetails(username,password);
         getch();
         Sleep(1000);
         main();

        }
        break;

    }
 case 989:
    {
        break;
    }
 default:
    {   cin.clear();
        fflush(stdin);
        cout<<"invalid input"<<endl;
        cout<<"if you want to enter the valid input again press y "<<endl;
        cin>>ch;

    }
	}
}while(ch=='y'||ch=='Y');

	return 0;
}







int dataprint()
{
 int choiceselection();

cout<<"MENTION ANY TYPE OF COMPLAINT HERE"<<endl;
cout<<"\n\n\n\n\t\t\t\t\t\tPress 1 for INTERNET COMPLAINTS"<<endl;
cout<<"\t\t\t\t\t\tPress 2 for CARPENTER COMPLAINTS"<<endl;
cout<<"\t\t\t\t\t\tPress 3 for PLUMBER COMPLAINTS"<<endl;
cout<<"\t\t\t\t\t\tPress 4 for CLEANLINESS COMPLAINTS"<<endl;
cout<<"\t\t\t\t\t\tPress 5 for ELECTRICITY COMPLAINTS"<<endl;
cout<<"\t\t\t\t\t\tPress 6 for RAGGING COMPLAINTS"<<endl;
cout<<endl;
cout<<"******ALL COMPLAINS ARE REGISTERED IN MANAGEMENT CELL.SO PLEASE MAINTAIN THE AUTHENTICATION OF YOUR COMPLAINTS****"<<endl;
int choice=choiceselection();
return (choice);
}

void switchchoice(int choice)
{

    switch(choice)
    { complaints wifi;
     case 1:
     {
       wifi.getcomplaint();
       wifi.store_wifi_complaint();
      break;
     }
     case 2:
     {
       wifi.getcomplaint();
       wifi.store_wooden_complaint();
       break;
     }
     case 3:
     {
       wifi.getcomplaint();
      wifi.store_plumber_complaint();
     break;
     }
     case 4:
     {
       wifi.getcomplaint();
       wifi.store_clean_complaint();
     break;
     }
     case 5:
     {
       wifi.getcomplaint();
       wifi.store_elec_complaint();
     break;
     }
     case 6:
     { complaints ragging;
       wifi.getcomplaint();
       wifi.store_ragging_complaint();
     break;
     }
     default:
     {
    cout<<"you have entered wrong choice sorry";
     }
    }
}
void switchregisteredchoice(int choice)
{

    switch(choice)
    { complaints wifi;
     case 1:
     {
       wifi.load_all_wifi_complaint();
      break;
     }
     case 2:
     {

       wifi.load_all_wooden_complaint();
       break;
     }
     case 3:
     {

      wifi.load_all_plumber_complaint();
     break;
     }
     case 4:
     {

       wifi.load_all_clean_complaint();
     break;
     }
     case 5:
     {

       wifi.load_all_elec_complaint();
     break;
     }
     case 6:
     {
       wifi.load_all_ragging_complaint();
     break;
     }
     default:
     {
    cout<<"you have entered wrong choice sorry";
     }
    }
}


int choiceselection()
{   int choice;
    cout<<"\nplease enter the choice you want to select:-";
    cin>>choice;
    return(choice);
}


//now we will do the authentication of the user
int userlogin()
{
    string username,password,un,pw,room;
    int ch;
    cout<<"enter the username:-"; cin>>username;
    cout<<"enter the password:-"; cin>>password;

    ifstream read("data\\systemfile"+username+"ios.dat",ios::binary);
    getline(read, un);
    getline(read, pw);
    getline(read, room);
    if(un==username&&pw==password&&room=="worker")
    {
       ch=4 ;
    }
    else if(username=="cgc@123"&&password=="cgc@123")
    {
        ch=2;
    }
    else if(un==username&&pw==password)
    {
        ch=1;
    }

    else
    {
        ch=3;
    }


          if(ch==3)
          {
              cout<<"false login!"<<endl;
              system("pause");
              return(ch);


          }
          else
          {
           cout<<"succesfully logged"<<endl;
           return(ch);

          }
}

int userlogin(string username,string password)
{
    string un,pw,room;
    int ch;

    ifstream read("data\\systemfile"+username+"ios.dat",ios::binary);
    getline(read, un);
    getline(read, pw);
    getline(read, room);
    if(un==username&&pw==password)
    {
       ch=1 ;
    }
    else if(username=="cgc@123"&&password=="cgc@123")
    {
        ch=2;
    }
    else if(un==username&&pw==password&&room=="worker")
    {
        ch=4;
    }

    else
    {
        ch=3;
    }


          if(ch==3)
          {
              cout<<"false login!"<<endl;
              system("pause");
              return(ch);


          }
          else
          {
           cout<<"succesfully logged"<<endl;
           system("PAUSE");
           return(ch);

          }
}
void registeruser()
{
        string username,password,room;
        cout<<"please enter the data accordingly to register username and password in oneword"<<endl;
        cout<<"select a username:"; cin>>username;
        cout<<"select a password:"; cin>>password;
        cout<<"please enter room no."; cin>>room;
          ofstream file;
          file.open("data\\systemfile"+username+"ios.dat",ios::binary);
          file<<username<<endl<<password<<endl<<room;
          file.close();
          system("cls");
          cout<<"\n\n\nSuccesfully registered as:"<<username<<"\twith room no."<<room<<endl<<endl<<endl;
}
  void userauthenticate()
  {   system("cls");
      int choice;
      cout<<"1.register \n 2.login ";
      cin>>choice;
      if(choice==1)
      {  registeruser();
         main();
      }
      else if(choice==2)
      {
       userlogin();
      }

  }
    void getdetails(string username,string password)
  {  string un,pw,room;
    ifstream read("data\\systemfile"+username+"ios.dat",ios::binary);
    getline(read, un);
    getline(read, pw);
    getline(read, room);
    cout<<"your username is :-"<<un<<endl;
    cout<<"your password is :-"<<pw<<endl;
    cout<<"your room no. is :-"<<room<<endl;
  }

