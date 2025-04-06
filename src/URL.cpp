#include "URL.hpp"
#include <sys/socket.h>

URL::URL(const std::string& input_url) {
		std::string del = "://";
		size_t pos = input_url.find(del);
		if (pos == std::string::npos) {
			throw std::invalid_argument("Invalid input_url format: missing '://'");
		}
		scheme = input_url.substr(0, pos);
		url = input_url.substr(pos + del.length());

		if (scheme != "http") {
			throw std::invalid_argument("Unsupported scheme: " + scheme);
		}

		if (url.find("/") == std::string::npos) {
			url = url += "/";
		}

		size_t slash_pos = url.find("/");
		host = url.substr(0, slash_pos);
		path = url.substr(slash_pos);

	}

void URL::request() {
	int s = socket(AF_INET, SOCK_STREAM, 0);

}

void URL::printProps() {
	std:: cout << "Scheme: " << scheme << std::endl;
	std::cout << "Url: " << url << std::endl;
	std::cout << "Host: " << host << std::endl;
	std::cout << "Path: " << path << std::endl;
}
