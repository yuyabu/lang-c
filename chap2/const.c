#include<stdio.h>

/**
 * const char* で参照のみを保護する
 * @param value [description]
 */
void referenceOnlyProtect(const char* p){
	p = "test"; //書き換え可能。ただし呼び出し元に影響なし。
	//ローカルスコープのvalueというポインタの値のみを書き換えている。

	//*p = 's';   //error: read-only variable is not assignable
	//この変更ができてしまうと呼び出し元の値も変わってしまう。
}

/**
 * char const *pで値のみを保護する。
 * 参照は書き換え可能
 * @param p [description]
 */
void valueOnlyProtect(char* const p){
	//p = "test";//error: cannot assign to variable 'p' with const-qualified type 'char *const'
	//ポインタの値を"test"の参照で書き換えることができない。

	//*p = 't';//Bus error: 10
	//Busエラーという謎のエラーがでた。
	//🚌プップ~
	//この書き換えは本書的にはできるっぽいが。。。このエラーは謎。

}

void valueAndReferenceProtect(const char *const p){
	//p="test";//error: cannot assign to variable 'p' with const-qualified type 'const char *const'
	//参照の変更は許可されない

	//*p = 't';//error: read-only variable is not assignable
	//参照先の値も保護されている。
}

void main(){

	//アドレスのみの保護
	char *str = "test";
	valueOnlyProtect(str);
	printf(str);

}
