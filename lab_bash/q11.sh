for file in $(find . -type f -name "*.c" | tac)
do
	trimmedName=`echo $file | cut -d'/' -f2 | cut -d'.' -f1`
	prog_name=`echo $file | cut -d'/' -f2`
	gcc -o $trimmedName $prog_name 2>/dev/null 
	if [ -f $trimmedName ]
	then
		ans=$(./$trimmedName)
		if [ $ans = '20' ]
		then
			score=10
		else
			score=7
		fi
	else
		score=5
	fi
	printf "%s \t%s\n" $prog_name $score
done
