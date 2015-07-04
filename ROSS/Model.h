#ifndef MODEL_H
#define MODEL_H

template<typename subclass>
Model {
    void init();
    void preRun();
    void event();
    void reverseEvent();
    void final();
    void mapping();
};

#endif /* MODEL_H */
