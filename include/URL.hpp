#include <string>
#include <iostream>

#ifndef URL_H
#define URL_H

class URL {
public:
	URL(const std::string& input_url);
	void request();
	void printProps();

private:
std::string url;
std::string scheme; 
std::string host; 
std::string path; 
};

#endif
