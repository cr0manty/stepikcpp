#include <string>

using namespace std;
int strstr(const char *text, const char *pattern)
{
	const string txt(text);
	int lifeHack = txt.find(pattern);
	return (lifeHack == txt.npos) ? -1 : lifeHack;
}