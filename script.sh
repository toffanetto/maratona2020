g++ -o $1 $1.cpp
./$1 < $1_in.txt
rm $1
