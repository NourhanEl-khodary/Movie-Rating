// Movie rating.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Authocr: Nourhan Ihab
//ID: 20170324
//Title: Movie Rating 
//Version: 1.0

#include "pch.h"
#include <iostream>

using namespace std;

class Movie {
private:
	string name;
	int MPAA;

public:
	//Intializing the counters
	static int count1;
	static int count2;
	static int count3;
	static int count4;
	static int count5;

	Movie()
	{
	
	}

	Movie(string n, int r) {
		name = n;
		MPAA = r;
	}

	void setName(string n) {
		name = n;
	}

	void setMPAA(int r) {
		MPAA = r;
	}

	string getName() {
		return name;
	}

	int getMPAA() {
		return MPAA;

	}

	//Adding the ratings
	void addRating(int MPAA) {
		if (MPAA == 1) {
			count1++;
		}

		else if (MPAA == 2) {
			count2++;
		}

		else if (MPAA == 3) {
			count3++;
		}

		else if (MPAA == 4) {
			count4++;
		}

		else if (MPAA == 5) {
			count5++;
		}
	}

	//Getting the average rating for the movie
	float getAverage() {
		float add = count1 + count2 + count3 + count4 + count5;
		float total = count1 + (2 * count2) + (3 * count3) + (4 * count4) + (5 * count5);
		return (total / add);
	}

};

//The static counters for the ratings
int Movie::count1 = 0;
int Movie::count2 = 0;
int Movie::count3 = 0;
int Movie::count4 = 0;
int Movie::count5 = 0;

int main()
{
	Movie m1("Go", 4);
	Movie m2("Go", 3);
	Movie m3("Go", 2);
	Movie m4("Go", 5);
	Movie m5("Go", 5);

	m1.addRating(4);
	m2.addRating(3);
	m3.addRating(2);
	m4.addRating(5);
	m5.addRating(5);

	cout << m5.getAverage() << endl;
	return 0;
}

