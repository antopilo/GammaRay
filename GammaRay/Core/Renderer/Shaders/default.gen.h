// Generated with GammaRay shader2c.
// Probably best if you don't touch this file.
#pragma once

#include "Drivers/OpenGL3/RendererShaderOpenGL3.h"


class RendererShaderDefault : public RendererShaderOpenGL3
{
public:
    RendererShaderDefault()
    {
        static const char _vertexSource[] = {
            35, 118, 101, 114, 115, 105, 111, 110, 32, 52, 53, 48, 32, 99, 111, 114, 101, 10, 10, 108, 97, 121, 111, 117, 
            116, 40, 108, 111, 99, 97, 116, 105, 111, 110, 32, 61, 32, 48, 41, 32, 105, 110, 32, 118, 101, 99, 51, 32, 
            97, 80, 111, 115, 59, 10, 108, 97, 121, 111, 117, 116, 40, 108, 111, 99, 97, 116, 105, 111, 110, 32, 61, 32, 
            49, 41, 32, 105, 110, 32, 118, 101, 99, 52, 32, 97, 67, 111, 108, 111, 114, 59, 10, 10, 111, 117, 116, 32, 
            118, 101, 99, 51, 32, 118, 95, 112, 111, 115, 105, 116, 105, 111, 110, 59, 10, 111, 117, 116, 32, 118, 101, 99, 
            52, 32, 118, 95, 99, 111, 108, 111, 114, 59, 10, 10, 117, 110, 105, 102, 111, 114, 109, 32, 109, 97, 116, 52, 
            32, 109, 111, 100, 101, 108, 59, 10, 117, 110, 105, 102, 111, 114, 109, 32, 109, 97, 116, 52, 32, 118, 105, 101, 
            119, 59, 10, 117, 110, 105, 102, 111, 114, 109, 32, 109, 97, 116, 52, 32, 112, 114, 111, 106, 101, 99, 116, 105, 
            111, 110, 59, 10, 10, 118, 111, 105, 100, 32, 109, 97, 105, 110, 40, 41, 10, 123, 10, 32, 32, 32, 32, 118, 
            95, 112, 111, 115, 105, 116, 105, 111, 110, 32, 61, 32, 97, 80, 111, 115, 59, 10, 32, 32, 32, 32, 118, 95, 
            99, 111, 108, 111, 114, 32, 61, 32, 118, 101, 99, 52, 40, 97, 80, 111, 115, 44, 32, 49, 46, 48, 41, 59, 
            10, 10, 32, 32, 32, 32, 103, 108, 95, 80, 111, 115, 105, 116, 105, 111, 110, 32, 61, 32, 112, 114, 111, 106, 
            101, 99, 116, 105, 111, 110, 32, 42, 32, 118, 105, 101, 119, 32, 42, 32, 109, 111, 100, 101, 108, 32, 42, 32, 
            118, 101, 99, 52, 40, 97, 80, 111, 115, 44, 32, 49, 46, 48, 41, 59, 10, 125, 10, 10, 
        };
        static const char _fragmentSource[] = {
            35, 118, 101, 114, 115, 105, 111, 110, 32, 52, 53, 48, 32, 99, 111, 114, 101, 10, 10, 108, 97, 121, 111, 117, 
            116, 40, 108, 111, 99, 97, 116, 105, 111, 110, 32, 61, 32, 48, 41, 32, 111, 117, 116, 32, 118, 101, 99, 52, 
            32, 99, 111, 108, 111, 114, 59, 10, 10, 105, 110, 32, 118, 101, 99, 51, 32, 118, 95, 112, 111, 115, 105, 116, 
            105, 111, 110, 59, 10, 105, 110, 32, 118, 101, 99, 52, 32, 118, 95, 99, 111, 108, 111, 114, 59, 10, 10, 118, 
            111, 105, 100, 32, 109, 97, 105, 110, 40, 41, 10, 123, 10, 32, 32, 32, 32, 99, 111, 108, 111, 114, 32, 61, 
            32, 118, 101, 99, 52, 40, 118, 95, 112, 111, 115, 105, 116, 105, 111, 110, 32, 42, 32, 48, 46, 53, 32, 43, 
            32, 48, 46, 53, 44, 32, 49, 46, 48, 41, 59, 10, 32, 32, 32, 32, 99, 111, 108, 111, 114, 32, 61, 32, 
            118, 95, 99, 111, 108, 111, 114, 59, 10, 125, 10, 
        };
        Setup(_vertexSource, _fragmentSource, nullptr, "Default");
    }
};