#include <iostream>

using namespace std;

class Student {
	
	public : 
		
	int i, j, n, scores[0][5], tScore[0], userScore, temp;
	
	void input() {
		cin>>n;	
		tScore[n] = {0};
		
		for(i = 0; i < n; i++) {
			cout<<tScore[i]<<"-";
		}
		
		for(i = 0; i < n; i++) {
			for(j = 0; j < 5; j++) {
				cin>>scores[i][j];
			}
		}
		
	}
	
	
	void display() {
		for(i = 0; i < n; i++) {
			for(j = 0; j < 5; j++) {
				cout<<scores[i][j]<<" ";
			}
			cout<<endl;
		}
		/*

		for(i = 0; i < n; i++) {
			cout<<tScore[i]<<" ";
		} */
	}
	
	void calculateTotalScore() {
		for(i = 0; i < n; i++) {
			tScore[i] = 0;
		}
		
		for(i = 0; i < n; i++) {
			cout<<tScore[i]<<"-";
		}
		/*
		for(i = 0; i < 5; i++) {
			tScore[0] += scores[0][i];
		}*/
		
		for(i = 0; i < n; i++) {
			for(j = 0; j < 5; j++) {
				tScore[i]+=scores[i][j];		
			}
		}
		
		for(i = 0; i < n; i++) {
			cout<<tScore[i]<<" ";
		}
	}
};

int main() {
	Student kristen;
	cout<<"Assalamualaikum"<<endl;
	kristen.input();
	kristen.display();
	kristen.calculateTotalScore();

}
