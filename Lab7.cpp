#include <iostream>
#include <string>

using namespace std;

class Pen {
public:
    string color;
};

class Pencil {
public:
    bool mechanical;
};

class Dry_Erase {
public:
    string color;
};

class Whiteboard {
public:
    void write(Pen u, string m) {
    }
    void write(Pencil u, string m) {
    }
    void write(Dry_Erase u, string m) {
        message = m;
    }
    void erase(Pen u) {
    }
    void erase(Pencil u) {
    }
    void erase(Dry_Erase u) {
        message = "";
    }
    string message = "";
};

class Paper {
public:
    void write(Pen u, string m) {
        message = m;
    }
    void write(Pencil u, string m) {
        message = m;
    }
    void write(Dry_Erase u, string m) {
        message = m;
    }
    void erase(Pen u) {
    }
    void erase(Pencil u) {
        message = "";
    }
    void erase(Dry_Erase u) {
    }
    string message = "";
};


int main() {
    Pen u1;
    Pencil u2;
    Dry_Erase u3;
    Whiteboard w;
    Paper p;
    w.write(u1, "This message is written in pen");
    cout << "Message on whiteboard with pen: " << w.message << endl;
    w.write(u2, "This message is written in pencil");
    cout << "Message on whiteboard with pencil: " << w.message << endl;
    w.write(u3, "This message is written in dry-erase");
    cout << "Message on whiteboard with dry-erase: " << w.message << endl;
    w.erase(u1);
    cout << "Message on whiteboard after erasing with pen: " << w.message << endl;
    w.erase(u2);
    cout << "Message on whiteboard after erasing with pencil: " << w.message << endl;
    w.erase(u3);
    cout << "Message on whiteboard after erasing with dry-erase: " << w.message <<
        endl;
    p.write(u2, "This message is written in pencil");
    cout << "Message on paper with pencil: " << p.message << endl;
    p.erase(u2);
    cout << "Message on paper after erasing with pencil: " << p.message << endl;
    p.write(u1, "This message is written in pen");
    cout << "Message on paper with pen: " << p.message << endl;
    p.erase(u1);
    cout << "Message on paper after erasing with pen: " << p.message << endl;

    return 0;
}