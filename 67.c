#include <stdio.h>

struct Date{
	unsigned int year;
	unsigned int month;
	unsigned int day;
};

struct Book{
	char title[128];
	char author[40];
	float price;
	struct Date date;
	char publisher[40]; 
};
int main() {
	struct Book book = {
		.title = 'Little Prince',
		.author = 'shengaikesupeili',
		.price = 89.89,
		.date = {2019,10,1},
		.publisher = '企鹅出版社'
	} ;
	
	printf('%s\n',book.title);
	printf('%s\n',book.author);
	printf('%s\n',book.publisher);
	printf('%f\n',book.price);
//	printf('%d-%d-%d\n',&book.date.year,&book.date.month,&book.date.day);
}

