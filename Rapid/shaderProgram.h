#ifndef SHADER_PROGRAM_CLASS_H
#define SHADER_PROGRAM_CLASS_H

#include <glad/glad.h>
#include "shader.h"
#include <vector>

using namespace std;

class ShaderProgram {
public: 
  unsigned ID;
  /// <summary>
  /// Create a new shader and populate the ID
  /// </summary>
  ShaderProgram();
  /// <summary>
  /// ShaderProgram Deconstructor 
  /// </summary>
  ~ShaderProgram();
  /// <summary>
  /// Attach a shader to shader program
  /// </summary>
  /// <param name="shader">Shader</param>
  void addShader(Shader &shader);
  /// <summary>
  /// Link shader program to current context
  /// </summary>
  void link();

  /// <summary>
  /// Use shader program in the current context
  /// </summary>
  void use();
  
  /// <summary>
  /// Set float uniform value
  /// </summary>
  /// <param name="name">uniform name</param>
  /// <param name="f">uniform value</param>
  void setFloat(const std::string name, float f);

  /// <summary>
  /// Get uniform location in this shader program
  /// </summary>
  /// <param name="name">name of the uniform</param>
  /// <returns>ID of uniform</returns>
  GLint getUniformID(const char* name);
private:
  vector<Shader> shaders;
};

#endif