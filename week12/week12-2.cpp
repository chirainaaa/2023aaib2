#include <stdio.h>
int main(){
    int n = 2;
    int a[2][2] = {{10,20},{11,22}};
    int b[2][2] = {{2,1},{3,2}};
    int c[2][2];
    ///part1�|Ūa[i][j]�C���]�n,�N���ΦAŪ
    ///part2�|Ūb[i][j]�C���]�n,�N���ΦAŪ
    for(int i=0;i<n;i++){  ///part3 �L���
        for(int j=0;j<n;j++){
            int * p1 = & a[i][j]; ///���F�bTutor �q�X�b�Y
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
}
