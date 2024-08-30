#include <iostream>
using namespace std;

class Menu {
private:
    string title;
    string author;
    int year;

public:
    void setTitle(string t) { 
        title = t; 
    }
    void setAuthor(string a) { 
        author = a; 
    }
    void setYear(int y) { 
        year = y; 
    }

    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }

    int getYear() { 
        return year;
    }
};

int main() {
	
	Menu Books[5];
	int BookCtr=0;	
	
    int choice;
    
    do{
    cout << "Input Add Book-1, Display Book-2, Search Book-3, Exit-4: ";
    cin >> choice;
    cin.ignore();
		    switch (choice) {
		    	
			        case 1: {
			    	if (BookCtr<5) {
			            Menu s1;
			
			            cout << "Enter title: ";
			            string title;
			            getline(cin, title);
						Books[BookCtr].setTitle(title);
			
			            cout << "Enter author: ";
			            string author;
			            getline(cin, author);
			            Books[BookCtr].setAuthor(author);
			
			            cout << "Enter year: ";
			            int year;
			            cin >> year;
			            Books[BookCtr].setYear(year);
			            
			            BookCtr++;
						
						if (BookCtr==5){
						cout << "Bookshelf can only hold 5 books." << endl;
			            break;
						} 
					}
				}
				
				case 2: {
					
					if (BookCtr==0){
						cout<<"Bookshelf is empty."<<endl;
					}
					
                    for (int i = 0; i < BookCtr; i++) {
                        cout << "Book " << i + 1 << ":" << endl;
                        cout << "  Title: " << Books[i].getTitle() << endl;
                        cout << "  Author: " << Books[i].getAuthor() << endl;
                        cout << "  Year: " << Books[i].getYear() << endl;
                        cout << endl;
                    }
					break;
				}
				
				case 3: {
					string TitleSearch;
					cout<<"Book search(Enter Book Title): ";
 					getline(cin, TitleSearch);
					
				    for (int i = 0; i < 5; ++i) {
				        if (TitleSearch==Books[i].getTitle()) {
				        cout << "Book Found!"<<endl;
                        cout << "Book " << i + 1 << ":" << endl;
                        cout << "  Title: " << Books[i].getTitle() << endl;
                        cout << "  Author: " << Books[i].getAuthor() << endl;
                        cout << "  Year: " << Books[i].getYear() << endl;
                        cout << endl;
				            break;
				        }
				    }
					break;
				}
		    }	
	    }while(choice !=4);
	
	    return 0;
}
