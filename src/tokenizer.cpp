#include "tokenizer.h"
DITokenizer::DITokenizer(std::string file,void (*DIErrorCallback)(std::string,int))
{
	_DIErrorCallback  =DIErrorCallback;
	filename = file;
}