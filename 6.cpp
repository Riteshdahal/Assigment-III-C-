#include <iostream>
using namespace std;

class Video
{
    string titles;
    int views, likes, dislikes;

public:
    Video()
    {
        titles = "";
        views = 0;
        likes = 0;
        dislikes = 0;
    }
    Video(string title, int view, int like, int dislike)
    {
        titles = title;
        views = view;
        likes = like;
        dislikes = dislike;
    }
    void display()
    {
        cout << "Title = " << titles << endl;
        cout << "Views = " << views << endl;
        cout << "Likes = " << likes << endl;
        cout << "Dislikes = " << dislikes << endl;
    }

    friend void operator>(Video x, Video y);
};

void operator>(Video i, Video j)
{
    if (i.views > j.views && i.likes > j.likes && j.dislikes > i.dislikes)
    {

        cout << "First Video is Most loved than Second One" << endl;
    }
    else
    {

        cout << "Second video is more loved" << endl;
    }
}

int main()
{
    Video v1("Blender Animation Tutorial", 1236, 5678, 4);
    Video v2("Blender VFX Tutorial", 235, 5658, 5);
    v1.display();
    v2.display();

    v1 > v2;
}