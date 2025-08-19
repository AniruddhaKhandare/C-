#include <iostream>
#include <cstring>
using namespace std;
class CWAK
{
protected:
    string title;
    float rating;

public:
    CWAK(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; //Do nothing function ---> pure virtual function 
};

class CWAKVideo : public CWAK
{
    float videolength;

public:
    CWAKVideo(string s, float r, float vl) : CWAK(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amzing video with title " << title << endl;
        cout << "Ratings: " << rating << " Out of 5 stars" << endl;
        cout << "Length of this video is: " << videolength << "minutes" << endl;
    }
};

class CWAKText : public CWAK
{
    int words;

public:
    CWAKText(string s, float r, int wc) : CWAK(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " Out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is: " << words << "words" << endl;
    }
};
int main()
{
    string title = new char[30];
    float rating, vlen;
    int words;

    // For Code With Anu Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.86;
    CWAKVideo djVideo(title, rating, vlen);
    //djvideo.display();

    // For Code With Anu Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.14;
    CWAKText djText(title, rating, words);
    //djText.display();

    CWAK *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/* Rules for virtual functions
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual functin in base class might not be used.
5. If a virtual function is defined in the base class, there is no necessity of redefining it in the derived class
*/