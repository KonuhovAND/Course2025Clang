#include <iostream>
#include <regex>
#include <string>
using std::cout, std::cin, std::endl;
using std::string;
void spacer() { cout << "\n" << string(18, '-') << "\n"; }

bool IsCorrectName(string user_name) {
  std::regex reg("[A-Z]{1}[a-z]{1,31}");
  return regex_search(user_name, reg);
}
void ReturnAllEmails(string emails) {
  std::regex email("[a-z]{1}[a-z0-9]*@gmail\\.com");
  std::smatch matches;
  while (std::regex_search(emails, matches, email)) {
    cout << matches[0] << " ";
    cout << "\n";
    emails = matches.suffix().str();
  }
}
int main() {
  spacer();
  string user_name;
  cout << "Enter your user name: ";
  cin >> user_name;
  if (IsCorrectName(user_name)) {
    cout << "Your name is correct!" << endl;
  } else {
    cout << "Your name is NOT correct!" << endl;
  }

  spacer();
  string banch_of_emails = "arstarst@gmail.com arst arstqwfp arst arstwfq "
                           "wfp@gmail.com qwfkh,cdxveinarf wfyu@gmail.com";
  ReturnAllEmails(banch_of_emails);
  spacer();
}
