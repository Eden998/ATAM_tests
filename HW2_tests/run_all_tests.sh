#!/bin/bash

# move in.txt to a tmp file
cp ./in.txt ./in.txt.tmp

# move basic_test.c to a tmp file
cp ./basic_test.c ./basic_test.c.tmp

#iterate through all the test files
for i in {1..300}
do
    # move the test input file to in.txt
    cp ./tests/in$i.txt ./in.txt

    # move the test program to basic_test.c
    cp ./tests/test$i.c ./basic_test.c

    # compile the program
    gcc basic_test.c get_path.o students_code.S -o hw2_part1.out

    # run the program
    ./hw2_part1.out
done


# move in.txt back to original
mv ./in.txt.tmp ./in.txt

# move basic_test.c back to original
mv ./basic_test.c.tmp ./basic_test.c