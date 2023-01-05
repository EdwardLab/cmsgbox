// cmsgbox by Edward Hsing https://github.com/xingyujie/cmsgbox/ MIT LICENSE
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
	ostringstream ss;
	string runcmd_str1 = "mshta vbscript:msgbox(";
	string runcmd_str2 = ")(window.close)";
	ss << runcmd_str1 <<'\"' <<argv[1]<< '\"' << "," << '\"' <<argv[2]<< '\"' << "," << '\"' <<argv[3]<< '\"' << runcmd_str2;
	std::string s = ss.str();
	char* s_str = (char*)s.c_str();
	system(s_str);
	//cout << argv[1] << endl << argv[2] << endl << argv[3] << endl << s_str; for debug
}
