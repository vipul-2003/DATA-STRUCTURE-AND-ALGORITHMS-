class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {

        int count = 1;

        vector<vector<int>> spiralmatrix(n, vector<int>(n, 0));

        int row_start = 0;
        int col_start = 0;

        int row_end = n - 1;
        int col_end = n - 1;

        if (n == 1)
        {
            spiralmatrix[0][0] = 1;
            return spiralmatrix;
        }

        else
        {

            while (row_start <= row_end && col_start <= col_end)
            {
                for (int i = col_start; i <= col_end; i++)
                {
                    spiralmatrix[row_start][i] = (count);
                    count++;
                }

                row_start++;

                for (int i = row_start; i <= row_end; i++)
                {
                    spiralmatrix[i][col_end] = (count);
                    count++;
                }

                col_end--;

                if (col_start <= col_end)
                {
                    for (int i = col_end; i >= col_start; i--)
                    {
                        spiralmatrix[row_end][i] = (count);
                        count++;
                    }
                }
                
                row_end--;

                if (row_start <= row_end)
                {
                    for (int i = row_end; i >= row_start; i--)
                    {
                        spiralmatrix[i][col_start] = count;
                        count++;
                    }
                }
                
                col_start++;
            }
        }

        return spiralmatrix;
        
    }
};

 