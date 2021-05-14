/*
  Author          :   Nikhil Nagrale
  Codeforces      :   https://codeforces.com/profile/nikhilnagrale2
  Codechef        :   https://www.codechef.com/users/nikhilnagrale2
  Leetcode        :   https://leetcode.com/nikhilnagrale2
  Github          :   https://github.com/nikhilnagrale2

  Copyright       :   Study and Solve. :) 
*/

#include <bits/stdc++.h>
using namespace std;
int R, C;

void printMat(char mat[][50])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << mat[i][j] << "";
        }
        cout << endl;
    }
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void floodFill(char mat[][50], int i, int j, char ch, char color)
{
    if (i < 0 || j < 0 || i >= R || j >= C)
        return;

    if (mat[i][j] != ch)
        return;

    mat[i][j] = color;

    printMat(mat);

    for (int k = 0; k < 4; k++)
    {
        floodFill(mat, i + dx[k], j + dy[k], ch, color);
    }
}

int main()
{
    cin >> R >> C;
    char input[15][50];

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> input[i][j];
        }
    }

    printMat(input);

    floodFill(input, 8, 13, '.', 'R');
    // floodFill(input, 0, 0, '.', 'O');

    printMat(input);
    return 0;
}

/*
15 30
..............................
............#####.............
............#...#.............
.....########...########......
....###.....#####.....###.....
...##...................##....
..##.....................#....
...##....................##...
..###.....................##..
....##...................##...
.....##................##.....
......###............###......
........###.......####........
..........#########...........
...........A.P.P.L.E..........
*/