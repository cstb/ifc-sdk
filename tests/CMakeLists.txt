foreach(dir
        tests
        Derived
        tickets
        Unit)

    add_subdirectory(${dir})

endforeach(dir)
