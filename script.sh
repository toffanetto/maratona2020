g++ -o $1 $1.cpp

if [ -z $2 ]
then
	./$1 < $1_in.txt
else
	./$1 < $1_in.txt > $1_out.txt
	cmp $1_out.txt $1_ans.txt
fi
rm $1
