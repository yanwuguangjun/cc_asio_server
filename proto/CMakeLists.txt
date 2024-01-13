# # 下载远程 protoc 并 使用protoc 编译 src 内的 所有 proto 文件
# # execute_process(COMMAND wget https://github.com/protocolbuffers/protobuf/releases/download/v25.1/protoc-25.1-win64.zip)
# # execute_process(COMMAND unzip protoc-25.1-win64.zip -d ${CMAKE_CURRENT_SOURCE_DIR}/build/protoc})
# # 

# set(FILE_URL "https://github.com/protocolbuffers/protobuf/releases/download/v25.1/protoc-25.1-win64.zip")  
# set(DOWNLOADED_FILE "${CMAKE_CURRENT_SOURCE_DIR}/../tool/download/protoc.zip")  
# set(EXTRACTED_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../tool/protoc")  
# set(ProtocFile "${CMAKE_CURRENT_SOURCE_DIR}/../tool/protoc/bin/protoc.exe")  
  
# # 下载文件  
# if(EXISTS ${DOWNLOADED_FILE})
# else()
#     file(DOWNLOAD ${FILE_URL} ${DOWNLOADED_FILE})  
# endif()

# if(EXISTS "C:/Program Files/7-Zip/7z.exe")
#     set(ENV{PATH} "$ENV{PATH};C:/Program Files/7-Zip")

#     # 检查7-Zip是否安装  
#     find_program(SEVEN_ZIP_PATH 7z)
#     if(NOT SEVEN_ZIP_PATH)  
#         message(FATAL_ERROR "7-Zip not found! Please install 7-Zip and make sure it's in your PATH.")  
#     endif()  
# endif()



# if(EXISTS  ${EXTRACTED_DIR})
#     file(REMOVE_RECURSE  ${EXTRACTED_DIR})
#     message("删除" ${EXTRACTED_DIR})  
# endif()

# # 使用7-Zip解压缩文件  
# execute_process(  
#     COMMAND ${SEVEN_ZIP_PATH} x ${DOWNLOADED_FILE} -o${EXTRACTED_DIR}  
#     RESULT_VARIABLE extract_result  
# )  

# message(STATUS " 解压成功 ")  


# if(NOT extract_result EQUAL 0)  
#     message(FATAL_ERROR "Failed to extract archive!")  
# else()
#     message(STATUS "File downloaded and extracted successfully!")
# endif()  



# execute_process(COMMAND ${ProtocFile} -I=${CMAKE_CURRENT_SOURCE_DIR}/include --cpp_out=${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/include/*.proto)



# file(GLOB_RECURSE SRC_LIST src/*.cc)

# find_package(Protobuf CONFIG REQUIRED)

# # include(FetchContent)

# # FetchContent_Declare(protobuf
# #   QUIET
# #   URL https://github.com/protocolbuffers/protobuf/releases/download/v25.2/protobuf-25.2.tar.gz
# # )

# # FetchContent_MakeAvailable(protobuf)


# add_library(proto ${SRC_LIST})

# target_include_directories(proto PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src )

# target_link_libraries(proto PUBLIC protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)

# message( "-- proto build end --")  
