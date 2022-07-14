macro(find_files filelist currentdir predicate_one predicate_two)
    file(GLOB files_pred_one LIST_DIRECTORIES false RELATIVE ${currentdir} ${predicate_one})

    foreach (file_pred_one ${files_pred_one})
        message(STATUS "Found file: ${file_pred_one}")
        list(APPEND filelist ${file_pred_one})
    endforeach ()

    file(GLOB files_pred_two LIST_DIRECTORIES false RELATIVE ${currentdir} ${predicate_two})

    foreach (file_pred_two ${files_pred_two})
        message(STATUS "Found file: ${file_pred_two}")
        list (APPEND filelist ${file_pred_two})
    endforeach ()
endmacro()