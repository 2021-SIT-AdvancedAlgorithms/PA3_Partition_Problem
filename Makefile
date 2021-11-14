all:
	gcc -o partition_problem partition_problem.c kernel.c -lm -O2

example:
	./partition_problem g < ./in/input_1.txt > ./output/output_g_1.txt

competition:
	./partition_problem dp < ./in/input_5.txt > ./output/output_dp_5.txt