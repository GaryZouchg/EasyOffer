PROJECT (HELLO) 
# 指定工程名称  隐式定义了HELLO_BINARY_DIR和HELLO_SOURCE_DIR
set(CMAKE_CXX_STANDARD 11)

SET(SRC_LIST main.cpp)
MESSAGE(STATUS "This is BINARY dir " ${HELLO_BINARY_DIR}) #[SEND_ERROR | STATUS | FATAL_ERROR]
MESSAGE(STATUS "This is SOURCE dir "${HELLO_SOURCE_DIR})
ADD_EXECUTABLE(hello ${SRC_LIST} )  #定义这个工程会生成一个可执行文件	
#指令是大小写无关的,参数和变量是大小写相关的

