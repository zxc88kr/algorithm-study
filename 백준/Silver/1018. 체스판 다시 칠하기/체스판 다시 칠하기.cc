#include <cstdio>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    char board[N][M + 1];
    for (int i = 0; i < N; i++)
        scanf("%s", &board[i]);

    int min = 2500;
    for (int i = 0; i <= N - 8; i++)
        for (int j = 0; j <= M - 8; j++)
        {
            int diff1 = 0;
            int diff2 = 0;
            for (int row = i; row < i + 8; row++)
                for (int col = j; col < j + 8; col++)
                {
                    if ((row + col) % 2 == 0)
                    {
                        if (board[row][col] == 'B') diff1++;
                        else if (board[row][col] == 'W') diff2++;
                    }
                    else if ((row + col) % 2 == 1)
                    {
                        if (board[row][col] == 'W') diff1++;
                        else if (board[row][col] == 'B') diff2++;
                    }
                }
            int diff = (diff1 < diff2) ? diff1 : diff2;
            if (diff < min) min = diff;
        }
    printf("%d", min);
}