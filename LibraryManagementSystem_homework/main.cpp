#include <iostream>
#include "Book.h"
#include "Member.h"
#include <vector>

int main()
{
    vector<Book> books;
    vector<Member> members;

    Book book1("Human Anatomy", "Dr.Ashvini Kumar Dwivedi", "00102948290");
    Book book2("Come!Let's Run", "Ma. Subramanian", "2300094993");

    Member member1("Yordan", 22, "20439");
    member1.borrowBook(&book1);

    Member member2("Ivan", 35, "55765");
    member2.borrowBook(&book2);

    Member member3("Yoana", 18, "94309");
    member3.borrowBook(&book2);

    books.push_back(book1);
    books.push_back(book2);
    members.push_back(member1);
    members.push_back(member2);
    members.push_back(member3);

    for (int i = 0; i < books.size(); i++) {
        books[i].display();
        cout << endl;
    }

    for (int i = 0; i < members.size(); i++) {
        members[i].display();
        cout << endl;
    }


    
}
