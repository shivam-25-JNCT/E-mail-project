#include <iostream>
using namespace std;

class Create
{
  // for create mail
  string username;
  //  string name;
  string password;
  // for send mail
  string recipient;
  string sender;
  string subject;
  string body;

public:
  // constructor
  Create()
  {
    username = 'name';
    password = 'password';
  }

public:
  void login_page()
  {
    cout << "Enter your username:  ";
    cin >> username;
    cout << "Enter password :  ";
    cin >> password;

    cout << "your account successfully logged in \n";
  }
 
};
class Email : public Create
{
private:
  string recipient;
  string sender;
  string subject;
  string body;

public:
  Email()
  {
    recipient = "recipt";
    sender = 'sendMasaage';
    subject = "subject";
    body = "body";
  }

   void display()
  {
    int choice;
    cout << "1. Send Email\n";
    cout << "2. Display Inbox\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
  
  }

  void sendEmail()
  {
    cout << "Enter sender's email address:  ";
    cin >> sender;
    cout << "Enter recipient's email address: ";
    cin >> recipient;
    cout << "Enter email subject: ";
    cin >> subject;
    cout << "Enter email body: ";
    cin >> body;

    cout << "Your E-mail has been sent successfully .....!.\n";
  }

  void DisplayInbox()
  {
    cout << "you have some massage in inbox...... Check it out ..\n.";
  }
  void Exit()
  {
    cout << "Exit...\n";
  }
};
int main()
{
  char login;
  Create create;
  Email email;
  char choice;
  //  do
  //  {
  /* code */
  cout << "1.  Login\n";

  //  cout<<"2.  password\n";
  cout << "press  1 :  ";
  cin >> login; 


  switch (login)
  {
  case '1':
    cout << " login :  \n";
    create.login_page();
    email.display();
    break;
    // case '2': cout<<"  Enter your password";
    //     break;

    //  default: cout<<"plese choose valid number\n";
    //      break;
  }
  while (login != 1)
  {
    cout << "plese enter valid num\n";
    break;
    break;
  };

  // do{
  //          cout << "1. Send Email\n";
  //          cout << "2. Display Inbox\n";
  //          cout << "3. Exit\n";
  //          cout << "Enter your choice: ";
          cin>>choice;
 
  switch (choice)
  {
  case '1':
    cout << "Send Email\n";
    email.sendEmail();
    break;
  case '2':
    cout << "Display Inbox\n";
    email.DisplayInbox();
    break;
    break;

  default:
    cout << "Your Choice is invalid ...  Plese try again..";
    break;
  }

  while  (choice != 3)

  // {
  //   cout << "Thankyour for visiting our site .....";
  // }

  return 0;
}
