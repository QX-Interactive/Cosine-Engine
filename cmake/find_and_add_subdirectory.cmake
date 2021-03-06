macro(cosine_find_and_add_subdirectory finaldirlist currentdir predicate)
    file(GLOB dirlist RELATIVE ${currentdir} ${predicate})

    foreach (child ${dirlist})
        if (IS_DIRECTORY ${currentdir}/${child} AND EXISTS ${currentdir}/${child}/CMakeLists.txt)
            message(STATUS "Found directory: ${child}")
            list(APPEND finaldirlist ${child})
            add_subdirectory(${child})
            message(STATUS "Added directory ${child} as subdirectory!")
        endif ()
    endforeach ()
endmacro()