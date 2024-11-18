cmake_minimum_required(VERSION 3.16)
project(TabelaHash)

set(CMAKE_CXX_STANDARD 17)

# Adicione todos os arquivos .cpp ao executável
add_executable(hash_program main_hash.cpp hash.cpp aluno.cpp)
