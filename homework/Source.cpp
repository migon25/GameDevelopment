#include <iostream>
#include "vec3.h"
#include <string>
using namespace std;


int main() {

	vec3<float> v1 = { 6, 7, 8 };
	vec3<float> v2 = { 2 };
	vec3<float> v3 = { 3, 5, 7};

	cout << "v1 = ( " << v1.x << " " << v1.y << " " <<v1.z << " ) " << endl;
	cout << "v2 = ( " << v2.x << " " << v2.y << " " << v2.z << " ) " << endl;
	cout << "v3 = ( " << v3.x << " " << v3.y << " " << v3.z << " ) " << endl;
	cout << endl;
	
	if (v2.IsZero()) {
		cout << " V2 members are all equal to 0 "<< endl;
	}
	else cout << " v2 = ( " << v2.x << " " << v2.y << " " << v2.z << " ) " << endl;

	if (v1.IsZero()) {
		cout << " V1 members are all equal to 0 " << endl;
	}
	else {
		cout << " V1 isn't 0, it's = ( " << v1.x << " " << v1.y << " " << v1.z << " ) " << endl;
	}

	if (v3.IsZero()) {
		cout << " V2 members are all equal to 0";
	}
	else {
		cout << " V3 isn't 0, it's = ( " << v3.x << " " << v3.y << " " << v3.z << " ) " << endl;
	} 

	if (v1 == v3) {
		cout << "\n V1 equals V2. \n ";
	}
	else {
		cout << "\n V1 and V2 are not equal. \n ";
	}
	float dist = v1.DistanceTo(v3);
	cout << "\n Distance between V1 and V3 is " << dist << endl;

	v3 = v2 + v1;
	cout << "\n V3 equals to sum of v2 and 1  ( " << v3.x << " " << v3.y << " " << v3.z << " ) " << endl;

	v1.Normalize();
	cout<<"\n Normalise V1 = ( " << v1.x << " " << v1.y << " " << v1.z << " ) " << endl;

	system("pause");

	return 0;
}