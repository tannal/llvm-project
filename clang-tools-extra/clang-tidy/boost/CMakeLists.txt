set(LLVM_LINK_COMPONENTS
  support
  FrontendOpenMP
  )

add_clang_library(clangTidyBoostModule STATIC
  BoostTidyModule.cpp
  UseRangesCheck.cpp
  UseToStringCheck.cpp

  LINK_LIBS
  clangTidy
  clangTidyUtils

  DEPENDS
  omp_gen
  ClangDriverOptions
  )

clang_target_link_libraries(clangTidyBoostModule
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangLex
  )
