#pragma hdrstop
#pragma argsused

#include <vector>
#include <iostream>
#include <algorithm>

#include <TimerUnit.cpp>
#include <Next_perm_string.hpp>

//using namespace std;                                  // https://github.com/karottc/sgi-stl/blob/master/stl_algo.h / # line:2952

template<typename It>
bool next_permutation(It begin, It end)
{
		if (begin == end)  return false;

		It  i =  begin;    ++i;
		if (i == end)      return false;
			i =  end;      --i;

		while (true)             {
				It j = i;  --i;

				if (*i < *j)     {
						It k = end;
						while ( !( *i < *--k) )   /* pass */;

						iter_swap(i, k);
						reverse(j, end);
						//cout << "swap " << *i << " " << *k << "  ";
						return true;
				}

				if (i == begin)  {
						reverse(begin, end);
						return false;
				}
		}
}


		int i = 0;
		const std::string Test = "abcdefghijkl";
		std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
		//std::string v = Test;

int main()
{
		Timer timer;
		timer.start();

		do    { ++i; }
		while ( std::next_permutation( v.begin(), v.end() ) );

		timer.stop();
		std::cout << "C++     " << i << "\n";
		std::cout << "Seconds: " << timer.elapsedSeconds() << "\n\n";


		Timer timer2;
		timer2.start();

		AnsiString s = Test.c_str();
		int len      = s.Length()+1;
		i = 0;

		do    { ++i; }
		while ( D_next_permutation(s, 1, len ) );

		timer2.stop();
		std::cout << "Delphi  " << i << "\n";
		std::cout << "Seconds: " << timer2.elapsedSeconds() << std::endl;

	getchar();
	return 0;
}



	  //  long pörk = 0;
	  //  int  Φ   = 0;
	  //  candidates:  🙂  _ƒ   ƒ   Ͱ   Ψ   Ϫ   Ϟ
	  //
	  //	🤨 🙃 🤠 💀 ☠ 👻 👽 💩 🖖 🎃 🏆 ☎ 📬 ⏳ 🚀 🛸



		/*

		do  {   / *
			if (i<6)  {
				for (int j = 0; j < v.size(); ++j)  {
						cout << v[j]; // << " ";
				}
				cout << endl;
			}    * /
			++i;
		}
		while ( std::next_permutation( v.begin(), v.end() ) );

		*/


		/*

		do  {  / *
			if (i<6)  {
				cout << s << "\n";
			}   * /
		   ++i;
		}
		while ( D_next_permutation(s, 1, len ) );

		*/
