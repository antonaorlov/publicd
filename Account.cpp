#include "Account.hpp" //need to include in cpp fiels of hpp files for the use of functions


Account::Account()
{
	username = "";
	password = "";
	posts = {}; //vector intiazes to an empty vector
}

Account::Account(const string &username, const string &password)
{
	this->username = username;
	this->password = password;
	this->posts = {};
	//posts = vector_post;
	//generate time somehow
}

void Account::setUsername(const string &user)
{
	this->username = user;
}

string Account::getUsername() const
{
	return username;
}

void Account::setPassword(const string &pass)
{
	this->password = pass;
}

string Account::getPassword() const
{
	return password;
}

bool Account::addPost(const string &title, const string &body, const string &user) //adding a post to vector post if title, body not empty, new post creates
{
	if (!(title.empty() || body.empty()))
	{
		posts.push_back(new Post(title, body, user));
		return true;
	}

	return false;
}

void Account::viewPosts()
{
	for (size_t i = 0; i < posts.size(); i++)
	{
		posts[i]->displayPost();
	}
}