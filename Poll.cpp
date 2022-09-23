#include "Poll.hpp"
#include "Post.hpp"
#include <vector>
#include <time.h>

 /**
      Parameterized constructor.
        @param    : The title (name) of the Poll post (a string)
        @param    : The question (body) of the Poll post (a string)
        @param    : The username of the Account that added this poll (a string)
        @param    : A vector of options for the Poll post

        @post     :Sets the title, body and username of the Poll post to the value of the parameters.
                   It will also generate the current time and store it and will initialize
                   the vectors of options and their respective number of votes.
   */

Poll::Poll(string title,string question,string user, vector<string> options):Post(title,question,user){
    this->getUsername()=user;
    setUsername(user);
    this->getBody()=question;
    setBody(question);
    this->getTitle()=title;
    setTitle(title);
    // setUsername(user);
    // setBody(question); //question parameter?
    // setTitle(title);
   //  this->p_time=time(0);
   //  Poll:: p_time=time(0); //time idk
    this->options=options;
    for(int i=0;i<(int)options.size();i++){
      this->votes.push_back(0);
    }
}

   //  options={options.size(), ""};
    //options(sizeof(options)""," ");
    //votes={(options.size(),0)}; //(sizeof(options), 0); // FIX: Initiliation function is needed
//}

   /**

         @param     : a reference to int between 0 < number of options
         @return    : True if index is within range and we can vote for a poll,
                      false otherwise
         @post      : Increments the poll votes based on the index which
                      will refer to the index in the poll options
   */

 bool Poll::votePoll(const int &option_index){
    //check if option index < size of option
        if(option_index>(int)options.size()){
            return false;
        }
        else{
            //votes.at(option_index)=votes.at(option_index)+1;
            votes[option_index]++;
            return true;
        }
        
       
   
   }

   /**
      Mutator function used to either add a poll or change one of the poll options
         @param     : A reference to the new poll option
         @param     : A reference to int that can either represent the index of the
                      existing option that will be replaced
                      or if choice_number > current number of options,
                      it will add this new option to the poll.

        @post       : Resets the number of votes for this option.
   */

//  existing option that will be replaced or if choice_number > current number of option  it will add this new option to the poll.
 void Poll::changePollOption(string &new_poll_option, int &current){
        if(current>(int)options.size()){
            options.push_back(new_poll_option);
            votes.push_back(0);
        }

        else{
         options[current]=new_poll_option;
         votes[current]=0;
        }
        

 }

  /**
      Accessor function
        @post       : prints the reaction to the post in this format
                    (example where option_n is the string at position n in the poll options vector):
                    0 votes for: option_1
                    5 votes for: option_2
                    2 votes for: option_3
                    ...
   */

//prints the reaction to the pos
 void Poll::getPollOptions(){
    for(int i=0;i<(int)options.size();i++){
        cout<<votes[i]<< " votes for: "<<options[i]<<endl;
    }
    
 }

    /**
      Accessor function
      @param      : The index of the option
      @return     : returns the number of votes for a given option
   */

//returns #number of votes for given option
 int Poll::getPollVotes(int index){
       return votes[index];
 } 

   /**
      @post   : displays the whole Poll post (example):
                \n
                {post_title_} at {time_stamp_}:
                {post_body_}
                \n
                0 votes for: option_1
                5 votes for: option_2
                2 votes for: option_3
                ...
                \n
   */

 void Poll::displayPost(){
    cout<<getTitle();
    cout << " at ";
    getTimeStamp();
    cout<<": ";
    cout<<getBody()<<endl;
    getPollOptions();
      


   //  cout<<"\n"<<Post::getTitle()<<" at "<<asctime(localtime(&p_time))<<":"<<endl;
   //  cout<<Post::getBody()<<"\n";
   //  Poll::getPollOptions();

 }