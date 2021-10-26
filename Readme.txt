Anand Nambakam 

Cases Ran: 

1.
H:\My Documents\Lab4\Lab4\Debug>Lab4.exe
usage: Lab4.exe<TicTacToe or Gomoku>

2. 
H:\My Documents\Lab4\Lab4\Debug>Lab4.exe TicTacToe
4
3
2
1
0
  0 1 2 3 4

Enter [x,y] or quit:

3. 
H:\My Documents\Lab4\Lab4\Debug>Lab4.exe Gomoku
 19
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19

Enter [x,y] or quit:

4. H:\My Documents\Lab4\Lab4\Debug>Lab4.exe wrongname

H:\My Documents\Lab4\Lab4\Debug>echo %errorlevel%
4

5. 
H:\My Documents\Lab4\Lab4\Debug>Lab4.exe TicTacToe
4
3
2
1
0
  0 1 2 3 4

Enter [x,y] or quit: 1,1
4
3
2
1   X
0
  0 1 2 3 4
Player X: 1,1
Enter [x,y] or quit: 1,2
4
3
2   O
1   X
0
  0 1 2 3 4
Player O: 1,2
Enter [x,y] or quit: 2,2
4
3
2   O X
1   X
0
  0 1 2 3 4
Player X: 1,1: 2,2
Enter [x,y] or quit: 2,3
4
3     O
2   O X
1   X
0
  0 1 2 3 4
Player O: 1,2: 2,3
Enter [x,y] or quit: 3,3
4
3     O X
2   O X
1   X
0
  0 1 2 3 4
Player X: 1,1: 2,2: 3,3
Player X won the game.

5. 
H:\My Documents\Lab4\Lab4\Debug>Lab4.exe Gomoku
 19
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19

Enter [x,y] or quit: 1,1
 19
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1
Enter [x,y] or quit: 19,19
 19                                                        W
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,19
Enter [x,y] or quit: 2,2
 19                                                        W
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2     B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 2,2
Enter [x,y] or quit: 18,18
 19                                                        W
 18                                                     W
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2     B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 18,18: 19,19
Enter [x,y] or quit: 3,3
 19                                                        W
 18                                                     W
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3        B
  2     B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 2,2: 3,3
Enter [x,y] or quit: 17,17
 19                                                        W
 18                                                     W
 17                                                  W
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3        B
  2     B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 17,17: 18,18: 19,19
Enter [x,y] or quit: 4,4
 19                                                        W
 18                                                     W
 17                                                  W
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4           B
  3        B
  2     B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 2,2: 3,3: 4,4
Enter [x,y] or quit: 16,16
 19                                                        W
 18                                                     W
 17                                                  W
 16                                               W
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4           B
  3        B
  2     B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 16,16: 17,17: 18,18: 19,19
Enter [x,y] or quit:
5,5
 19                                                        W
 18                                                     W
 17                                                  W
 16                                               W
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5              B
  4           B
  3        B
  2     B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 2,2: 3,3: 4,4: 5,5
Player B won the game.

6. 
H:\My Documents\Lab4\Lab4\Debug>Lab4.exe Gomoku TicTacToe
usage: Lab4.exe<TicTacToe or Gomoku>

H:\My Documents\Lab4\Lab4\Debug>echo %errorlevel%
1

7. 
19
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19

Enter [x,y] or quit: 1,1
 19
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1
Enter [x,y] or quit: 19,19
 19                                                        W
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,19
Enter [x,y] or quit: 1,2
 19                                                        W
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 1,2
Enter [x,y] or quit: 19,18
 19                                                        W
 18                                                        W
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,18: 19,19
Enter [x,y] or quit: 1,3
 19                                                        W
 18                                                        W
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 1,2: 1,3
Enter [x,y] or quit: 19,17
 19                                                        W
 18                                                        W
 17                                                        W
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,17: 19,18: 19,19
Enter [x,y] or quit: 1,4
 19                                                        W
 18                                                        W
 17                                                        W
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4  B
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 1,2: 1,3: 1,4
Enter [x,y] or quit: 19,16
 19                                                        W
 18                                                        W
 17                                                        W
 16                                                        W
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4  B
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,16: 19,17: 19,18: 19,19
Enter [x,y] or quit: 1,5
 19                                                        W
 18                                                        W
 17                                                        W
 16                                                        W
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5  B
  4  B
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 1,2: 1,3: 1,4: 1,5
Player B won the game.

H:\My Documents\Lab4\Lab4\Debug\Lab4.exe (process 3960) exited with code 0.

7. 
19
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19

Enter [x,y] or quit: 1,1
 19
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1
Enter [x,y] or quit: 19,19
 19                                                        W
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,19
Enter [x,y] or quit: 1,2
 19                                                        W
 18
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 1,2
Enter [x,y] or quit: 19,18
 19                                                        W
 18                                                        W
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,18: 19,19
Enter [x,y] or quit: 1,3
 19                                                        W
 18                                                        W
 17
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 1,2: 1,3
Enter [x,y] or quit: 19,17
 19                                                        W
 18                                                        W
 17                                                        W
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,17: 19,18: 19,19
Enter [x,y] or quit: 1,4
 19                                                        W
 18                                                        W
 17                                                        W
 16
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4  B
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 1,2: 1,3: 1,4
Enter [x,y] or quit: 19,16
 19                                                        W
 18                                                        W
 17                                                        W
 16                                                        W
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5
  4  B
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player W: 19,16: 19,17: 19,18: 19,19
Enter [x,y] or quit: 1,5
 19                                                        W
 18                                                        W
 17                                                        W
 16                                                        W
 15
 14
 13
 12
 11
 10
  9
  8
  7
  6
  5  B
  4  B
  3  B
  2  B
  1  B
  X  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
Player B: 1,1: 1,2: 1,3: 1,4: 1,5
Player B won the game.

H:\My Documents\Lab4\Lab4\Debug\Lab4.exe (process 3960) exited with code 0.
