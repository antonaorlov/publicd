#include "Post.hpp"
#include "General.hpp"


//  /**
//       Parameterized constructor.
//         @param    : The name of the General post (a string)
//         @param    : The body of the General post (a string)
//         @param    : : The username of the Account that added this post (a string)

//         @post     : Sets the title, body and username to the value of the parameters.
//                     It will also generate the current time and store it
//                     and it initializes the array with default values


// General::General(string name, string body, string user)
General::General(string name, string body, string username):Post(name,body,username)
{
    
    // this->getUsername()=name;
    // setUsername(name);
    // this->getBody()=body;
    // setBody(body);
    // this->getTitle()=username;
    // setTitle(username);
   

    for (size_t i = 0; i < 6; i++)
    {
        this->reacts[i] = 0;
    }
   // getTimeStamp();
}

//  /**
//       Mutator function  f to add a reaction
//       @param    : A reference to reaction (represented by a value of type Reaction)
//       @return   : return True if the react to the post is successful or false
//                   if the reaction provided is not within a valid Reaction value.

//       @post     : Increments the array at the index corresponding to the input Reaction


//Prints the reaction to the post in this format (example):
bool General::ReactToPost(Reactions react){
    // return true if react is a valid value inside Reactions enum
    if (react >= 0 && react <= 5)
    {
        this->reacts[react]++;
        return true;
    }

    return false;

 }

//    /**
//       @post     : Prints the reaction to the post in this format (example):
//                   Like : 2 | Dislike : 0 | Laugh : 4 | Wow : 2 | Sad : 1 |  Angry : 5
//    */

// // @post : Prints the reaction to the post in this format (example):  Like : 2 | Dislike : 0 | Laugh : 4 | Wow : 2 | Sad : 1 |  Angry : 5
void General::getReactions() const{
    cout << "Like : " << (reacts[0]);
    cout << " | Dislike : " << (reacts[1]);
    cout << " | Laugh : " << (reacts[2]);
    cout << " | Wow : " << (reacts[3]);
    cout << " | Sad : " << (reacts[4]);
    cout << " | Angry : " << (reacts[5]);
    cout<<"\n";
}

//  /**
//       @post     : Displays the General post (example):
//                   \n
//                   {post_title_} at {time_stamp_}:
//                   {post_body_}
//                   \n
//                   Like : 2 | Dislike : 0 | Laugh : 4 | Wow : 2 | Sad : 1 |  Angry : 5
//                   \n
//    */

void General::displayPost(){
    cout<<getTitle();
    cout << " at ";
    getTimeStamp();
    cout<<" : ";
    cout<<getBody()<<endl;
    getReactions();
   // cout << asctime(localtime(&this->times

}
