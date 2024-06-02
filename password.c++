#include <iostream>
using namespace std;

string getPassword(string platform)
{
  if (platform == "Facebook")
  {
    return "01142239645";
  }
  else if (platform == "GitHub")
  {
    return "01023605422";
  }
  else if (platform == "LinkedIn")
  {
    return "01";
  }
  else if (platform == "Iphone")
  {
    return "185491";
  }
  else if (platform == "moh1&moh2")
  {
    return "m10122002";
  }
  else if (platform == "mySQL")
  {
    return "PHW#84#";
  }
  else
  {
    return "Invalid input";
  }
}
int main()
{
  string input;
  cout << "Enter a platform: ";
  cin >> input;

  cout << "Password: " << getPassword(input) << endl;

  return 0;
}

/*
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> passwords = {
        {"Facebook", "01142239645"},
        {"GitHub", "01023605422"},
        {"LinkedIn", "01"},
        {"Iphone", "185491"},
        {"moh1&moh2", "m10122002"},
        {"mySQL", "PHW#84#"}
    };
    string input;
    cout << "Enter a platform: ";
    cin >> input;
    auto it = passwords.find(input);
    if (it != passwords.end()) {
        cout << "Password: " << it->second << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}
}*/
