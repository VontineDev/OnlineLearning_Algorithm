#include <iostream>

using namespace std;

class Maze
{
public:

    Maze()
    {

    }

    const static int N = 8;
    int maze[8][8] =
    {
        {0, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 1, 0, 1, 1, 0, 1},
        {0, 0, 0, 1, 0, 0, 0, 1},
        {0, 1, 0, 0, 1, 1, 0, 0},
        {0, 1, 1, 1, 0, 0, 1, 1},
        {0, 1, 0, 0, 0, 1, 0, 1},
        {0, 0, 0, 1, 0, 0, 0, 1},
        {0, 1, 1, 1, 0, 1, 0, 0}
    };

    const static int PATHWAY_COLOR = 0;    //white
    const static int WALL_COLOR = 1;       //blue
    const static int BLOCKED_COLOR = 2;    //red
    const static int PATH_COLOR = 3;       //green

    bool findMazePath(int x, int y)
    {
        if (x < 0 || y < 0 || x >= N || y >= N)
        {
            return false;
        }
        else if (maze[x][y] != PATHWAY_COLOR)
        {
            return false;
        }
        else if (x == N - 1 && y == N - 1)
        {
            maze[x][y] = PATH_COLOR;
            return true;
        }
        else
        {
            maze[x][y] = PATH_COLOR;
            if (findMazePath(x - 1, y) || findMazePath(x, y + 1)
                || findMazePath(x + 1, y) || findMazePath(x, y - 1))
            {
                return true;
            }
            maze[x][y] = BLOCKED_COLOR; //dead end
            return false;
        }
    }
    void printMaze()
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << maze[i][j];
            }
            cout << endl;
        }
        cout << endl << endl;
    }
};


int main()
{
    Maze t;
    t.printMaze();
    cout << t.findMazePath(0, 0) << endl;
    t.printMaze();
}