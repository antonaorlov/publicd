#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "Post.hpp"

#include <vector>
#include <string>

using namespace std;

class Account
{
//making variables in consructur and intiazes to user specification  
private:
    string username;
    string password;
    vector<Post *> posts; //making posts a vector of class posts
 
public:
    Account();
    Account(const string &username, const string &password); // parameters as references, const because they dont change value
    void setUsername(const string &username);
    string getUsername() const;
    void setPassword(const string &password);
    string getPassword() const;
    bool addPost(const string &title, const string &body,const string &user);
    void viewPosts();
};




#endif