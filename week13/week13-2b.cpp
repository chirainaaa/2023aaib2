/// week13-2b.cpp �Ʊ�r��ܪ�, < 10���
/// Q1: ���h��? Q2:���P�_
#include <string.h>
#include <stdio.h>
int main(){
    char line[20];  ///���@�I,����O�I
    scanf("%s",line);
    int N = strlen(line); ///���D�r�ꪺ����
    int bad = 0;  ///�@�}�l�S���a��
    for(int i=0;i<N;i++){
        if( line[i] != line[N-1-i] ) bad = 1;
    }///�Y�e��������r�����P,�N����
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
