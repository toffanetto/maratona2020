g++ -o $1 $1.cpp
./$1 < $1_in.txt > $1_out.txt
rm $1
