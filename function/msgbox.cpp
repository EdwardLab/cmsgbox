// cmsgbox by Edward Hsing https://github.com/xingyujie/cmsgbox/ MIT LICENSE
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int msgbox(string content, double type, string title)
{
	ostringstream ss;
	string runcmd_str1 = "mshta vbscript:msgbox(";
	string runcmd_str2 = ")(window.close)";
	ss << runcmd_str1 <<'\"' << content << '\"' << "," << '\"' << type << '\"' << "," << '\"' << title << '\"' << runcmd_str2;
	std::string s = ss.str();
	char* s_str = (char*)s.c_str();
	system(s_str);
	//cout << argv[1] << endl << argv[2] << endl << argv[3] << endl << s_str; for debug
}

