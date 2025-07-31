#!/usr/bin/python3
"""
Prototype: def isWinner(x, nums)
where x is the number of rounds and nums is an array of n
Return: name of the player that won the most rounds
If the winner cannot be determined, return None
You can assume n and x will not be larger than 10000
You cannot import any packages in this task
"""


def isWinner(x, nums):
    """ finds winner """
    if x <= 0 or nums is None or len(nums) < x:
        return None

    max_num = max(nums)
    primes = [True] * (max_num + 1)
    primes[0] = primes[1] = False

    for i in range(2, int(max_num ** 0.5) + 1):
        if primes[i]:
            for j in range(i*i, max_num + 1, i):
                primes[j] = False

    def number_of_primes_below_or_equal_to_num(num):
        return sum(primes[:num+1])

    maria_score = 0
    ben_score = 0
    for i in range(x):
        if number_of_primes_below_or_equal_to_num(nums[i]) % 2 == 0:
            ben_score += 1
        else:
            maria_score += 1

    if maria_score > ben_score:
        return "Maria"
    return "Ben"
