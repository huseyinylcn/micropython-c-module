# Modülünüz için bir kütüphane tanımlayın
add_library(usermod_mymodule INTERFACE)

# Modülünüzün kaynak dosyalarını ekleyin
target_sources(usermod_mymodule INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/mymodule.c
)

# Eğer başlık dosyalarınız varsa, include directory ekleyin
target_include_directories(usermod_mymodule INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

# Usermod hedefine kütüphanenizi bağlayın
target_link_libraries(usermod INTERFACE usermod_mymodule)
