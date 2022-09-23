#include "Promotional.hpp"
#include <regex>

/**
      Parameterized constructor.
         @param       : The name of the Promotional post (a string)
         @param       : The body of the Promotional post (a string)
         @param    : : The username of the Account that added this post (a string)
         @param       : The link of the Promotional post (a string)

        @post         : Sets the title, body, username and link (if it's a proper link otherwise "Broken Link")
                       of the Promotional to the value
                       of the parameters.
                       It will also generate the current time and store it.
   */

//promotional construction
Promotional::Promotional(string name,string body,string user,string link):Post(name, body, user){
   // setUsername(user);
   // setTitle(body);
   // setBody(name);
   //getTimeStamp();
   url=link;
   //c_time=time(0);
}

/**
    Accessor function
    @return         : Returns the post link
 */
//    getLink

string Promotional::getLink() const{
    return url;
}

/**
    @param    : A reference to the link that is in the format 'https://www.something.something'
                or 'http://www.something.something' with the last 'something' being at least 2 characters
    @return   : true if the link is correctly formatted, false otherwise

    @post     : If the link is not correctly formatted, store "Broken Link"
                in the link member variable, otherwise store the value of the
                parameter (Hint: see <regex>)
 */
//    setLink

bool Promotional::setLink(const string url){
  // string urls=(https://www.something.something);
   regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
    if(regex_match(url, pattern)){
        return true;
    }
    getLink()="broken link";
    return false;
 }

/**
   @post      : displays the entire Promotional post (example):
               \n
               {post_title_} at {time_stamp_}:
               {post_body_}
               \n
               {link}
               \n
*/
   //displayPost

void Promotional::displayPost() const{
   cout<<getTitle();
    cout << " at ";
    getTimeStamp();
    cout<<" : ";
    cout<<getBody()<<endl;;
    cout<<"\n";
    cout<<getLink();
   // cout << asctime(localtime(&this->times
 }