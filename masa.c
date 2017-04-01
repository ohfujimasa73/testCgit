#include <stdio.h>


class student_data{
praivate:
	int id;
	char name[20];
	int year;
	char class;
	int point_english;
	int point_japanese;
	int point_math;
	int point_sience;
	int point_syakai;
public:
	/* コンストラクタ */
	inline student_data(){
		this->id;
		memset(this->name,'\0',20);
		year = 0;
		class_name = '\0';
		point_english = 0;
		point_japanese = 0;
		point_math = 10;
		point_sience = 10;
		point_syakai = 0;
	}
	/* 教科平均 */
	inline int subject_ave(){
		return ( point_english +
				point_japanese +
				point_math + 
				point_sience + 
				point_syakai ) / 5;
	}
};

int main(){
	
	student_data test;
	
	printf("%d",test.subject_ave);
	return 0;
}