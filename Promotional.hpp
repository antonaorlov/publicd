#ifndef _PROMOTIONAL_H_
#define _PROMOTIONAL_H_

#include "Post.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;

class Promotional : public Post
{
private:
    string url;
    // time_t c_time;
public:
    Promotional(const string name, const string body, string user, const string link);
    // void Post(string title, string body, string user);
    string getLink() const;
    bool setLink(const string url);
    void displayPost() const;
};

// class Promotional: public Post{
//     private:
//         string url;
//     public:
//         Promotional(const string &name, const string &body, const string &user, const string &link);
//         Post(const string &title, const string &body, const string &link);
//         string getLink();
//         bool setLink();
//         void displayPost();

// };

#endif
