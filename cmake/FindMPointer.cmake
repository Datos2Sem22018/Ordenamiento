set(FIND_MPOINTER_PATHS
        ~/Escritorio/MPointer)

find_path(MPOINTER_INCLUDE_DIR MPointer.h MPointerGC.h Node.h RC.h HashEntry.h HashTable.h LinkedList.h ClientSocket.h ServerSocket.h
        PATH_SUFFIXES include
        PATHS ${FIND_MPOINTER_PATHS})

find_library(MPOINTER_LIBRARY
        NAMES Proyecto1
        PATH_SUFFIXES lib
        PATHS ${FIND_MPOINTER_PATHS})