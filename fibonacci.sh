#!/bin/bash

fib() {
	if [n -eq 0]
	then
		echo "ANSWER : " + $no2
	else
		ans = $no1 + $no2
		$no1 = $no2
		$no2 = $ans
		$n = $n - 1
		
		fib no1 no2 n		
	fi
		

}

no1=0
no2=1
n=10

fib no1 no2 n
