#ifndef VANSING_OOP_IDGENERATOR_H
#define VANSING_OOP_IDGENERATOR_H

template <typename T>class IdGenerator{
private:
    static T id;
public:
    static T getId(){
        id = id + 1;
        return id;
    }
};

template <> class IdGenerator<float>{
private:
    static float id;
public:
    static float getId(){
        id += 0.1;
        return id;
    }
};

#endif
