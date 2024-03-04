#ifndef DITOKEN
#define DITOKEN
#include <string>
typedef enum DITokenType{
	IF,
	ELSE,
	WHILE,
	EQUALS,
	BIGGER,
	BIGGER_OR_EQUAL,
	LESS,
	LESS_OR_EQUAL,
	NOT_EQUAL,
	TYPE_INT,
	TYPE_FLOAT,
	TYPE_BOOL,
	TYPE_STRING,
	INCREMENT,
	DECREMENT,
	VARIABLE_DECLARATION,
	SCOPE_CODE,
	SCOPE_PARAMETERS,
	PRINT_VALUE    			//TODO: только для тестов! Необходимо переделать во что-то нормальное
} token_type;

struct DIToken{
public:
	std::string token_data;
	token_type type;
	DIToken* parent_token;
};
#endif