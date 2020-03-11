#include <iostream>
#include <string>
#include <stdexcept>
#include "calc.h" //包含头函数

using namespace std;

string exec(string command) {
   char buffer[128];
   string result = "";

   // Open pipe to file
   FILE* pipe = popen(command.c_str(), "r");
   if (!pipe) {
      return "popen failed!";
   }

   // read till end of process:
   while (!feof(pipe)) {

      // use buffer to read and add to result
      if (fgets(buffer, 128, pipe) != NULL)
         result += buffer;
   }

   pclose(pipe);
   return result;
}

int main(int argc, char *argv[]) {
	string cols = exec("tput cols");
	int cols_int = stoi(cols);
	string lines = exec("tput lines");
	int lines_int = stoi(lines);
	cout << lines_int << endl;

	Point a;
　　Point b(8.9,9.8),c(34.5,67.8);
　　a=c;
　　a.Display();
　　b.Display();
　　cout<<"两点之间的距离："<<a.Distance(b)<<endl;
　　Cow cw={3,5};
　　Line s(a,b,cw);
　　Line s1(s);
　　s1.Display();
　　cout<<"线段的长度："<<s1.Distance()<<endl;
　　cout<<"线段的面积："<<s1.Area()<<endl;
}

