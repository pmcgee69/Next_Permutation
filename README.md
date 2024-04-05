# Next_Permutation

C++Builder (Clang) vs Delphi - comparing std :: next_permutation implementations.

Reference : 1995 HP / SGI Implementation of the STL
            https://web.archive.org/web/20050403232242/http://www.sgi.com/tech/stl/
            stl_algo.h  

For length 12 sequence .. 'abcdefghijkl' 

- c++ : ~= 2 sec

- delphi : initially 10 sec (this code) .. eventually 4 sec
