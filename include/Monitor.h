#ifndef MONITOR_H_
#define MONITOR_H_

#include "Projector.h"
/**
 * Monitor class.
 */
class Monitor {
public:
    Monitor();
    ~Monitor();
    void display(Scene scene);
    void addShader(Shader shader);
    std::vector<Shader> getShaders();
    Projector * getProjector();

private:
    unsigned int bufferSize;
    std::vector<Shader> shaders;
    Projector * proj;
};

#endif
