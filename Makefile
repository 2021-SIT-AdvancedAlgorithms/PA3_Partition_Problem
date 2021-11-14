all:
	gcc -o partition_problem partition_problem.c kernel.c -lm -O2

example:
	./partition_problem g < ./in/input_1.txt > ./output/output_dp_1.txt