///week10-2.cpp ����۰��k
/// a�j��, b����, c�p�� greatest common divisor
#include <stdio.h>
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);  ///�ѤG�ɯ��ܦѤj,�ѤT�ܦѤG
}
int main()
{
    printf("�п�Jab��ӼƦr:");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("�̤j���]�ƬO: %d\n",gcd(a,b));
}