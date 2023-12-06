                        // Multi Dimensional array game - CHESS //
#include<stdio.h>

void update_score_board(int p1, int p2, int result, int score_board[][4])
{
    score_board[p1][p2] = result;     
    score_board[p2][p1] = 2-result;

}

void display_score_board(int score_board[][4])
{
    int i, j;
    printf("\nScore Board\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ", score_board[i][j]);
        }
        printf("\n");
        
    }
    
}

int get_player_score(int player, int score_board[][4])
{
    int j, sum=0;
    for ( j = 0; j < 4; j++)
        sum = sum + score_board[player][j];
    return sum;
    
}

int find_winner(int score_board[][4])
{
    int score, score_update;
    int player = 0, winner = player;
    score = get_player_score(player, score_board);
    for (++player; player < 4; player++)
    {
        score_update = get_player_score(player, score_board); 
        if (score < score_update)
        {
            winner = player;
            score = score_update;
        }
        
    }
    return winner;
    
}

void sort(int a[],int n,int player_index[])
{
    int r,t,i;
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-r-1;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;

                t=player_index[i];
                player_index[i]=player_index[i+1];
                player_index[i+1]=t;
            }
        }
    }
} 

void display_ranking(int score_board[][4])
{
    int player_scores[4], scores[4], player_index[4];
    int i;
    for ( i = 0; i < 4; i++)
    {
        player_scores[i] = get_player_score(i, score_board);
        scores[i] = player_scores[i];
        player_index[i] = i;
    }
    sort(scores, 4, player_index);

    printf("Ranking: \n");
    for ( i = 0; i < 4; i++)
    {
        printf("%d) %d - scores %d\n", i+1, player_index[i], scores[i]);
    }
    
    
}

void chess()
{
    int score_board[4][4] = {0};   // keep zero intitially 
    update_score_board(0,1,2,score_board);
    update_score_board(0,2,1,score_board);
    update_score_board(0,3,2,score_board);
    update_score_board(1,2,1,score_board);
    update_score_board(1,3,0,score_board);
    update_score_board(2,3,0,score_board);
    display_ranking(score_board);
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        chess();        // start the game....
        
    printf("\n");
    return 0;
}