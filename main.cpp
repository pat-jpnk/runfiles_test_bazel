#include <iostream>
#include <string>
#include <memory>
#include "rules_cc/cc/runfiles/runfiles.h"


int main(int argc, char** argv) {
  try {
    using rules_cc::cc::runfiles::Runfiles;
    
    std::string error;
    std::unique_ptr<Runfiles> runfiles(Runfiles::Create(argv[0], BAZEL_CURRENT_REPOSITORY, &error));
    
    // "runfile_test" is the module name attribute
    // "data/example.json" is the path relative from the project root
    std::string path = runfiles->Rlocation("cpp_example/data/example.json");  
    
    std::cout << "Resolved path: " << path << std::endl;
    
    } catch (const std::exception& e) {
    	std::cerr << "Caught exception: " << e.what() << std::endl;
    	return 1; 
    }
    return 0;
  }
