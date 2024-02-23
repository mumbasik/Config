// Config.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class CPU {
protected:
    string model;
   
public:
    CPU() {
        model = "i5";
        
    }
    CPU(string mod) {
        this->model = mod;
        
    }
    void Shooow() {
        cout << "About CPU: " << endl;
        cout << "Model: " << model << endl;
       
    }
};
class RAM {
protected:
    
    string model;
public:
    RAM() {
        
        model = "DDR";
    }
    RAM(string name) {
       
        this->model = name;
    }
    void Shoow() {
       
        cout << "Model: " << model << endl;
    }
};
class Mouse {
protected:
    string model;
public:
    Mouse() {
        model = "Razer";

    }
    Mouse(string model) {
        this->model = model;
    }
    void Show() {
        cout << "Mouse: " << model << endl;
    }
};
class Camera {
protected:
    string type;
public:
    Camera() {
        type = "Hyper";

    }
    Camera(string typ) {
        this->type = typ;
    }
    void Cout() {
        cout << "Type of camera: " << type << endl;
    }
};
class Printer {
protected:
    string name;
public:
    Printer() {
        name = "unknown";
    }
    Printer(string name) {
        this->name = name;
    }
    void Print() {
        cout << "Printer: " << name << endl;
    }
};
class GPU {
protected:
    string model;
    
public:
    GPU() {
        model = "unknown";
        
    }
    GPU(string model) {
        this->model = model;
        
    }
    void OUTPUT() {
        cout << "About GPU: " << endl;
        cout << "Model: " << model << endl;
        
    }
};
class Laptop: public CPU, RAM, Mouse, Camera, Printer, GPU {
    CPU cp;
    RAM r;
    Mouse* obj;
    Camera* camer;
    Printer* prin;
    GPU g;
    int money;
public:
    Laptop();
    Laptop( int money , string model,  string modeel, Mouse* mod, Camera* type, Printer* n, string mo);
    void Prnt();
       
};
Laptop::Laptop() {
    money = 0;
}
Laptop::Laptop( int money, string model, string modeel, Mouse* mod, Camera* type, Printer* n, string mo): cp(model) , r(modeel), obj(mod), camer(type), prin(n) , g(mo)
{
    this->money = money;
}
void Laptop::Prnt() {
    cout << "About PC: " << endl;
    cout << "Money: " << money << endl;
    cp.Shooow();
    r.Shoow();
    obj->Show();
    camer->Cout();
    prin->Print();
    g.OUTPUT();
}
int main()
{
    Mouse mouse("LOGITECH G pro");
    Camera camera("Logitech 487");
    Printer printer("Samsung");
    Laptop q1(1000, "I913900k", "DDR5 64Gb", &mouse, &camera, &printer, "RTX4090");
    q1.Prnt();
}


