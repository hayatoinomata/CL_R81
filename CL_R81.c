#include <stdio.h>

void main(void){
	int a = 10,b = 3,c = -5;
	printf("a��b�̘_����:a & b = %d\n", a&b);
	printf("a��b�̘_���a:a|b = %d\n",a|b);
	printf("a��b�̔r���I�_���a:a^b = %d\n",a^b);
	printf("a�̃r�b�g���]:~a=%d\n",~a);
	printf("b�̃r�b�g���]:~b=%d\n",~b);
	printf("c�̃r�b�g���]:~c=%d\n",~c);
	printf("a�����ɂP�r�b�g�V�t�g:a<<1=%d\n",a << 1);
	printf("b�����ɂP�r�b�g�V�t�g:b<<1=%d\n",b << 1);
	printf("c�����ɂP�r�b�g�V�t�g:c<<1=%d\n",c << 1);
	printf("a���E�ɂP�r�b�g�V�t�g:a>>1=%d\n",a >> 1);
	printf("b���E�ɂP�r�b�g�V�t�g:b>>1=%d\n",b>>1);
	printf("c���E�ɂP�r�b�g�V�t�g:c>>1=%d\n",c>>1);
}