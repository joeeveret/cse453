#include <iostream>
#include <string>
#include <vector>
using namespace std; 



/**********************************************************************
* Gets test queries
***********************************************************************/
std::vector<std::string> getTestQueries()
{
  std::vector<std::string> data;
  data.push_back("hello");
    // Generate 12 test cases to represent valid input.
    // Have a function to call all the test cases.

  return data;
}

/**********************************************************************
* Authenticates a user in "SQL" and returns true or false
***********************************************************************/
bool checkAuthentication()
{
    //Query Generation: Accept two strings, return a single string to check if the user is authenticated. 
    return false;
}

/**********************************************************************
* Get test strings for various functions
***********************************************************************/
std::vector<std::string> getTestVulnerabilities()
{
  std::vector<std::string> data;
  data.push_back("hello");
    // Vulnerabilities: Generate test cases for tautology, 
    // union query, comment and additional statement attacks.

  return data;
}

/**********************************************************************
* Runs weak mitigation on the value passed in and returns it.
***********************************************************************/
string weakMitigation(string Value)
{
    //Weak Mitigation against UNION Query Attack
    const string MATCH = "UNION";
    std::size_t found = Value.find(MATCH);
    if (found!=std::string::npos){
        //Delete substring after found
        Value.erase(Value.find(MATCH), Value.length());
        return Value;
    } else {
        return "String doesn't contain a UNION statement";
    }
    
}

/**********************************************************************
* Ensures complete sanitization of the string then returns it.
***********************************************************************/
string strongMitigation(string Value)
{
    Value = weakMitigation(Value);
    // Strong Mitigation: create a function which calls 
    // weak mitigation and adds to it until it is 
    // considered strong mitigation.
    return Value;
}

/**********************************************************************
* Runs a series of tests for security sanitization and mitigation.
***********************************************************************/
int main()
{
    
   //Stuff goes here
   return 0;
}
