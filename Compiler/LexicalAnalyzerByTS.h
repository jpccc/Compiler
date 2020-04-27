#pragma once
#include <iostream>
#include"PublicSource.h"
using namespace std;
class LexicalAnalyzerByTS {//词法分析器
private:
	Token* TokenList;//token序列头指针
	Token* TokenListRear;//token序列尾指针
public:
	LexicalAnalyzerByTS();
	void insert_List(Token* token);
	int srearch_ReservedWord(string st);
	void makeTokenList(string input);//将源输入转化为token序列
	Token getToken();//语法分析器调用，从token序列中返回一个token
	Token getLastToken();//获取最后加入的token，辅助词法分析功能的实现
	static void debugging();//调试程序
	bool testId(string input);//尝试识别一个标识符，返回识别结果

};
