#include <stdio.h>

// Struct

struct person {
	char *name;
	char *sex;
	int age;
	char *add;
	char *job;
};

int main(void) {
	struct person mizo;
	mizo.name = "MIZOGUCHIKoki";
	mizo.sex = "Man";
	mizo.age = 20;
	mizo.add = "kumamoto";
	mizo.job = "Student";
	printf("%sは%d歳，%sで%sをしています\n", mizo.name, mizo.age, mizo.add, mizo.job);
	struct person musashi = { "TAKESHITAMusashi", "Man", 20, "Aichi", "Student" };
	printf("%sは%d歳，%sで%sをしています\n", musashi.name, musashi.age, musashi.add, musashi.job);
	return 0;
}
