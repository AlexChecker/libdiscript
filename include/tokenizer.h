#ifndef DITOKENIZER
#define DITOKENIZER

#include <fstream>
#include <string>
#include <vector>
#include "token.h"
class DITokenizer{
public:
	std::string filename;

	DITokenizer(std::string file,void (*DIErrorCallback)(std::string,int));
	void readLexems();
private:
	std::vector<DIToken> token_list;
	std::vector<std::string> lexems;
	std::fstream fs;
	void(*_DIErrorCallback)(std::string,int) = nullptr;
};

#endif