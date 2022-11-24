#include <iostream>
using namespace std;

int num_of_haribos = 40;
int num_of_students = 14;
int num_of_bags_each = num_of_haribos / num_of_students;
int bags_left_over = num_of_haribos / num_of_bags_each;
int food_left_for_me = num_of_haribos - (num_of_haribos / num_of_bags_each);

int main()
{
	num_of_bags_each

	cout << "Each student gets " << num_of_bags_each << " packets" >> endl;
	cout << "Left over for me " << food_left_for_me << " packets" << endl;

}