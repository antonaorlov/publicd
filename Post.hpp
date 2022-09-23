// declaring Post fucntions
#ifndef _POST_H_
#define _POST_H_

#include <time.h>

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Post
{
private:
    string title;
    string body;
    time_t times; // declaring time variable
    string user;

public:
    Post();
    Post(string name, string body, string user); // parameters as references, const because they dont change value
    void setUsername(const string &user);
    void setTitle(const string &title); // parameters as references, const because they dont change value
    void setBody(const string &body);   // parameters as references, const because they dont change value
    string getUsername() const;
    string getTitle() const;
    string getBody() const;
    void getTimeStamp() const;
    void displayPost();
};

#endif