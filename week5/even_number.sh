#!/bin/sh
#（番号と氏名をここに書く）                                                                                                        
for i in 1 2 3 4 5 6 7 8 9 10
do
  if [ `expr ${i} % 2` == 0 ]; then
    echo $i
  fi
done
