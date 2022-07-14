macro(find_files filelist currentdir predicate)
    file(GLOB files_pred LIST_DIRECTORIES false RELATIVE ${currentdir} ${predicate})

    foreach (file_pred ${files_pred})
        message(STATUS "Found file: ${file_pred}")
        list(APPEND filelist ${file_pred})
    endforeach ()
endmacro()