# Instructions
1. Clone the git repository in your workspace.
1. Implement `kernel.c` and `kernel.h` if necessary.
1. Compile the project using `make` command.
1. Look at `make example` command in `Makefile` for example input and output.
1. **DO NOT** change the code written in `partition_problem.c` (which include codes for input and output).

# TODO
- You have to solve the Partition problem.
  - Partition problem is the task of deciding whether a given multiset S of positive integers can be partitioned into 2 subsets `S1` and `S2` such that the `sum of the numbers in S1` equals the `sum of the numbers in S2`.
  - https://en.wikipedia.org/wiki/Partition_problem
- You have to implement 2 different algorithms to solve problem.
  1. Greedy algorithm : Fill function `partition_by_greedy` in `kernel.c`
      - The algorithm goes like this : It loops over the elements, and puts each element in the partition whose current sum is smallest.
      - Greedy algorithm for partitioning problem is a _approximation solution_ based on _heuristics_. Which means, it might not result in the exact solution, but tends to find the nearset answer. 
      - For example, let's take `{1, 2, 3, 4}` as an input. The greedy algorithm results in `{1, 3} and {2, 4}`, which is not a exact solution. The exact solution is `{1, 4} and {2, 3}`.
  3. Dynamic Programming algorithm : Fill function `partition_by_dp` in `kernel.c`
      - Build an algorithm based on dynamic programming yourself.
      - Hint : Use the bottom-up approach.

Read the comments in the code for detail constraints.

# Datasets
Note that different inputs will be used for grading.
- Input
  - Files under `./in` is example inputs for the program. The first row indicates the number of elements and the others are the element itself.
  - `input_1~2.txt` has only one pair of partitions.
  - `input_3~4.txt` has at least one pair of partitions.
  - `input_5.txt` has exactly 23 pairs of partitions.
- Partiton_solution
  - Files under `./partition_solution` contains a partitioning answer for each given input. It does not exactly follow the output format.
- **Extra credits**
  - The dataset provided currently has several limitations:
    - Inputs are all partitionable.
    - There are not enough inputs.
    - There is only one solution for each input.
  - Make some sufficient dataset for yourself and share it at the issue board!
    - An input that contains more than 10 elements and is not partitionable (1pts).
      - Credits will be given only for first 5 inputs.
    - A set of <input, every possible partitions(solutions)> that contains more than 10 elements and has 5 more possible partitions (5pts).
    - Every possible partitions for example inputs that has more than one partitions (3pts).
  - Note that
    - Credits will be given for uploads before 72hrs from the due date
    - Max 10pts for each student (calculated sepereatly from the _normal_ extra credits)
    - All the formats must be followed
# Competition
1. Competition will be based on finding all the possible partitions using DP algorithm.
1. `Input_5.txt` will be used for competition (`make competition` command). (This can be changed due to fairness issues)
1. Obviously, your program must correctly testify the partitionablity and find all the existing partitions.
