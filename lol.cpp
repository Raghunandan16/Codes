#include<bits/stdc++.h>
using namespace std;

int queensAttack(int n,int k,int r_q,int c_q,vector<vector<int>> obstacles)
{
    vector<vector<int>> chessboard(n,vector<int>(n,0));
    for(int i=0;i<k;i++)
    {
        int rowob=obstacles[i][0]-1;
        int colob=obstacles[i][1]-1;
        chessboard[rowob][colob]=1;//placing 1 at all those cells of the chessboard where the obstacle is found
    }
    int count=0;
    for(int i=r_q-2,j=c_q;((i>=0)&&(j<=(n-1)));i--,j++)//traverse along the diagonal connecting the upper left corner and the lower right corner of the chessboard, moving in the downward direction
    {
        if(chessboard[i][j]!=1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for(int i=r_q,j=c_q-2;((i<=(n-1))&&(j>=0));i++,j--)//now the queen traverses along the diagonal connecting the upper left corner and the lower right corner of the chessboard, moving in the upward direction
    {
        if(chessboard[i][j]!=1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for(int i=r_q,j=c_q;((i<=n-1)&&(j<=n-1));i++,j++)//now traversing along the diagonal connecting the upper right corner and the lower left corner of the chessboard, moving in the upward direction
    {
        if(chessboard[i][j]!=1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for(int i=r_q-2,j=c_q-2;(i>=0&&j>=0);i--,j--)//again traversing along that diagonal linking the upper right corner and the lower left corner of the chessboard, moving in the downward direction
    {
        if(chessboard[i][j]!=1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for(int j=c_q;j<=(n-1);j++)//moving in the right direction
    {
        if(chessboard[r_q-1][j]!=1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for(int j=c_q-2;j>=0;j--)//move towards left
    {
        if(chessboard[r_q-1][j]!=1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for(int i=r_q;i<=(n-1);i++)//moving towards upward direction
    {
        if(chessboard[i][c_q-1]!=1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for(int i=r_q-2;i>=0;i--)//moving in downward direction 
    {
        if(chessboard[i][c_q-1]!=1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>> obstacles(k,vector<int>(2));
    int r_q,c_q;
    cin>>r_q>>c_q;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>obstacles[i][j];
        }
    }
    int squares=queensAttack(n,k,r_q,c_q,obstacles);
    cout<<squares<<endl;
    return 0;
}