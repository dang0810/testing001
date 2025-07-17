#include <stdio.h>
#include <iostream>
#include <string>
#include "main.h"
using namespace std;

string CatReaction(const string& food) {
	if (food == "fish") {
		return "The cat purrs happily.";
	}
	else {
		return "The cat looks confused.";
	}
}

void main() {
	cout << CatReaction("fish");
}