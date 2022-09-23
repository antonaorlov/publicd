#include "General.hpp"
#include "Post.hpp"
#include "Poll.hpp"
#include "Account.hpp"
#include "Promotional.hpp"

#include <iostream>
#include <time.h>
#include <vector>
#include <string>

using namespace std;
int main()
{

    //  std::cout << "TASK 1: TEST POST CLASS" << std::endl;

    //   // Test constructor
    //   Post post1("Chicken came before the egg confirmed!", "A new story just released where we finally get the answer of who came first.", "user1");

    //   // Test constructor and accessor functions
    //   std::cout << post1.getTitle() << std::endl;
    //   std::cout << post1.getBody() << std::endl;
    //   std::cout << post1.getUsername() << std::endl;
    //   post1.getTimeStamp();

    //   // Test mutator functions
    //   post1.setTitle("Actually the egg came first!");
    //   post1.setBody("Ok, maybe the decision is not final.");
    //   post1.setTitle("reee");

    //   // Test display
    //   cout<<endl;
    //   post1.displayPost();

    //   std::cout << std::endl << "TASK2: TEST ACCOUNT CLASS" << std::endl<< std::endl;

    //   //Test Constructor and mutator functions
    //   Account yash;
    //   yash.setUsername("yashi");
    //   yash.setPassword("testing123");

    //   //Test accessor functions:
    //   std::cout << yash.getUsername() << std::endl;
    //   std::cout << yash.getPassword() << std::endl;

    //   //Test parameterized constructor
    //   Account lenti("lenti", "testing456");
    //   std::cout << std::endl << lenti.getUsername() << std::endl;
    //   std::cout << lenti.getPassword() << std::endl << std::endl;

    // //   // Test addPost and viewFeed
    //   std::cout << "PRINTING FEED: " << std::endl;
    //   lenti.addPost("The moon is made of cheese", "Scientific discoveries about the moon have finally revealed that the moon is actually made of cheese, confirmed.\nSource: Trust me G","fsdf");
    //   lenti.addPost("Chicken came before the egg confirmed!","A new story just released where we finally get the answer of who came first.", "body");
    //   lenti.viewPosts();

   // test general construction, ReactToPost,
    General Generals{"cat", "shoes", "red"};
    Generals.setUsername("cat");
    Generals.setBody("shoes");
    Generals.setTitle("red");

    // testing ReactToPost
    Generals.ReactToPost(Reactions::LIKE);

    // testing getReactions();
    Generals.getReactions();

    // testing displayPost();
    Generals.displayPost();

    /// testing Poll class
    vector<string> option{"red", "blue", "green"};
    Poll poll{"anton", "question1", "users", option};
    poll.setUsername("user");
    poll.setBody("question1");
    poll.setTitle("title");
    poll.getPollOptions();

    int x = 2;
    string y = "purple";
    poll.votePoll(x);
    //    poll.getPollVotes(x);
    poll.getPollOptions();
    poll.changePollOption(y, x);
    poll.getPollOptions();

    //
    poll.displayPost();
}