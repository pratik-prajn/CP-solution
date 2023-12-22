def count_solved_problems(n, contest_log):
    cumulative_time = 0
    solved_problems = 0

    for i in range(n):
        problem_time = ord(contest_log[i]) - ord('A') + 1
        cumulative_time += problem_time

        if cumulative_time <= i + 1:
            solved_problems += 1

    return solved_problems

def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        contest_log = input().strip()
        result = count_solved_problems(n, contest_log)
        print(result)

if __name__ == "__main__":
    main()
