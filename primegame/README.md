<p align="center">
<picture>
 <source media="(prefers-color-scheme: dark)" srcset="https://images.squarespace-cdn.com/content/v1/5a4bfe8bf09ca4228ceca3b7/1539139199598-ANH454IHZI1OKWONKRXY/logo.jpg?format=2500w">
 <source media="(prefers-color-scheme: light)" srcset="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQIrK23KvJPB7XdZrIk9mHwe3GZvtsUZLjkh-eG6KRgCLeWu3MW0kFcggq4COpLmeZviQ&usqp=CAU">
 <img alt="image holberton school" src="https://apply.holbertonschool.com/auth/sign_up?country=fr&locale=fr">
</picture>
</p>


<B><h1 align="center">
Prime Game
</h1></B>

## **Topics Covered**

0. Prime Game

## **Requirements**

Maria and Ben are playing a game. Given a set of consecutive integers starting from 1 up to and including n, they take turns choosing a prime number from the set and removing that number and its multiples from the set. The player that cannot make a move loses the game.

They play x rounds of the game, where n may be different for each round. Assuming Maria always goes first and both players play optimally, determine who the winner of each game is.

Prototype: def isWinner(x, nums)
where x is the number of rounds and nums is an array of n
Return: name of the player that won the most rounds
If the winner cannot be determined, return None
You can assume n and x will not be larger than 10000
You cannot import any packages in this task
Example:

x = 3, nums = [4, 5, 1]
First round: 4

Maria picks 2 and removes 2, 4, leaving 1, 3
Ben picks 3 and removes 3, leaving 1
Ben wins because there are no prime numbers left for Maria to choose
Second round: 5

Maria picks 2 and removes 2, 4, leaving 1, 3, 5
Ben picks 3 and removes 3, leaving 1, 5
Maria picks 5 and removes 5, leaving 1
Maria wins because there are no prime numbers left for Ben to choose
Third round: 1

Ben wins because there are no prime numbers for Maria to choose

## **Authors** :black_nib:

Laroche Marion [Github](https://github.com/Mamuche), [LinkedIn](https://www.linkedin.com/in/marion-laroche-8b235a284/).
