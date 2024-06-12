
#!/bin/bash

if [ -z "$1"  ]; then
  echo "argument expected"

elif [ !  -z "$3"   ]; then
	echo "$1"
	echo "$2"
	echo "$3"

elif [ !  -z "$2"   ]; then
	echo "$1"
	echo "$2"


elif [ !  -z "$1"   ]; then
	echo "$1"
else 
	break
fi






