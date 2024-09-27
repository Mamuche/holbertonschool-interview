<p align="center">
<picture>
 <source media="(prefers-color-scheme: dark)" srcset="https://images.squarespace-cdn.com/content/v1/5a4bfe8bf09ca4228ceca3b7/1539139199598-ANH454IHZI1OKWONKRXY/logo.jpg?format=2500w">
 <source media="(prefers-color-scheme: light)" srcset="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQIrK23KvJPB7XdZrIk9mHwe3GZvtsUZLjkh-eG6KRgCLeWu3MW0kFcggq4COpLmeZviQ&usqp=CAU">
 <img alt="image holberton school" src="https://apply.holbertonschool.com/auth/sign_up?country=fr&locale=fr">
</picture>
</p>


<B><h1 align="center">
Side Line
</h1></B>

## **Tasks**

The goal of this task is to reproduce the 2048 game(NSFW !!) mechanics on a single horizontal line.

Given an array of integers, we want to be able to slide & merge it to the left or to the right. Identical numbers, if they are contiguous or separated by zeros, should be merged (See example)

Write a function that slides and merges an array of integers
Prototype: int slide_line(int *line, size_t size, int direction);
Where line points to an array of integers containing size elements, that must be slided & merged to the direction represented by direction. direction can be either:
SLIDE_LEFT
SLIDE_RIGHT
If it is something else, the function must fail
Both macros SLIDE_LEFT and SLIDE_RIGHT must be defined in slide_line.h
Your function must return 1 upon success, or 0 upon failure
You are not allowed to allocate memory dynamically (malloc, calloc, …)

## **Authors** :black_nib:

Laroche Marion [Github](https://github.com/Mamuche).