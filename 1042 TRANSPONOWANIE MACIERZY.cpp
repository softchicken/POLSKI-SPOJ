/*
POLISH SPOJ
http://pl.spoj.com/problems/TRN/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    int Row,Col;
    cin>>Row>>Col;
    int matrixToTranspose[Row][Col];
    int elementValue;
    for(int i=0;i<Row;i++) //SCANS MATRIX
    {
        for(int j=0;j<Col;j++)
        {
            cin>>elementValue;
            matrixToTranspose[i][j] = elementValue;
        }
    }
    for(int i=0;i<Col;i++) //PRINTS TRANSPOSED MATRIX
    {
        for(int j=0;j<Row;j++)
        {
            cout<<matrixToTranspose[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
