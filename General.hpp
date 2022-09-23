#ifndef _GENERAL_H_
#define _GENERAL_H_

#include <iostream>

#include "Post.hpp"
#include "Account.hpp"

#include <vector>
#include <string>

using namespace std;



//- An Enum named Reactions with constants: LIKE, DISLIKE, LAUGH, WOW, SAD and ANGRY.

// An integer array of size 6 that, indexed by Reactions, will store the number of reactions of each type the post has received.

//    For example, the first element in the array will record how many reactions of type LIKE the post has received,
//    the second element will record the number of DISLIKE reactions the post has received, and so on.

enum Reactions
{
    LIKE = 0,
    DISLIKE,
    LAUGH,
    WOW,
    SAD,
    ANGRY
};

class General : public Post
{

private:
    int reacts[6];

public:
    General(string name, string body, string username);
    bool ReactToPost(Reactions react); //need reference wrong 
    void getReactions();
    void displayPost();
};


#endif