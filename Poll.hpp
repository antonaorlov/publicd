#ifndef _POLL_H_
#define _POLL_H_

#include "Post.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

//  - A vector of strings containing the poll options
//    - A vector of integers containing the number of votes for each poll option,
//      where the integer in the first position indicates the number of votes for
//      the poll option in the first position , the second integer indicates the number of votes
//      for the second poll option, etc.
//      Note that, by this definition, the two vectors will have same size!

class Poll : public Post
{
private:
    vector<string> options;
    vector<int> votes;
    // time_t p_time;
public:
    Poll(string title, string question, string user, vector<string> options);
    bool votePoll(const int &option);

    void changePollOption(string &new_poll_option, int &current);
    void getPollOptions();

    int getPollVotes(int index); // help
    void displayPost();
};

#endif